#include <iostream>

using namespace std;

int main()
{
    short N;
    cin >> N;
    
    for (int i=0; i<N-1; i++)
    {
        for (int j=0; j<N-1-i; j++)
            cout << ' ';
        
        for (int j=0; j<2*i+1; j++)
            cout << '*';
        
        cout << '\n';
    }
    
    for (int i=0; i<2*N-1; i++)
        cout << '*';
    cout << '\n';
    
    for (int i=0; i<N-1; i++)
    {
        for (int j=0; j<i+1; j++)
            cout << ' ';
        
        for (int j=2*N-3-2*i; j>0; j--)
            cout << '*';
        cout << '\n';
    }
    
}
