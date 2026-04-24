
#include "complex.hpp"
#include <iostream>
#include <vector>

using namespace sjtu;

int main() {
    // 测试构造函数
    complex z1;                    // 默认构造 0+0i
    complex z2 = 1;               // 1+0i
    complex z3 = 2.22;            // 2.22+0i
    complex z4(114.514);          // 114.514+0i
    complex z5(1, 2);             // 1+2i
    complex z6(2.22, 3.33);       // 2.22+3.33i
    
    // 测试拷贝构造和赋值
    complex x;                    // x = 0
    complex y = x;                // y = x = 0
    x = y = 2;                    // x = y = 2
    
    // 测试访问实部和虚部
    complex z7(1, 2);
    std::cout << z7.real() << "," << z7.imag() << std::endl; // 输出 1,2
    z7.real() = 3;
    z7.imag() = 4; // z7 = 3+4i
    std::cout << z7.real() << "," << z7.imag() << std::endl; // 输出 3,4
    
    // 测试比较运算符
    complex a = 1, b = 2, c = 2;
    std::cout << int(a == b) << std::endl; // 输出 0
    std::cout << int(b == c) << std::endl; // 输出 1
    
    // 测试四则运算
    complex z8(3, 4), z9(1, 1);
    std::cout << z8 + z9 << std::endl; // 4+5i
    std::cout << z8 - z9 << std::endl; // 2+3i
    std::cout << z8 * z9 << std::endl; // -1+7i
    std::cout << z8 / z9 << std::endl; // 3.5+0.5i
    
    // 测试单目运算符
    std::cout << -z8 << std::endl; // -3-4i
    std::cout << ~z8 << std::endl; // 3-4i
    
    // 测试赋值运算符
    complex z10(1, 1);
    z10 += z8;
    std::cout << z10 << std::endl; // 4+5i
    z10 -= z8;
    std::cout << z10 << std::endl; // 1+1i
    z10 *= z8;
    std::cout << z10 << std::endl; // -1+7i
    z10 /= z8;
    std::cout << z10 << std::endl; // 1+1i
    
    // 测试异常处理
    complex z11(1, 0), z12(0, 0);
    try {
        z11 /= z12;
    } catch(const std::exception &err) {
        std::cout << err.what() << std::endl; // 输出 "complex divided by zero!"
    }
    
    // 测试输出格式
    complex z13(-2, 0);
    complex z14(0, -2);
    complex z15(1, -1e-10);
    complex z16(-1e-10, 1);
    std::cout << z13 << std::endl; // -2.000000+0.000000i
    std::cout << z14 << std::endl; // 0.000000-2.000000i
    std::cout << z15 << std::endl; // 1.000000+0.000000i
    std::cout << z16 << std::endl; // 0.000000+1.000000i
    
    // 测试bool转换
    complex z17; // 默认初始化为 0
    if (z17) {
        std::cout << "z17 is not zero!" << std::endl;
    } else {
        std::cout << "z17 is zero!" << std::endl; // 输出 z17 is zero!
    }
    
    complex z18(1, 1);
    if (z18) {
        std::cout << "z18 is not zero!" << std::endl; // 输出 z18 is not zero!
    } else {
        std::cout << "z18 is zero!" << std::endl;
    }
    
    return 0;
}
