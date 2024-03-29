// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// predictMatY
arma::mat predictMatY(arma::mat x, arma::mat E, arma::mat D, arma::vec b);
RcppExport SEXP _OUTRIDER_predictMatY(SEXP xSEXP, SEXP ESEXP, SEXP DSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type E(ESEXP);
    Rcpp::traits::input_parameter< arma::mat >::type D(DSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(predictMatY(x, E, D, b));
    return rcpp_result_gen;
END_RCPP
}
// predictMatC
arma::mat predictMatC(arma::mat x, arma::mat E, arma::mat D, arma::vec b, arma::vec sf);
RcppExport SEXP _OUTRIDER_predictMatC(SEXP xSEXP, SEXP ESEXP, SEXP DSEXP, SEXP bSEXP, SEXP sfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type E(ESEXP);
    Rcpp::traits::input_parameter< arma::mat >::type D(DSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sf(sfSEXP);
    rcpp_result_gen = Rcpp::wrap(predictMatC(x, E, D, b, sf));
    return rcpp_result_gen;
END_RCPP
}
// truncLogLiklihoodD
double truncLogLiklihoodD(arma::vec par, arma::mat H, arma::vec k, arma::vec sf, arma::vec exclusionMask, double theta, arma::vec thetaC);
RcppExport SEXP _OUTRIDER_truncLogLiklihoodD(SEXP parSEXP, SEXP HSEXP, SEXP kSEXP, SEXP sfSEXP, SEXP exclusionMaskSEXP, SEXP thetaSEXP, SEXP thetaCSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type par(parSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type H(HSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sf(sfSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type exclusionMask(exclusionMaskSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type thetaC(thetaCSEXP);
    rcpp_result_gen = Rcpp::wrap(truncLogLiklihoodD(par, H, k, sf, exclusionMask, theta, thetaC));
    return rcpp_result_gen;
END_RCPP
}
// gradientD
arma::vec gradientD(arma::vec par, arma::mat H, arma::vec k, arma::vec sf, arma::vec exclusionMask, double theta, arma::vec thetaC);
RcppExport SEXP _OUTRIDER_gradientD(SEXP parSEXP, SEXP HSEXP, SEXP kSEXP, SEXP sfSEXP, SEXP exclusionMaskSEXP, SEXP thetaSEXP, SEXP thetaCSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type par(parSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type H(HSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sf(sfSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type exclusionMask(exclusionMaskSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type thetaC(thetaCSEXP);
    rcpp_result_gen = Rcpp::wrap(gradientD(par, H, k, sf, exclusionMask, theta, thetaC));
    return rcpp_result_gen;
END_RCPP
}
// truncLogLiklihoodE
double truncLogLiklihoodE(arma::vec e, arma::mat D, arma::mat k, arma::vec b, arma::mat x, arma::vec sf, arma::vec theta, arma::mat exclusionMask, arma::vec thetaC);
RcppExport SEXP _OUTRIDER_truncLogLiklihoodE(SEXP eSEXP, SEXP DSEXP, SEXP kSEXP, SEXP bSEXP, SEXP xSEXP, SEXP sfSEXP, SEXP thetaSEXP, SEXP exclusionMaskSEXP, SEXP thetaCSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type e(eSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type D(DSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sf(sfSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type exclusionMask(exclusionMaskSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type thetaC(thetaCSEXP);
    rcpp_result_gen = Rcpp::wrap(truncLogLiklihoodE(e, D, k, b, x, sf, theta, exclusionMask, thetaC));
    return rcpp_result_gen;
END_RCPP
}
// gradientE
arma::mat gradientE(arma::vec e, arma::mat D, arma::mat k, arma::vec b, arma::mat x, arma::vec sf, arma::vec theta, arma::mat exclusionMask, arma::vec thetaC);
RcppExport SEXP _OUTRIDER_gradientE(SEXP eSEXP, SEXP DSEXP, SEXP kSEXP, SEXP bSEXP, SEXP xSEXP, SEXP sfSEXP, SEXP thetaSEXP, SEXP exclusionMaskSEXP, SEXP thetaCSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type e(eSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type D(DSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sf(sfSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type exclusionMask(exclusionMaskSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type thetaC(thetaCSEXP);
    rcpp_result_gen = Rcpp::wrap(gradientE(e, D, k, b, x, sf, theta, exclusionMask, thetaC));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_OUTRIDER_predictMatY", (DL_FUNC) &_OUTRIDER_predictMatY, 4},
    {"_OUTRIDER_predictMatC", (DL_FUNC) &_OUTRIDER_predictMatC, 5},
    {"_OUTRIDER_truncLogLiklihoodD", (DL_FUNC) &_OUTRIDER_truncLogLiklihoodD, 7},
    {"_OUTRIDER_gradientD", (DL_FUNC) &_OUTRIDER_gradientD, 7},
    {"_OUTRIDER_truncLogLiklihoodE", (DL_FUNC) &_OUTRIDER_truncLogLiklihoodE, 9},
    {"_OUTRIDER_gradientE", (DL_FUNC) &_OUTRIDER_gradientE, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_OUTRIDER(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
