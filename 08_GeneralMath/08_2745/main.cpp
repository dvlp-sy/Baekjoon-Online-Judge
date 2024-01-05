#include <iostream>
#include <string>

using namespace std;

int main()
{
    string N; short B;
    cin >> N >> B;
    
    long sum=0, len=N.length();
    for (int i=0; i<len; i++)
    {
        int prod = 1;
        for (int j=0; j<len-1-i; j++)
            prod *= B;
        if (N[i]>='0' && N[i]<='9')
            sum += (N[i]-'0') * prod;
        
        else if (N[i]>='A' && N[i] <='Z')
            sum += (N[i]-'A'+10) * prod;
        
    }
    
    cout << sum << '\n';
}
