#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T; string str;
    cin >> T;
    
    while (T--)
    {
        cin >> str;
        cout << str[0] << str[str.length()-1] << '\n';
    }
    
}
