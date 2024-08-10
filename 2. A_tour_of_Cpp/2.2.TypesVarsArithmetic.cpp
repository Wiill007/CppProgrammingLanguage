#include <iostream>

int main() {
    // ############## Types and inizialiters ##############
    int x {10};     // If in doubt use this initialization instead of =. This will prevent conversions that lose information
    auto x_bytes = sizeof(x);

    std::cout << "The size of the integer " << x << " is " << x_bytes << " in bytes." << std::endl;
    
    return 0;
}
