#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    int arr[30];
    
    for (int i=0; i<30; i++)
        arr[i] = 0;
    
    for (int i=0; i<28; i++)
    {
        cin >> n;
        arr[n-1] = 1;
    }
    
    for (int i=0; i<30; i++)
        if (arr[i] == 0)
            cout << i+1 << '\n';
    
}
