#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    short N, M, i, j;
    cin >> N >> M;
    
    int* arr = new int[N];
    for (int i=0; i<N; i++)
        arr[i] = i+1;
    
    while (M--)
    {
        cin >> i >> j;
        int temp = arr[i-1];
        arr[i-1] = arr[j-1];
        arr[j-1] = temp;
    }
    
    for (int i=0; i<N; i++)
        cout << arr[i] << ' ';
    cout << '\n';
    
    delete[] arr;
}
