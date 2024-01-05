#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int N, cnt=0;
    string str;
    cin >> N;
    
    while (N--)
    {
        cin >> str;
        
        bool arr[26];
        for (int i=0; i<26; i++)
            arr[i] = false;
        
        bool isGroup = 1;
        for (int i=0; i<str.length(); i++)
        {
            if (i == 0)
                arr[str[i]-'a'] = 1;
            else
            {
                if (arr[str[i]-'a'] != 0 && str[i-1] != str[i])
                    isGroup = 0;
                arr[str[i]-'a'] = 1;
            }
            
        }
        
        if (isGroup)
            cnt++;
    }
    
    cout << cnt << '\n';
}
