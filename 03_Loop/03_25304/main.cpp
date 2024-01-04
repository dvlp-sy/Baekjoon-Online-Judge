#include <iostream>

int main()
{
    int X, N, a, b, sum=0;
    std::cin >> X >> N;
    
    while (N--)
    {
        std::cin >> a >> b;
        sum += a*b;
    }
    
    if (X == sum)
        std::cout << "Yes\n";
    else
        std::cout << "No\n";
}
