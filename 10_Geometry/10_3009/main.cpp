#include <iostream>

using namespace std;

int main()
{
    int x, y, arr[3][2];
    for (int i=0; i<3; i++)
    {
        cin >> x >> y;
        arr[i][0] = x;
        arr[i][1] = y;
    }
    
    if (arr[0][0] == arr[1][0])
        x = arr[2][0];
    else if (arr[0][0] == arr[2][0])
        x = arr[1][0];
    else
        x = arr[0][0];
    
    if (arr[0][1] == arr[1][1])
        y = arr[2][1];
    else if (arr[0][1] == arr[2][1])
        y = arr[1][1];
    else
        y = arr[0][1];
    
    cout << x << ' ' << y << '\n';
}
