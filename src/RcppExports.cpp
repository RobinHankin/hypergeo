// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/hypergeo.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// complex_lngamma
arma::cx_vec complex_lngamma(const arma::cx_vec z);
static SEXP _hypergeo_complex_lngamma_try(SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const arma::cx_vec >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(complex_lngamma(z));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hypergeo_complex_lngamma(SEXP zSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hypergeo_complex_lngamma_try(zSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// complex_lngamma_cpp
Rcpp::ComplexVector complex_lngamma_cpp(const Rcpp::NumericVector& real, const Rcpp::NumericVector& imag);
static SEXP _hypergeo_complex_lngamma_cpp_try(SEXP realSEXP, SEXP imagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type real(realSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type imag(imagSEXP);
    rcpp_result_gen = Rcpp::wrap(complex_lngamma_cpp(real, imag));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hypergeo_complex_lngamma_cpp(SEXP realSEXP, SEXP imagSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hypergeo_complex_lngamma_cpp_try(realSEXP, imagSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// genhypergeo_series
arma::cx_vec genhypergeo_series(const arma::cx_vec U, const arma::cx_vec L, arma::cx_vec z, const double tol, const int maxiter, const bool check_mod, const bool polynomial);
static SEXP _hypergeo_genhypergeo_series_try(SEXP USEXP, SEXP LSEXP, SEXP zSEXP, SEXP tolSEXP, SEXP maxiterSEXP, SEXP check_modSEXP, SEXP polynomialSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const arma::cx_vec >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::cx_vec >::type L(LSEXP);
    Rcpp::traits::input_parameter< arma::cx_vec >::type z(zSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< const bool >::type check_mod(check_modSEXP);
    Rcpp::traits::input_parameter< const bool >::type polynomial(polynomialSEXP);
    rcpp_result_gen = Rcpp::wrap(genhypergeo_series(U, L, z, tol, maxiter, check_mod, polynomial));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hypergeo_genhypergeo_series(SEXP USEXP, SEXP LSEXP, SEXP zSEXP, SEXP tolSEXP, SEXP maxiterSEXP, SEXP check_modSEXP, SEXP polynomialSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hypergeo_genhypergeo_series_try(USEXP, LSEXP, zSEXP, tolSEXP, maxiterSEXP, check_modSEXP, polynomialSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// genhypergeo_series_cpp
Rcpp::ComplexVector genhypergeo_series_cpp(const Rcpp::NumericVector& real_U, const Rcpp::NumericVector& imag_U, const Rcpp::NumericVector& real_L, const Rcpp::NumericVector& imag_L, const Rcpp::NumericVector& real_z, const Rcpp::NumericVector& imag_z, const double tol, const int maxiter, const bool check_mod, const bool polynomial);
static SEXP _hypergeo_genhypergeo_series_cpp_try(SEXP real_USEXP, SEXP imag_USEXP, SEXP real_LSEXP, SEXP imag_LSEXP, SEXP real_zSEXP, SEXP imag_zSEXP, SEXP tolSEXP, SEXP maxiterSEXP, SEXP check_modSEXP, SEXP polynomialSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type real_U(real_USEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type imag_U(imag_USEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type real_L(real_LSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type imag_L(imag_LSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type real_z(real_zSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type imag_z(imag_zSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< const bool >::type check_mod(check_modSEXP);
    Rcpp::traits::input_parameter< const bool >::type polynomial(polynomialSEXP);
    rcpp_result_gen = Rcpp::wrap(genhypergeo_series_cpp(real_U, imag_U, real_L, imag_L, real_z, imag_z, tol, maxiter, check_mod, polynomial));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hypergeo_genhypergeo_series_cpp(SEXP real_USEXP, SEXP imag_USEXP, SEXP real_LSEXP, SEXP imag_LSEXP, SEXP real_zSEXP, SEXP imag_zSEXP, SEXP tolSEXP, SEXP maxiterSEXP, SEXP check_modSEXP, SEXP polynomialSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hypergeo_genhypergeo_series_cpp_try(real_USEXP, imag_USEXP, real_LSEXP, imag_LSEXP, real_zSEXP, imag_zSEXP, tolSEXP, maxiterSEXP, check_modSEXP, polynomialSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// lanczos
arma::cx_vec lanczos(arma::cx_vec z);
static SEXP _hypergeo_lanczos_try(SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::cx_vec >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(lanczos(z));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hypergeo_lanczos(SEXP zSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hypergeo_lanczos_try(zSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// lanczos_cpp
Rcpp::ComplexVector lanczos_cpp(const Rcpp::NumericVector& real, const Rcpp::NumericVector& imag);
static SEXP _hypergeo_lanczos_cpp_try(SEXP realSEXP, SEXP imagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type real(realSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type imag(imagSEXP);
    rcpp_result_gen = Rcpp::wrap(lanczos_cpp(real, imag));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hypergeo_lanczos_cpp(SEXP realSEXP, SEXP imagSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hypergeo_lanczos_cpp_try(realSEXP, imagSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _hypergeo_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("arma::cx_vec(*complex_lngamma)(const arma::cx_vec)");
        signatures.insert("Rcpp::ComplexVector(*complex_lngamma_cpp)(const Rcpp::NumericVector&,const Rcpp::NumericVector&)");
        signatures.insert("arma::cx_vec(*genhypergeo_series)(const arma::cx_vec,const arma::cx_vec,arma::cx_vec,const double,const int,const bool,const bool)");
        signatures.insert("Rcpp::ComplexVector(*genhypergeo_series_cpp)(const Rcpp::NumericVector&,const Rcpp::NumericVector&,const Rcpp::NumericVector&,const Rcpp::NumericVector&,const Rcpp::NumericVector&,const Rcpp::NumericVector&,const double,const int,const bool,const bool)");
        signatures.insert("arma::cx_vec(*lanczos)(arma::cx_vec)");
        signatures.insert("Rcpp::ComplexVector(*lanczos_cpp)(const Rcpp::NumericVector&,const Rcpp::NumericVector&)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _hypergeo_RcppExport_registerCCallable() { 
    R_RegisterCCallable("hypergeo", "_hypergeo_complex_lngamma", (DL_FUNC)_hypergeo_complex_lngamma_try);
    R_RegisterCCallable("hypergeo", "_hypergeo_complex_lngamma_cpp", (DL_FUNC)_hypergeo_complex_lngamma_cpp_try);
    R_RegisterCCallable("hypergeo", "_hypergeo_genhypergeo_series", (DL_FUNC)_hypergeo_genhypergeo_series_try);
    R_RegisterCCallable("hypergeo", "_hypergeo_genhypergeo_series_cpp", (DL_FUNC)_hypergeo_genhypergeo_series_cpp_try);
    R_RegisterCCallable("hypergeo", "_hypergeo_lanczos", (DL_FUNC)_hypergeo_lanczos_try);
    R_RegisterCCallable("hypergeo", "_hypergeo_lanczos_cpp", (DL_FUNC)_hypergeo_lanczos_cpp_try);
    R_RegisterCCallable("hypergeo", "_hypergeo_RcppExport_validate", (DL_FUNC)_hypergeo_RcppExport_validate);
    return R_NilValue;
}
