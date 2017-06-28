#include <Rinternals.h>

SEXP tic_drat_divide(SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
  {"tic_drat_divide", (DL_FUNC) &tic_drat_divide, 2},
  {NULL, NULL, 0}
};

void R_init_tic_drat(DllInfo *dll) {
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
