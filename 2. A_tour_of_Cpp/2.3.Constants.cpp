#include <iostream>
#include <vector>

constexpr double square(double x)
{
    return x*x;
}

double sum(const std::vector<double>& my_vector)
{
    double sum = 0;
    for (const double& value : my_vector)
        sum += value;
    return sum;
}

int main() {
    // ############## Constants ##############
    const int dmv = 17;
    int var = 17;
    constexpr double max1 = 1.4 * square(dmv);          // Ok if square is constexpr
    // constexpr double max2 = 1.4 * square(var);       // Error: var is not constant
    const double max3 = 1.4 * square(var);              // Ok, may be evaluated at runtime

    std::vector <double> v {1, 2, 3.4, 4.5};
    const double s1 = sum(v);                           // Ok, evaluated at runtime
    // constexpr double s2 = sum(v);                    // Error: sum is not constant expression
    
    return 0;
}
