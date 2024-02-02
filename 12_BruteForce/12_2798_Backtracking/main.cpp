/**
 * Backtracking을 사용하여 BOJ_2798 문제 해결하기
 */

#include <iostream>

void blackjack(int* cards, int idx, int sum, int cnt, int M, int N, int& max)
{
    if (cnt == 3) // Solution
    {
        if (sum > max)
            max = sum;
    }
    else
    {
        if (idx < N-1 && cnt <= 2) // End Condition
        {
            if (sum + cards[idx+1] <= M) // Promising
            {
                if (idx < N-1)
                {
                    // 해당 원소 추가
                    blackjack(cards, idx+1, sum+cards[idx+1], cnt+1, M, N, max);
                }
            }
            // 원소 추가 X
            blackjack(cards, idx+1, sum, cnt, M, N, max);
                
        }
    }
}

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    
    int* cards = new int[N];
    for (int i=0; i<N; i++)
    {
        int elem;
        cin >> elem;
        cards[i] = elem;
    }
    
    int max = 0;
    blackjack(cards, -1, 0, 0, M, N, max);
    
    cout << max << '\n';
    delete[] cards;
}
