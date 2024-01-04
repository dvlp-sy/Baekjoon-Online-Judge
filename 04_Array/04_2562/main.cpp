#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int elem, max=0, n=0;
    
    for (int i=0; i<9; i++)
    {
        cin >> elem;
        if (elem > max)
        {
            max = elem;
            n = i+1;
        }
    }
    
    cout << max << '\n';
    cout << n << '\n';
}
