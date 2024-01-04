#include <iostream>

using namespace std;

int main()
{
    short A, B, C;
    cin >> A >> B >> C;
    
    if (A==B && B==C)
        cout << 10000 + A*1000 << '\n';
    else if (A==B)
        cout << 1000 + A*100 << '\n';
    else if (B==C)
        cout << 1000 + B*100 << '\n';
    else if (C==A)
        cout << 1000 + C*100 << '\n';
    else
        cout << max(max(A, B), C)*100 << '\n';
}
