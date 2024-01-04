#include <iostream>

int main()
{
    short T, A, B;
    std::cin >> T;
    
    while (T--)
    {
        std::cin >> A >> B;
        std::cout << A+B << '\n';
    }
}
