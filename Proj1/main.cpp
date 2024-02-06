#include <iostream>

int main(){
    int x{100};
    std::cout << "Hello from Proj1" << std::endl;
    std::cout << "Please enter an integer: ";
    std::cin >> x;
    std::cout << "\nHere is your number " << x << std::endl;
    return 0;
}