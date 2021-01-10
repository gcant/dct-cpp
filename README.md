# dct-cpp
Discrete cosine transforms et al. in C++ (wrapper for FFTW).  Requires fftw3.  Tested for `std::vector<double>`, `Eigen::VectorXd` and `Eigen::ArrayXd`.

Compile the example with
```
g++ example.cpp -std=c++11 -O3 -lfftw3
```

From the [FFTW documentation](http://www.fftw.org/fftw3_doc/Real_002dto_002dReal-Transform-Kinds.html):

* FFTW_R2HC computes a real-input DFT with output in “halfcomplex” format (inverse is FFTW_HC2R)
* FFTW_HC2R computes the reverse of FFTW_R2HC, above (inverse is FFTW_R2HC)
* FFTW_DHT computes a discrete Hartley transform (inverse is FFTW_DHT)
* FFTW_REDFT00 computes a DCT-I (inverse is FFTW_REDFT00.)
* FFTW_REDFT10 computes a DCT-II, sometimes called “the” DCT (inverse is FFTW_REDFT01)
* FFTW_REDFT01 computes a DCT-III, sometimes called “the” IDCT, being the inverse of DCT-II (inverse is FFTW_REDFT=10)
* FFTW_REDFT11 computes a DCT-IV (inverse is FFTW_REDFT11)
* FFTW_RODFT00 computes a DST-I (inverse is FFTW_RODFT00)
* FFTW_RODFT10 computes a DST-II (inverse is FFTW_RODFT01)
* FFTW_RODFT01 computes a DST-III (inverse is FFTW_RODFT10)
* FFTW_RODFT11 computes a DST-IV (inverse is FFTW_RODFT11) 
