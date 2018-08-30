// [[Rcpp::depends(RcppArmadillo)]]
// [[Rcpp::interfaces(r, cpp)]]

#include <RcppArmadillo.h>
#define _USE_MATH_DEFINES
#include <math.h>

// using namespace Rcpp;

// [[Rcpp::export]]
arma::cx_vec lanczos( arma::cx_vec z )
{
  
  int i = 0;
  int g = 7;
  double p[9] = {
    0.99999999999980993227684700473478,
    676.520368121885098567009190444019,
    -1259.13921672240287047156078755283,
    771.3234287776530788486528258894,
    -176.61502916214059906584551354,
    12.507343278686904814458936853,
    -0.13857109526572011689554707,
    9.984369578019570859563e-6,
    1.50563273514931155834e-7
  };
  
  z = z - 1;
  arma::cx_vec x = p[0] + z * 0;
  
  for( i = 2 ; i <= ( g + 2 ) ; i++ ){
    x = x + p[ i - 1 ] / ( z + i - 1 );
  }
  
  
  arma::cx_vec tee = z + g + 0.5;
  arma::cx_vec out = log(2*M_PI)/2 + (z + 0.5) % log(tee) - tee + log(x);
  
  return out;
  
}




// [[Rcpp::export]]
Rcpp::ComplexVector lanczos_cpp(const Rcpp::NumericVector & real,
                             const Rcpp::NumericVector & imag )
{
  
  if( is_false( all( real >= 0.5 ) ) ){
    Rcpp::stop("Real part must be >= 0.5");
  };
  
  arma::cx_vec z(Rcpp::as<arma::vec>(real), Rcpp::as<arma::vec>(imag));
  

  return Rcpp::wrap( lanczos( z ) );
}

