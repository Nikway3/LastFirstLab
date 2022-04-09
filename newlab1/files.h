#pragma once
#include <iostream>
#include <complex>
namespace funct {
    void point(int &x, int &y);
    void point(int *x, int *y);
    void point2 (double &b, double &a);
    void point3_1 (std::complex<double>*);
    void point3_2 (std::complex<double>&);

    struct square {
        int x_c = 0, y_c = 0;
    };
    void move1(struct square& sqr, int t, int zt);
    void move2(struct square*, int t, int zt);


}






