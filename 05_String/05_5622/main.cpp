#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int toNum[26];
    
    int num=2, sum=0;
    for (int i=0; i<26; i+=3)
    {
        if (num == 7 || num == 9)
        {
            toNum[i] = num;
            toNum[i+1] = num;
            toNum[i+2] = num;
            toNum[i+3] = num;
            num++; i++;
        }
        else
        {
            toNum[i] = num;
            toNum[i+1] = num;
            toNum[i+2] = num;
            num++;
        }
    }
    
    cin >> str;
    for (char ch : str)
        sum += toNum[ch-'A'] + 1;
    
    cout << sum << '\n';
    
}
