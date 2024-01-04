#include <iostream>

int main()
{
    short N;
    std::cin >> N;
    
    for (int i=0; i<N; i++)
    {
        for (int j=i+1; j<N; j++)
            std::cout << ' ';
        
        for (int j=0; j<i+1; j++)
            std::cout << '*';
        
        std::cout << '\n';
    }
}
