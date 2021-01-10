#include <iostream>
#include <vector>
//#include <Eigen/Core>
#include "r2r.hpp"

template <class vec_t>
void print_vec(vec_t const &X) {
  for (int i=0; i<X.size(); ++i)
    std::cout << X[i] << std::endl;
}

int main(int argc, const char *argv[]) {

  std::vector<double> X = {1,2,3,4};
  // Also works with Eigen arrays/vectors 
  // Eigen::VectorXd X(4); X << 1,2,3,4;

  r2r::r2r dct2(FFTW_REDFT10);      // type 2 discrete cosine transform
  r2r::r2r idct2(INV_FFTW_REDFT10); // inverse DCT-II (type 3)

  print_vec(dct2(X));
  print_vec(idct2(dct2(X)));

  return 0;
}

