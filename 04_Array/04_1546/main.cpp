#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N, max=0;
    double elem;
    cin >> N;
    
    double* arr = new double[N];
    for (int i=0; i<N; i++)
    {
        cin >> elem;
        if (elem > max)
            max = elem;
        arr[i] = elem;
    }
    
    double average = 0;
    for (int i=0; i<N; i++)
        average += (arr[i]/max) * 100;
        
    average /= N;
    cout << average << '\n';
    delete[] arr;
    
}
