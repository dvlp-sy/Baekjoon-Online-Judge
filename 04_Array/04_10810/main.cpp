#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    short N, M, i, j, k;
    cin >> N >> M;
    
    int* arr = new int[N];
    while (M--)
    {
        cin >> i >> j >> k;
        for (int idx=i-1; idx<j; idx++)
            arr[idx] = k;
        
    }
    for (int i=0; i<N; i++)
        cout << arr[i] << ' ';
    
    cout << '\n';
    
    delete[] arr;
}
