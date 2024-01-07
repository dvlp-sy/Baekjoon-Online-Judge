#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    vector<int> sFactor;
    
    if (N != 1)
    {
        for (int num=2; num<=N; num++)
        {
            if (N % num == 0)
            {
                bool isPrime = 1;
                for (int i=2; i<num; i++)
                {
                    if (num % i == 0)
                        isPrime = 0;
                }
                
                if (isPrime)
                    sFactor.push_back(num);
            }
        }
        
        int i = 0;
        while (N > 1)
        {
            while (N % sFactor[i] == 0)
            {
                N /= sFactor[i];
                cout << sFactor[i] << '\n';
            }
            i++;
        }
    }
    
}
