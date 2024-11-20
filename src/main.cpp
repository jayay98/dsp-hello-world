#include <iostream>
#include <Eigen/Dense>
#include <sndfile.hh>
#include <matplotlibcpp.h>
namespace plt = matplotlibcpp;

int main(void)
{
    Eigen::Matrix3d m;
    m << 1,2,3,4,5,6,7,8,9;
    std::cout << "Hello World!" << std::endl;
    std::cout << m << std::endl;
    std::cout << sf_version_string() << std::endl;
    
    plt::plot({1,2,3,4});
    plt::show();

    return 0;
}