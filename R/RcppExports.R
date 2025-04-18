# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

complex_lngamma <- function(z) {
    .Call('_hypergeo_complex_lngamma', PACKAGE = 'hypergeo', z)
}

complex_lngamma_cpp <- function(real, imag) {
    .Call('_hypergeo_complex_lngamma_cpp', PACKAGE = 'hypergeo', real, imag)
}

genhypergeo_series <- function(U, L, z, tol, maxiter, check_mod, polynomial) {
    .Call('_hypergeo_genhypergeo_series', PACKAGE = 'hypergeo', U, L, z, tol, maxiter, check_mod, polynomial)
}

genhypergeo_series_cpp <- function(real_U, imag_U, real_L, imag_L, real_z, imag_z, tol, maxiter, check_mod, polynomial) {
    .Call('_hypergeo_genhypergeo_series_cpp', PACKAGE = 'hypergeo', real_U, imag_U, real_L, imag_L, real_z, imag_z, tol, maxiter, check_mod, polynomial)
}

lanczos <- function(z) {
    .Call('_hypergeo_lanczos', PACKAGE = 'hypergeo', z)
}

lanczos_cpp <- function(real, imag) {
    .Call('_hypergeo_lanczos_cpp', PACKAGE = 'hypergeo', real, imag)
}

# Register entry points for exported C++ functions
methods::setLoadAction(function(ns) {
    .Call('_hypergeo_RcppExport_registerCCallable', PACKAGE = 'hypergeo')
})
