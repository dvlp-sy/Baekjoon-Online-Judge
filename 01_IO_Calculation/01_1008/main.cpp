#include <iostream>

int main()
{
    short A, B;
    std::cin >> A >> B;
    std::cout.precision(10);
    std::cout << (double)A/B << '\n';
}
