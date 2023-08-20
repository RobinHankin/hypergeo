// [[Rcpp::depends(RcppArmadillo)]]
// [[Rcpp::interfaces(r, cpp)]]

#include <RcppArmadillo.h>
#define _USE_MATH_DEFINES
#include <math.h>

// using namespace Rcpp;

bool isgood(const arma::cx_vec x, const double tol)
{ 
  size_t i=0;
  for( i=0 ; i < x.size() ; i++){
    if(x[i] != NA_REAL)
      if ( abs(x[i]) > tol )
        return 0;
  }  
  return 1;
}

// [[Rcpp::export]]
arma::cx_vec genhypergeo_series( const arma::cx_vec U,
                                 const arma::cx_vec L,
                                       arma::cx_vec z,
                                 const double tol,
                                 const int maxiter,
                                 const bool check_mod,
                                 const bool polynomial)
{
  
  arma::cx_vec fac = z * 0 + 1.0;
  arma::cx_vec temp = fac;
  arma::cx_vec series = z*0;
  Rcpp::LogicalVector greater( z.size() );
  size_t i=0;
  
  if(check_mod){
    
    if( U.size() > (L.size()+1) ){
      greater = abs(z)>0;
    } else if(U.size() > L.size()) {
      greater = abs(z)>1;
    } else {
      greater  = abs(z)<0;
    }
    if( is_true( Rcpp::all(greater) ) ){
      return(z * NA_REAL);
    }else{
      for( i = 0 ; i < z.size() ; i++){
        if( greater[i] ) z[i] = NA_REAL;
      }
    } 
  }
  
  if(maxiter==0){
    return z*0+fac;
  }
  
  for ( i = 0; i < maxiter; i++ ) {
    fac = fac * ( prod(U + i) / prod(L + i) ) % ( z / ( i + 1 ) );
    series = temp + fac;
    if ( isgood( series - temp, tol ) ){
      return series;
    }
    temp = series;
  }
  
  if(polynomial){
    return series;
  }else{
    Rcpp::warning("Series not converged.");
    return z * NA_REAL;  
  }
  
}


// [[Rcpp::export]]
Rcpp::ComplexVector genhypergeo_series_cpp(
				      const Rcpp::NumericVector & real_U,
                                      const Rcpp::NumericVector & imag_U,
                                      const Rcpp::NumericVector & real_L,
                                      const Rcpp::NumericVector & imag_L,
                                      const Rcpp::NumericVector & real_z,
                                      const Rcpp::NumericVector & imag_z,
                                      const double tol,
                                      const int maxiter,
                                      const bool check_mod,
                                      const bool polynomial)
{
  
  arma::cx_vec U(Rcpp::as<arma::vec>(real_U), Rcpp::as<arma::vec>(imag_U));
  arma::cx_vec L(Rcpp::as<arma::vec>(real_L), Rcpp::as<arma::vec>(imag_L));
  arma::cx_vec z(Rcpp::as<arma::vec>(real_z), Rcpp::as<arma::vec>(imag_z));
  
  return Rcpp::wrap( genhypergeo_series( U, L, z, tol, maxiter, check_mod, polynomial ) );
}

