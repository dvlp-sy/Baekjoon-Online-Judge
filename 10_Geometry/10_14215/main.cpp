#include <iostream>

using namespace std;

int main()
{
    short a, b, c;
    cin >> a >> b >> c;
    
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    
    if (max >= a+b+c-max)
        cout << 2*(a+b+c-max)-1 << '\n';
    else
        cout << a+b+c << '\n';
}
