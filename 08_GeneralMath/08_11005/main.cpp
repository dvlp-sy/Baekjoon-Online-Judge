#include <iostream>

using namespace std;

void transform(int N, int B)
{
    if (N > 0)
    {
        transform(N/B, B);
        int remainder = N%B;
        if (remainder >= 10 && remainder <=35)
            cout << static_cast<char>(remainder-10+'A');
        else
            cout << remainder;
    }
}

int main()
{
    int N, B;
    cin >> N >> B;
    
    transform(N, B);
    cout << '\n';
}
