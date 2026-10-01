\name{f15.1.20}
\alias{f15.1.20}
\title{Hypergeometric function at \eqn{z=1}}
\description{
The Gauss hypergeometric function at primary argument \eqn{z=1}
}
\usage{f15.1.20(A, B, C)}
\arguments{\item{A,B,C}{Parameters}}
\details{

  From AMS-55, equation 15.1.20:

  \deqn{
    F(a,b,c;1) =
    \frac{\Gamma(c)\Gamma(c-a-b)}{\Gamma(c-a)\Gamma(c-b)},\qquad
    c\neq 0, -1, -2,\ldots, Re(c-a-b)>0
  }{see AMS-55}
  
  This is used in the package in the case \eqn{z=1} when (for example),
  equation 15.3.6 breaks down.
  

}
\references{
  M. Abramowitz and I. A. Stegun 1965. \emph{Handbook of
    mathematical functions}.  New York: Dover
}
\author{Robin K. S. Hankin}
\examples{

A <- 0.4 + 0.3i
B <- -0.21 - 0.1i
C <- 1.2 + 0.11i

f15.1.20(A, B, C)
(complex_gamma(C)*complex_gamma(C-A-B)) / (complex_gamma(C-A)*complex_gamma(C-B))

    exp(
        + complex_gamma(C    , log=TRUE)
        + complex_gamma(C-A-B, log=TRUE)
        - complex_gamma(C-A  , log=TRUE)
        - complex_gamma(C-B  , log=TRUE)
    )

}
\keyword{math}
