#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    short N, X, elem;
    cin >> N >> X;
    
    for (int i=0; i<N; i++)
    {
        cin >> elem;
        if (elem < X)
            cout << elem << ' ';
    }
    cout << '\n';
}
