#include <iostream>

using namespace std;

int main()
{
    long N;
    cin >> N;
    
    int i=0, cnt=0;
    while (N>0)
    {
        if (i == 0)
            N--;
        else
            N -= 6*i;
        i++;
        cnt++;
    }
    
    cout << cnt << '\n';
}
