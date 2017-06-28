#include <Rcpp.h>

//' @rdname multiply
//' @export
// [[Rcpp::export]]
double divide(double x, double y) {
  return x / y;
}
