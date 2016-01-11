// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// lambdaMC
Eigen::VectorXd lambdaMC(const Eigen::Map<Eigen::VectorXd>& lambda_BH, const Eigen::Map<Eigen::MatrixXd>& X, int lambda_length, int number_of_drawings);
RcppExport SEXP grpSLOPE_lambdaMC(SEXP lambda_BHSEXP, SEXP XSEXP, SEXP lambda_lengthSEXP, SEXP number_of_drawingsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type lambda_BH(lambda_BHSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type lambda_length(lambda_lengthSEXP);
    Rcpp::traits::input_parameter< int >::type number_of_drawings(number_of_drawingsSEXP);
    __result = Rcpp::wrap(lambdaMC(lambda_BH, X, lambda_length, number_of_drawings));
    return __result;
END_RCPP
}
// proxSortedL1Rcpp
Eigen::VectorXd proxSortedL1Rcpp(const Eigen::Map<Eigen::VectorXd>& y, const Eigen::Map<Eigen::VectorXd>& lambda);
RcppExport SEXP grpSLOPE_proxSortedL1Rcpp(SEXP ySEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type lambda(lambdaSEXP);
    __result = Rcpp::wrap(proxSortedL1Rcpp(y, lambda));
    return __result;
END_RCPP
}
