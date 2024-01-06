#include <iostream>
#include <vector>

using namespace std;

int main()
{
    short M, N;
    cin >> M >> N;
    
    vector<short> prime; int sum = 0; bool isPrime;
    
    for (int num=M; num<=N; num++)
    {
        if (num == 1)
            isPrime = 0;
        else
            isPrime = 1;
        
        for (int i=2; i<num; i++)
            if (num % i == 0) // 소수 X
            {
                isPrime = 0;
                break;
            }
        
        if (isPrime)
        {
            sum += num;
            prime.push_back(num);
        }
    }
    
    if (prime.empty())
        cout << -1 << '\n';
    else
    {
        cout << sum << '\n';
        cout << prime.front() << '\n';
    }
    
}
