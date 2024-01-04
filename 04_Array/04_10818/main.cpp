#include <iostream>

using namespace std;

int main()
{
    // Input
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N, elem;
    cin >> N;
    
    int* arr = new int[N];
    for (int i=0; i<N; i++)
    {
        cin >> elem;
        arr[i] = elem;
    }
    
    // Output
    int min = arr[0];
    int max = arr[0];
    for (int i=0; i<N; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    cout << min << ' ' << max << '\n';
    delete[] arr;
}
