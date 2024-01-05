#include <iostream>

using namespace std;

int main()
{
    // 일반항 = (2^N + 1)^2
    int N, answer=1;
    cin >> N;
    
    for (int i=0; i<N; i++) // 2^N
        answer *= 2;
    answer += 1;            // 2^N + 1
    answer *= answer;       // (2^N + 1)^2
    
    cout << answer << '\n';
}
