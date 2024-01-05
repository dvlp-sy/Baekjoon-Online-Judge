#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N, sum=0; string str;
    cin >> N >> str;
    for (char c : str)
        sum += c - '0';
    
    cout << sum << '\n';
}
