#include <iostream>

int main()
{
    short N;
    std::cin >> N;
    
    for (int i=1; i<N; i+=4)
        std::cout << "long" << ' ';
    std::cout << "int" << '\n';
}
