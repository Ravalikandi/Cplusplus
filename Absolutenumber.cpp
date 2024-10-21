#include <iostream>
#include <string>
using namespace std;
#define Abs(A) ((A) < 0 ? -(A) : (A))

int main() {
    int num1 = -5;
    int num2 = 3;

    std::cout << "Absolute value of " << num1 << " is " << Abs(num1) << std::endl;
    std::cout << "Absolute value of " << num2 << " is " << Abs(num2) << std::endl;
    return 0;
}
