\name{hypergeo-package}
\alias{hypergeo-package}
\docType{package}
\title{The hypergeometric function}
\description{
\packageDescription{hypergeo}
}
\details{
The DESCRIPTION file:
\packageDESCRIPTION{emulator}
\packageIndices{emulator}
}
\author{
  \packageAuthor{hypergeo}
  Original \proglang{R} code written by Robin Hankin, \proglang{C++} by
  Richard Morey.
  
Maintainer: \packageMaintainer{hypergeo}
}

\references{
  \itemize{
    \item 
    M. Abramowitz and I. A. Stegun 1965. \emph{Handbook of
      mathematical functions}.  New York: Dover
    \item
    R. K. S. Hankin 2015.  \dQuote{Numerical Evaluation of the Gauss
      Hypergeometric Function with the hypergeo Package}.  \emph{The R
      Journal} 7:2, pp81-88
  }
}
\keyword{ package }
\examples{
hypergeo(1.1,2.3,1.9 , 1+6i)

options(showHGcalls = TRUE)    # any non-null value counts as TRUE
hypergeo(4.1, 3.1, 5.1, 1+1i)  # shows trace back
options(showHGcalls = FALSE)   # reset


}
