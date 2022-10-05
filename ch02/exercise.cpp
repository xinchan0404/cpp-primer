/*
 * author zhengxin
 * version 1.0.1 2022-09-28
 */

#include <iostream>
using namespace std;
int main() {
    // 2.3.1  引用
//    int val = 1024;
//    int &refVal = val;
//    std::cout << val << std::endl;
//    std::cout << refVal << std::endl;
//    refVal = 1023;
//    std::cout << val << std::endl;
//    std::cout << refVal << std::endl;
//    std::cout << &refVal << std::endl;

//    int i = 0, &r1 = i;
//    double d = 1, &r2 = d;
//    r2 = r1;
////    i = r2;
////    r1 = d;
//    cout << r1 << " " << r2 << endl;

    int i, &r1 = i;
    i = 5, r1 = 10;
    cout << i << " " << r1 << endl;
    cout << i << " " << r1 << endl;

    // 2.3.2  指针

}

