#include <iostream>

using namespace std;

int main()
{
    short N, M, num;
    cin >> N >> M;
    
    short** arr = new short*[N];
    for (int i=0; i<N; i++)
        arr[i] = new short[M];
    
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<M; j++)
        {
            cin >> num;
            arr[i][j] = num;
        }
    }
    
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<M; j++)
        {
            cin >> num;
            cout << arr[i][j] + num << ' ';
        }
        cout << '\n';
    }
    
    for (int i=0; i<N; i++)
        delete[] arr[i];
    
    delete[] arr;
}
