#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    
    bool isTrue = 1;
    long len = str.length();
    
    for (int i=0; i<len; i++)
    {
        if (str[i] != str[len-1-i])
            isTrue = 0;
    }
    
    cout << isTrue << '\n';
}
