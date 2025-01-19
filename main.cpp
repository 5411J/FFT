#include <iostream>
#include "FFTLibrary.h"

int main() {
    Eigen::MatrixXd X(4, 3);
    X << 1, 2, 3,
            4, 5, 6,
            7, 8, 9,
            10, 11, 12;

    // Case 1: Y = fft(X)
    Eigen::MatrixXcd Y1 = FFTLibrary::fft(X);
    std::cout << "fft(X):\n" << Y1 << "\n\n";

    // Case 2: Y = fft(X, n)
    Eigen::MatrixXcd Y2 = FFTLibrary::fft(X, 8);
    std::cout << "fft(X, 8):\n" << Y2 << "\n\n";

    // Case 3: Y = fft(X, n, dim)
    Eigen::MatrixXcd Y3 = FFTLibrary::fft(X, 8, 1);
    std::cout << "fft(X, 8, 1):\n" << Y3 << "\n\n";

    return 0;
}