#include <iostream>

using namespace std;

int main()
{
    int N, a, b, maxA=-10000, maxB=-10000, minA=10000, minB=10000;
    cin >> N;
    
    for (int i=0; i<N; i++)
    {
        cin >> a >> b;
        if (N != 1)
        {
            if (a > maxA)
                maxA = a;
            if (a < minA)
                minA = a;
            
            if (b > maxB)
                maxB = b;
            if (b < minB)
                minB = b;
        }
    }
    
    if (N == 1)
        cout << 0 << '\n';
    else
        cout << (maxA - minA) * (maxB - minB) << '\n';
}
