#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP _hypergeo_complex_lngamma(SEXP);
extern SEXP _hypergeo_complex_lngamma_cpp(SEXP, SEXP);
extern SEXP _hypergeo_genhypergeo_series(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _hypergeo_genhypergeo_series_cpp(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _hypergeo_lanczos(SEXP);
extern SEXP _hypergeo_lanczos_cpp(SEXP, SEXP);
extern SEXP _hypergeo_RcppExport_registerCCallable();

static const R_CallMethodDef CallEntries[] = {
    {"_hypergeo_complex_lngamma",               (DL_FUNC) &_hypergeo_complex_lngamma,                 1},
    {"_hypergeo_complex_lngamma_cpp",           (DL_FUNC) &_hypergeo_complex_lngamma_cpp,             2},
    {"_hypergeo_genhypergeo_series",            (DL_FUNC) &_hypergeo_genhypergeo_series,              7},
    {"_hypergeo_genhypergeo_series_cpp",        (DL_FUNC) &_hypergeo_genhypergeo_series_cpp,         10},
    {"_hypergeo_lanczos",                       (DL_FUNC) &_hypergeo_lanczos,                         1},
    {"_hypergeo_lanczos_cpp",                   (DL_FUNC) &_hypergeo_lanczos_cpp,                     2},
    {"_hypergeo_RcppExport_registerCCallable",  (DL_FUNC) &_hypergeo_RcppExport_registerCCallable,    0},
    {NULL, NULL, 0}
};

void R_init_hypergeo(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
