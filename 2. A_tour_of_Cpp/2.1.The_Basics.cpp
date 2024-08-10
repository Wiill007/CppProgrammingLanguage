#include <iostream>

double square(double x)
{
    return x*x;
}

int main() {
    std::cout << "Hello World!\n";

    double x = 15.5;

    std::cout << "The square of " << x << " is " << square(x) << std::endl;

    return 0;
}
