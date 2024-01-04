#include <iostream>

using namespace std;

int main()
{
    short N, M, i, j;
    cin >> N >> M;
    
    int* arr = new int[N];
    for (int i=0; i<N; i++)
        arr[i] = i+1;
    
    while (M--)
    {
        cin >> i >> j;
        for (int idx=0; idx<=(j-i)/2; idx++)
        {
            int temp = arr[i-1+idx];
            arr[i-1+idx] = arr[j-1-idx];
            arr[j-1-idx] = temp;
        }
    }
    
    for (int i=0; i<N; i++)
        cout << arr[i] << ' ';
    cout << '\n';
    delete[] arr;
}
