// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// generate_distribution
Rcpp::NumericMatrix generate_distribution(double t, double beta1, double nu, double alpha2, double beta2);
RcppExport SEXP _sim2type_generate_distribution(SEXP tSEXP, SEXP beta1SEXP, SEXP nuSEXP, SEXP alpha2SEXP, SEXP beta2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< double >::type beta1(beta1SEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type alpha2(alpha2SEXP);
    Rcpp::traits::input_parameter< double >::type beta2(beta2SEXP);
    rcpp_result_gen = Rcpp::wrap(generate_distribution(t, beta1, nu, alpha2, beta2));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sim2type_generate_distribution", (DL_FUNC) &_sim2type_generate_distribution, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_sim2type(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
