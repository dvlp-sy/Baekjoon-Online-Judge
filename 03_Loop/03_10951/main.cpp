#include <iostream>

int main()
{
    short A, B;
    while (std::cin >> A >> B)
        std::cout << A+B << '\n';
    
    /*
     while (true)
        if (std::cin.eof()) break; 사용할 수도 있다
     */
}
