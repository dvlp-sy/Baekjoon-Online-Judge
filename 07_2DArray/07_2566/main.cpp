#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    short value, max=0, maxi=0, maxj=0;
    for (int i=0; i<9; i++)
    {
        for (int j=0; j<9; j++)
        {
            cin >> value;
            if (value > max)
            {
                max = value;
                maxi = i;
                maxj = j;
            }
        }
    }
    cout << max << '\n';
    cout << maxi+1 << ' ' << maxj+1 << '\n';
}
