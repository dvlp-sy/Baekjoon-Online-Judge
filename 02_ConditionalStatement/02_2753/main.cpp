#include <iostream>

using namespace std;

int main()
{
    short year;
    cin >> year;
    
    if (year%4 == 0 && year%100 != 0)
        cout << 1 << '\n';
    else if (year%400 == 0)
        cout << 1 << '\n';
    else
        cout << 0 << '\n';
}
