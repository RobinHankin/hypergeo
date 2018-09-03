// [[Rcpp::interfaces(r, cpp)]]
// [[Rcpp::depends(RcppArmadillo)]]

#include <RcppArmadillo.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include "../inst/include/hypergeo.h"

// using namespace Rcpp;

// [[Rcpp::export]]
arma::cx_vec complex_lngamma( const arma::cx_vec z )
{
  int i = 0;
  
  arma::cx_vec out = z * 0;
  
  for( i = 0 ; i < z.size(); i++ ){
    if( real(z[i]) < 0.5 ){ // left
      out[ i ] = ( log(M_PI) - log( sin(M_PI * z[ i ]) ) - hypergeo::lanczos( 1.0 - z.subvec(i,i) ) )[0] ;
    }else{ // right
      out[ i ] = hypergeo::lanczos( z.subvec(i,i) )[0];
    }
  }
  
  return out;
  
}  


// [[Rcpp::export]]
Rcpp::ComplexVector complex_lngamma_cpp(const Rcpp::NumericVector & real,
                             const Rcpp::NumericVector & imag )
{
  
  arma::cx_vec z(Rcpp::as<arma::vec>(real), Rcpp::as<arma::vec>(imag));
  
  return Rcpp::wrap( complex_lngamma( z ) );
}

