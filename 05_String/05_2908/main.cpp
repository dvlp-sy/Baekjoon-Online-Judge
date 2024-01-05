#include <iostream>
#include <string>

using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;
    
    for (int i=2; i>=0; i--)
    {
        if (A[i] > B[i])
        {
            for (int i=2; i>=0; i--)
                cout << A[i];
            cout << '\n';
            break;
        }
        else if (A[i] < B[i])
        {
            for (int i=2; i>=0; i--)
                cout << B[i];
            cout << '\n';
            break;
        }
    }
}
