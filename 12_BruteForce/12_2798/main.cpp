#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N, M, elem;
    cin >> N >> M;
    
    int* cards = new int[N];
    for (int i=0; i<N; i++)
    {
        cin >> elem;
        cards[i] = elem;
    }
    
    int max = 0;
    for (int i=0; i<N; i++)
    {
        for (int j=i+1; j<N; j++)
        {
            for (int k=j+1; k<N; k++)
            {
                int sum = cards[i] + cards[j] + cards[k];
                if (sum > max && sum <= M)
                    max = sum;
            }
        }
    }
    
    delete[] cards;
    cout << max << '\n';
}
