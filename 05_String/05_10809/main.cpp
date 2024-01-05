#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S;
    cin >> S;
    
    int arr[26];
    for (int i=0; i<26; i++)
        arr[i] = -1;
    
    for (int i=0; i<S.length(); i++)
    {
        int idx = S[i]-'a';
        if (arr[idx] == -1)
            arr[idx] = i;
    }
    
    for (int i=0; i<26; i++)
        cout << arr[i] << ' ';
    cout << '\n';
}
