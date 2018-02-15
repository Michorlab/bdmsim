#define _USE_MATH_DEFINES
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <chrono>
#include <random>
#include <cmath>
#include <complex>
#include <fftw3.h>

// To Run (in terminal): g++-7 -Wall -I/usr/local/include twotype_pgf.cpp -lfftw3 -lm -o pgf

//double F1(double a, double b, double c, double z);
//double F2(double a, double b, double c, double z);
//double F3(double a, double b, double c, double z);
//double F4(double a, double b, double c, double z);

std::complex<double> F1(double a, double b, double c, std::complex<double> z);
std::complex<double> F2(double a, double b, double c, std::complex<double> z);
std::complex<double> F3(double a, double b, double c, std::complex<double> z);
std::complex<double> F4(double a, double b, double c, std::complex<double> z);


double z(double y, double t, double alpha2, double lambda2);
std::complex<double> z(std::complex<double> y, double t, double alpha2, double lambda2);

double z0(double y, double alpha2, double lambda2);
std::complex<double> z0(std::complex<double> y, double alpha2, double lambda2);

double kappa(double x, double y, double alpha2, double lambda2, double omega);
std::complex<double> kappa(std::complex<double> x, std::complex<double> y, double alpha2, double lambda2, double omega);

//double C1(double x, double y, double t, double alpha2, double lambda2, double omega, double a, double b, double c);
std::complex<double> C1(std::complex<double> x, std::complex<double> y, double t, double alpha2, double lambda2, double omega, double a, double b, double c);

//double A_gf(double x, double y, double t, double alpha2, double lambda2, double omega, double a, double b, double c);
std::complex<double> A_gf(std::complex<double> x, std::complex<double> y, double t, double alpha2, double lambda2, double omega, double a, double b, double c);
