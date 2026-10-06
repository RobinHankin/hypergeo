\name{f15.3.3}
\alias{f15.3.3}
\alias{f15.3.4}
\alias{f15.3.5}
\alias{f15.3.6}
\alias{f15.3.7}
\alias{f15.3.8}
\alias{f15.3.9}
\title{Various transformation formulae for the hypergeometric function}
\description{
  Transformations of the hypergeometric function: equations 15.3.3 to 15.3.9
}
\usage{
f15.3.3(A, B, C, z, tol = 0, maxiter = 2000)
f15.3.4(A, B, C, z, tol = 0, maxiter = 2000)
f15.3.5(A, B, C, z, tol = 0, maxiter = 2000)
f15.3.6(A, B, C, z, tol = 0, maxiter = 2000)
f15.3.7(A, B, C, z, tol = 0, maxiter = 2000)
f15.3.8(A, B, C, z, tol = 0, maxiter = 2000)
f15.3.9(A, B, C, z, tol = 0, maxiter = 2000)
}

\arguments{
  \item{A,B,C}{Parameters of the hypergeometric function}
  \item{z}{Primary complex argument}
  \item{tol,maxiter}{parameters passed to \code{genhypergeo()}}
}
\details{
  The naming scheme follows that of Abramowitz and Stegun.

  The rather awkward constuction of \code{f15.3.6()} and
  \code{f15.3.9()} is due to the fact that R returns \code{NaN + NaNi}
  for \code{0^z} for any \code{z} with \eqn{Im(z)\neq 0}{omitted}.
  
}
\references{
  M. Abramowitz and I. A. Stegun 1965. \dQuote{Handbook of
    mathematical functions}.  New York: Dover
} 
\author{Robin K. S. Hankin}
\seealso{\code{\link{hypergeo}}}
\examples{
f15.3.4(1.1,2.2,3.4,-1+0.1i)
}
\keyword{math}
