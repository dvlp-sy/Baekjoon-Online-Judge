#include <iostream>

using namespace std;

int main()
{
    int X, num=1;
    cin >> X;
    
    while (X > num)
    {
        X -= num;
        num++;
    }
    
    int n=0, m=num+1;
    
    for (int i=0; i<X; i++)
    {
        n++;
        m--;
    }
    
    if (num%2 == 0)
        cout << n << '/' << m << '\n'; // 분모가 감소
    else
        cout << m << '/' << n << '\n'; // 분모가 증가
}
