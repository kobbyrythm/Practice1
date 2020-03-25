#include <iostream>

int main()
{
    int n;
    int range;

    std::cout << "Enter an integer: ";
    std::cin >> n;

    std::cout << "Enter range: ";
    std::cin >> range;

    for (int i = 1; i <= range; ++i) {
        std::cout << n << " * " << i << " = " << n * i << std::endl;
    }

    return 0;
}
