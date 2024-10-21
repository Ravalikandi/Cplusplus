#include <iostream>
#define max(a, b) ((a) > (b) ? (a) : (b))
int main() {
    int num1 = 10;
    int num2 = 20;

    std::cout << "Greater of " << num1 << " and " << num2 << " is " << max(num1, num2) << std::endl;

    return 0;
}
