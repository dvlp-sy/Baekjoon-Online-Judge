#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    
    while (cin >> n)
    {
        if (n == -1)
            break;
        
        vector<int> divisor;
        int sum = 0;
        
        for (int i=1; i<n; i++)
        {
            if (n % i == 0)
            {
                divisor.push_back(i);
                sum += i;
            }
                
        }
        
        if (n != sum)
            cout << n << " is NOT perfect.\n";
        else
        {
            cout << n << " = ";
            for (int i=0; i<divisor.size(); i++)
            {
                if (i == divisor.size()-1)
                    cout << divisor[i] << '\n';
                else
                    cout << divisor[i] << " + ";
            }
        }
        
    }
}
