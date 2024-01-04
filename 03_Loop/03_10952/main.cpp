#include <iostream>

int main()
{
    short A, B;
    while (true)
    {
        std::cin >> A >> B;
        if (A==0 && B==0)
            break;
        std::cout << A+B << '\n';
    }
}
