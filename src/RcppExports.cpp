// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// initializeSessionVariables
int initializeSessionVariables();
RcppExport SEXP rtensorflow_initializeSessionVariables() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(initializeSessionVariables());
    return rcpp_result_gen;
END_RCPP
}
// loadGraphFromFile
int loadGraphFromFile(std::string path);
RcppExport SEXP rtensorflow_loadGraphFromFile(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(loadGraphFromFile(path));
    return rcpp_result_gen;
END_RCPP
}
// setFeedInput
int setFeedInput(std::string op_name, NumericVector inp, std::vector<int64_t> dim, std::string dtype);
RcppExport SEXP rtensorflow_setFeedInput(SEXP op_nameSEXP, SEXP inpSEXP, SEXP dimSEXP, SEXP dtypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type op_name(op_nameSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    Rcpp::traits::input_parameter< std::vector<int64_t> >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    rcpp_result_gen = Rcpp::wrap(setFeedInput(op_name, inp, dim, dtype));
    return rcpp_result_gen;
END_RCPP
}
// setOutput
int setOutput(std::string op_name);
RcppExport SEXP rtensorflow_setOutput(SEXP op_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type op_name(op_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(setOutput(op_name));
    return rcpp_result_gen;
END_RCPP
}
// runSession
int runSession();
RcppExport SEXP rtensorflow_runSession() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(runSession());
    return rcpp_result_gen;
END_RCPP
}
// getOutput
List getOutput(std::string dtype);
RcppExport SEXP rtensorflow_getOutput(SEXP dtypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    rcpp_result_gen = Rcpp::wrap(getOutput(dtype));
    return rcpp_result_gen;
END_RCPP
}
// deleteSessionVariables
int deleteSessionVariables();
RcppExport SEXP rtensorflow_deleteSessionVariables() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(deleteSessionVariables());
    return rcpp_result_gen;
END_RCPP
}
// getPlaceholder
std::string getPlaceholder(std::string dtype, std::string unique_name);
RcppExport SEXP rtensorflow_getPlaceholder(SEXP dtypeSEXP, SEXP unique_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< std::string >::type unique_name(unique_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(getPlaceholder(dtype, unique_name));
    return rcpp_result_gen;
END_RCPP
}
// getConstant
std::string getConstant(NumericVector val, std::vector<int64_t> dim, std::string dtype, std::string unique_name);
RcppExport SEXP rtensorflow_getConstant(SEXP valSEXP, SEXP dimSEXP, SEXP dtypeSEXP, SEXP unique_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type val(valSEXP);
    Rcpp::traits::input_parameter< std::vector<int64_t> >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< std::string >::type unique_name(unique_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(getConstant(val, dim, dtype, unique_name));
    return rcpp_result_gen;
END_RCPP
}
// getUnaryOp
std::string getUnaryOp(std::string inp, std::string op_name, std::string unique_name);
RcppExport SEXP rtensorflow_getUnaryOp(SEXP inpSEXP, SEXP op_nameSEXP, SEXP unique_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type inp(inpSEXP);
    Rcpp::traits::input_parameter< std::string >::type op_name(op_nameSEXP);
    Rcpp::traits::input_parameter< std::string >::type unique_name(unique_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(getUnaryOp(inp, op_name, unique_name));
    return rcpp_result_gen;
END_RCPP
}
// getBinaryOp
std::string getBinaryOp(std::string l_op, std::string r_op, std::string op_name, std::string unique_name);
RcppExport SEXP rtensorflow_getBinaryOp(SEXP l_opSEXP, SEXP r_opSEXP, SEXP op_nameSEXP, SEXP unique_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type l_op(l_opSEXP);
    Rcpp::traits::input_parameter< std::string >::type r_op(r_opSEXP);
    Rcpp::traits::input_parameter< std::string >::type op_name(op_nameSEXP);
    Rcpp::traits::input_parameter< std::string >::type unique_name(unique_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(getBinaryOp(l_op, r_op, op_name, unique_name));
    return rcpp_result_gen;
END_RCPP
}
// printNodeList
void printNodeList();
RcppExport SEXP rtensorflow_printNodeList() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    printNodeList();
    return R_NilValue;
END_RCPP
}
// locateError
void locateError();
RcppExport SEXP rtensorflow_locateError() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    locateError();
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"rtensorflow_initializeSessionVariables", (DL_FUNC) &rtensorflow_initializeSessionVariables, 0},
    {"rtensorflow_loadGraphFromFile", (DL_FUNC) &rtensorflow_loadGraphFromFile, 1},
    {"rtensorflow_setFeedInput", (DL_FUNC) &rtensorflow_setFeedInput, 4},
    {"rtensorflow_setOutput", (DL_FUNC) &rtensorflow_setOutput, 1},
    {"rtensorflow_runSession", (DL_FUNC) &rtensorflow_runSession, 0},
    {"rtensorflow_getOutput", (DL_FUNC) &rtensorflow_getOutput, 1},
    {"rtensorflow_deleteSessionVariables", (DL_FUNC) &rtensorflow_deleteSessionVariables, 0},
    {"rtensorflow_getPlaceholder", (DL_FUNC) &rtensorflow_getPlaceholder, 2},
    {"rtensorflow_getConstant", (DL_FUNC) &rtensorflow_getConstant, 4},
    {"rtensorflow_getUnaryOp", (DL_FUNC) &rtensorflow_getUnaryOp, 3},
    {"rtensorflow_getBinaryOp", (DL_FUNC) &rtensorflow_getBinaryOp, 4},
    {"rtensorflow_printNodeList", (DL_FUNC) &rtensorflow_printNodeList, 0},
    {"rtensorflow_locateError", (DL_FUNC) &rtensorflow_locateError, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_rtensorflow(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
