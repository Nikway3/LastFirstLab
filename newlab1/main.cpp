#include <iostream>
#include "files.h"
#include <complex>
using namespace funct;
    int main() {
    std::cout<<"Enter numbers for the first point"<<"\n";
        int x;
        int y;
        int ll;
        int pp;
        int *py = &ll;
        int *px = &pp;
        std::cin >> ll >> pp;
        funct::point(x, y);
        funct::point(py, px);
        std::cout << *py << std::endl;
        std::cout<<"____________________________________________________________"<<"\n";
        std::cout<<"Enter numbers for the second point"<<"\n";
        double a;
        double b;
        std::cin>>a;
        funct::point2(b , a  );
        std::cout<<a<<" "<<b<<"\n";
std::cout<<"____________________________________________________________"<<"\n";
        std::complex<double> ver1(2.0, 1.0);
        funct::point3_1(&ver1);
        std::cout<<ver1<<std::endl;
        std::complex<double> ver2 (1.0, 2.0);
        funct::point3_2 (ver2);
        std::cout<<ver2<<std::endl;
        std::cout<<"____________________________________________________________"<<"\n";
        int t, zt;
        std::cout << "Enter x coordinate" << std::endl;
        std::cin >> t;
        std::cout << "Enter y coordinate" << std::endl;
        std::cin >> zt;
        square sqr;
        funct::move1(sqr, t, zt);
        funct::move2(&sqr, t, zt);
            return 0;
        }

