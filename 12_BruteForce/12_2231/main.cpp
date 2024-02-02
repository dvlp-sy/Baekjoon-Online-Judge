#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int min = N;
    for (int M=1; M<N; M++)
    {
        int M_copy = M;
        int val = M;
        while (M_copy > 0)
        {
            val += M_copy%10;
            M_copy /= 10;
        }
        
        if (val == N && M < min)
            min = M;
    }
    
    if (min == N)
        cout << 0 << '\n';
    else
        cout << min << '\n';
}
