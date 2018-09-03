#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP hypergeo_complex_lngamma(SEXP);
extern SEXP hypergeo_complex_lngamma_cpp(SEXP, SEXP);
extern SEXP hypergeo_genhypergeo_series(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP hypergeo_genhypergeo_series_cpp(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP hypergeo_lanczos(SEXP);
extern SEXP hypergeo_lanczos_cpp(SEXP, SEXP);
extern SEXP hypergeo_RcppExport_registerCCallable();

static const R_CallMethodDef CallEntries[] = {
    {"hypergeo_complex_gamma",                (DL_FUNC) &hypergeo_complex_lngamma,                 1},
    {"hypergeo_complex_gamma_cpp",            (DL_FUNC) &hypergeo_complex_lngamma_cpp,             2},
    {"hypergeo_genhypergeo_series",           (DL_FUNC) &hypergeo_genhypergeo_series,              7},
    {"hypergeo_genhypergeo_series_cpp",       (DL_FUNC) &hypergeo_genhypergeo_series_cpp,         10},
    {"hypergeo_lanczos",                      (DL_FUNC) &hypergeo_lanczos,                         1},
    {"hypergeo_lanczos_cpp",                  (DL_FUNC) &hypergeo_lanczos_cpp,                     2},
    {"hypergeo_RcppExport_registerCCallable", (DL_FUNC) &hypergeo_RcppExport_registerCCallable,    0},
    {NULL, NULL, 0}
};

void R_init_hypergeo(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
