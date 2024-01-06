#include <iostream>

using namespace std;

int main()
{
    short N, num, cnt=0;
    cin >> N;
    
    while (N--)
    {
        cin >> num;
        
        if (num != 1)
            cnt++;
        
        for (int i=2; i<num; i++)
        {
            if (num % i == 0) // 소수 X
            {
                cnt--;
                break;
            }
        }
    }
    
    cout << cnt << '\n';
}
