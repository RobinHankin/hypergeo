\name{cpp}
\alias{complex_gamma_cpp}
\alias{genhypergeo_series_cpp}
\alias{lanczos_cpp}
\title{Low-level C functions}
\description{Various low-level functions written in C for efficiency}
\usage{
complex_gamma_cpp(real,imag)
lanczos_cpp(real,imag)
genhypergeo_series_cpp(real_U, imag_U, real_L, imag_L,
    real_z, imag_z, tol, maxiter, check_mod, polynomial)
}
\arguments{
  \item{real,imag,real_U,imag_U,real_L,imag_L,real_z,imag_z}{Numeric
    vectors giving the real and imaginary components of arguments;
    \dQuote{U} and \dQuote{L} stand for Upper or Lower arguments
    respectively}
  \item{tol, maxiter, check_mod, polynomial}{As for
    \code{genhypergeo_series()}}
}
\author{Robin K. S. Hankin}
\note{
NOTE HERE
}
\examples{
1+1
}