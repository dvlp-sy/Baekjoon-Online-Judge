#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    for (int i=0; i<str.length(); i++)
        str[i] = toupper(str[i]);
    
    char fChar = str[0];
    int max=0, arr[26];
    
    // Initialization
    for (int i=0; i<26; i++)
        arr[i] = 0;
    
    // Find the Most Frequent Char
    for (char ch : str)
    {
        arr[ch-'A'] += 1;
        if (arr[ch-'A'] > max)
        {
            max = arr[ch-'A'];
            fChar = ch;
        }
    }
    
    int cnt=0;
    for (int i=0; i<26; i++)
    {
        if (arr[i] == max)
            cnt++;
    }
    
    if (cnt > 1)
        cout << '?' << '\n';
    else
        cout << static_cast<char>(fChar) << '\n';
}
