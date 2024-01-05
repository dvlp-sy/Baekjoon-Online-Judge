#include <iostream>

using namespace std;

int main()
{
    int T, C, sum;
    cin >> T;
    
    while (T--)
    {
        cin >> C;
        
        // Quarter
        sum = 0;
        while (C >= 25)
        {
            sum++;
            C -= 25;
        }
        cout << sum << ' ';
        
        // Dime
        sum = 0;
        while (C >= 10)
        {
            sum++;
            C -= 10;
        }
        cout << sum << ' ';
        
        // Nickel
        sum = 0;
        while (C >= 5)
        {
            sum++;
            C -= 5;
        }
        cout << sum << ' ';
        
        // Penny
        sum = 0;
        while (C >= 1)
        {
            sum++;
            C -= 1;
        }
        cout << sum << '\n';
    }
    
    
}
