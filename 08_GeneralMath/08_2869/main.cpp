#include <iostream>

using namespace std;

int main()
{
    int A, B, V;
    cin >> A >> B >> V;
    
    if (V-A > 0)
    {
        int day = (V-A)/(A-B);
        int dayR = (V-A)%(A-B);
        
        if (dayR == 0)
            cout << day + 1 << '\n';
        else
            cout << day + 2 << '\n';
    }
    else
        cout << 1 << '\n';
    
}
