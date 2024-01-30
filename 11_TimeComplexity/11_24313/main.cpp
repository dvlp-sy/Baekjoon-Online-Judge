#include <iostream>

using namespace std;

int main()
{
    short a1, a0, c, n0;
    cin >> a1 >> a0 >> c >> n0;

    if (c-a1 == 0)
    {
        if (a0 <= 0)
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }
    else if (c-a1 < 0)
    {
        cout << 0 << '\n';
    }
    else
    {
        if (a0/(c-a1) > n0)
            cout << 0 << '\n';
        else
            cout << 1 << '\n';
    }
    
}
