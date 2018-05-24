// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// armaMatMult
SEXP armaMatMult(arma::mat A, arma::mat B);
RcppExport SEXP _OUTRIDER_armaMatMult(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(armaMatMult(A, B));
    return rcpp_result_gen;
END_RCPP
}
// armaMatMultAtBC
SEXP armaMatMultAtBC(arma::mat A, arma::mat B, arma::mat C);
RcppExport SEXP _OUTRIDER_armaMatMultAtBC(SEXP ASEXP, SEXP BSEXP, SEXP CSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type C(CSEXP);
    rcpp_result_gen = Rcpp::wrap(armaMatMultAtBC(A, B, C));
    return rcpp_result_gen;
END_RCPP
}
// armaMatMultABBt
SEXP armaMatMultABBt(arma::mat A, arma::mat B);
RcppExport SEXP _OUTRIDER_armaMatMultABBt(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(armaMatMultABBt(A, B));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_OUTRIDER_armaMatMult", (DL_FUNC) &_OUTRIDER_armaMatMult, 2},
    {"_OUTRIDER_armaMatMultAtBC", (DL_FUNC) &_OUTRIDER_armaMatMultAtBC, 3},
    {"_OUTRIDER_armaMatMultABBt", (DL_FUNC) &_OUTRIDER_armaMatMultABBt, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_OUTRIDER(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}