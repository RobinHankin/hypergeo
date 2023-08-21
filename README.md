The `hypergeo` package: the Gauss hypergeometric function in R
================

<!-- README.md is generated from README.Rmd. Please edit that file -->

# <img src="man/figures/hypergeo.png" width = "150" align="right" />

<!-- badges: start -->

[![CRAN_Status_Badge](https://www.r-pkg.org/badges/version/hypergeo)](https://cran.r-project.org/package=hypergeo)
<!-- badges: end -->

To cite the package in publications, please use Hankin 2015.

# Overview

The `hypergeo` package provides functionality for working with the Gauss
hypergeometric function. The package uses a range of transformations to
ensure rapid numerical evaluation of the Gauss hypergeometric function,
and generalized hypergeometric functions. It is vectorized in argument
![z](https://latex.codecogs.com/png.latex?z "z"). If
![\|z\|\<1](https://latex.codecogs.com/png.latex?%7Cz%7C%3C1 "|z|<1") we
have

![{}\_{2}F\_{1}{\left(a,b;c;z\right)} =
\sum\_{n\geqslant 0}\frac{(a)\_n(b)\_nz^n}{(c)\_n n!}=
1+\frac{ab}{c}z +
\frac{a(a+1)b(b+1)}{c(c+1)2!}z^2 + \cdots](https://latex.codecogs.com/png.latex?%7B%7D_%7B2%7DF_%7B1%7D%7B%5Cleft%28a%2Cb%3Bc%3Bz%5Cright%29%7D%20%3D%0A%5Csum_%7Bn%5Cgeqslant%200%7D%5Cfrac%7B%28a%29_n%28b%29_nz%5En%7D%7B%28c%29_n%20n%21%7D%3D%0A1%2B%5Cfrac%7Bab%7D%7Bc%7Dz%20%2B%0A%5Cfrac%7Ba%28a%2B1%29b%28b%2B1%29%7D%7Bc%28c%2B1%292%21%7Dz%5E2%20%2B%20%5Ccdots "{}_{2}F_{1}{\left(a,b;c;z\right)} =
\sum_{n\geqslant 0}\frac{(a)_n(b)_nz^n}{(c)_n n!}=
1+\frac{ab}{c}z +
\frac{a(a+1)b(b+1)}{c(c+1)2!}z^2 + \cdots")

where ![(a)\_n](https://latex.codecogs.com/png.latex?%28a%29_n "(a)_n")
is the rising Pochhammer symbol; if
![\|z\|\geqslant 1](https://latex.codecogs.com/png.latex?%7Cz%7C%5Cgeqslant%201 "|z|\geqslant 1")
the series may be analytically continued.

# Installation

You can install the released version of `hypergeo` from
[CRAN](https://CRAN.R-project.org) with:

``` r
# install.packages("hypergeo")  # uncomment this to install the package
library("hypergeo")
```

# The `hypergeo` package in use

The main workhorse of the package is `hypergeo()`:

``` r
hypergeo(1/2,1/3,1/5, 1+8i)
#> [1] -0.0901118+0.2390856i
```

Observe that the hypergeometric series has radius of convergence one,
but analytic continuation is used to evaluate the function outside the
unit circle. The package works well with the visualization suite
provided by the `elliptic` package (Hankin 2008):

``` r
suppressMessages(library("elliptic"))
x <- seq(from=-2, to=2, len=100)
y <- x
z <- outer(x,1i*y, "+")
f <- hypergeo(1/2,1/3,1/5,z)

par(pty="s")
view(x,y,limit(f),code=0,drawlabel=FALSE,axes=FALSE,xlab="Re(z)",ylab="Im(z)")
```

<img src="man/figures/README-showview-1.png" width="100%" />

# References

- M. Abramowitz and I. A. Stegun 1965. *Handbook of Mathematical
  Functions*, New York: Dover.
- R. K. S. Hankin 2006. “Introducing `elliptic`, an `R` package for
  elliptic and modular functions”, *Journal of Statistical Software*,
  15(7).
- R. K. S. Hankin 2015. “Numerical evaluation of the Gauss
  hypergeometric function with the `hypergeo` package”. *The R journal*,
  7(2): 81–88
