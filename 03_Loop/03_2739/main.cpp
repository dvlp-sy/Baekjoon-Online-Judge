#include <iostream>

int main()
{
    short N;
    std::cin >> N;
    
    for (int i=1; i<10; i++)
        std::cout << N << " * " << i << " = " << N*i << '\n';
    
}
