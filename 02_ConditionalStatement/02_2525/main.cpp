#include <iostream>

using namespace std;

int main()
{
    short A, B, C;
    cin >> A >> B >> C;
    
    short M = B + C;
    
    while (M >= 60)
    {
        if (A == 23)
            A = 0;
        else
            A += 1;
        M -= 60;
    }
    cout << A << ' ' << M << '\n';
}
