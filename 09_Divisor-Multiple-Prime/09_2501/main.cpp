#include <iostream>

using namespace std;

int main()
{
    short N, K;
    cin >> N >> K;
    
    short cnt=0;
    for (int i=1; i<=N; i++)
    {
        if (N%i == 0)
            cnt++;
        
        if (cnt == K)
        {
            cout << i << '\n';
            break;
        }
    }
    
    if (cnt != K)
        cout << 0 << '\n';
}
