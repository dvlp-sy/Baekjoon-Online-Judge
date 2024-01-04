#include <iostream>

using namespace std;

int main()
{
    // Input
    ios_base::sync_with_stdio(0); cin.tie(0);
    short N, elem, v;
    cin >> N;
    
    int* arr = new int[N];
    for (int i=0; i<N; i++)
    {
        cin >> elem;
        arr[i] = elem;
    }
    cin >> v;
    
    // Output
    int cnt = 0;
    for (int i=0; i<N; i++)
    {
        if (arr[i] == v)
            cnt++;
    }
    cout << cnt << '\n';
}
