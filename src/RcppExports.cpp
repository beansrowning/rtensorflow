// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// c_build_run_ff_graph
int c_build_run_ff_graph(IntegerVector inp);
RcppExport SEXP rtensorflow_c_build_run_ff_graph(SEXP inpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type inp(inpSEXP);
    rcpp_result_gen = Rcpp::wrap(c_build_run_ff_graph(inp));
    return rcpp_result_gen;
END_RCPP
}
// instantiateSessionVariables
int instantiateSessionVariables();
RcppExport SEXP rtensorflow_instantiateSessionVariables() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(instantiateSessionVariables());
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
// feedInput
int feedInput(std::string op_name, IntegerVector inp);
RcppExport SEXP rtensorflow_feedInput(SEXP op_nameSEXP, SEXP inpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type op_name(op_nameSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type inp(inpSEXP);
    rcpp_result_gen = Rcpp::wrap(feedInput(op_name, inp));
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
// printOutput
int printOutput();
RcppExport SEXP rtensorflow_printOutput() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(printOutput());
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

static const R_CallMethodDef CallEntries[] = {
    {"rtensorflow_c_build_run_ff_graph", (DL_FUNC) &rtensorflow_c_build_run_ff_graph, 1},
    {"rtensorflow_instantiateSessionVariables", (DL_FUNC) &rtensorflow_instantiateSessionVariables, 0},
    {"rtensorflow_loadGraphFromFile", (DL_FUNC) &rtensorflow_loadGraphFromFile, 1},
    {"rtensorflow_feedInput", (DL_FUNC) &rtensorflow_feedInput, 2},
    {"rtensorflow_setOutput", (DL_FUNC) &rtensorflow_setOutput, 1},
    {"rtensorflow_runSession", (DL_FUNC) &rtensorflow_runSession, 0},
    {"rtensorflow_printOutput", (DL_FUNC) &rtensorflow_printOutput, 0},
    {"rtensorflow_deleteSessionVariables", (DL_FUNC) &rtensorflow_deleteSessionVariables, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_rtensorflow(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
