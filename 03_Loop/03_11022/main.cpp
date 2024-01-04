#include <iostream>

int main()
{
    int T, A, B;
    std::cin >> T;
    
    for (int i=0; i<T; i++)
    {
        std::cin >> A >> B;
        std::cout << "Case #" << i+1 << ": " << A << " + " << B << " = " << A+B << '\n';
    }
}
