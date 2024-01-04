#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int A, B, value=0;
    cin >> A >> B;
    
    for (int i=0; i<3; i++)
    {
        cout << A*(B%10) << '\n';
        value += A*(B%10) * pow(10, i);
        B /= 10;
    }
    
    cout << value <<'\n';
}
