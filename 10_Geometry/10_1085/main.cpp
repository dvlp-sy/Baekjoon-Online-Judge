#include <iostream>

using namespace std;

int main()
{
    short x, y, w, h;
    cin >> x >> y >> w >> h;
    
    short min = x;
    if (y < min)
        min = y;
    if (w-x < min)
        min = w-x;
    if (h-y < min)
        min = h-y;
    
    cout << min << '\n';
}
