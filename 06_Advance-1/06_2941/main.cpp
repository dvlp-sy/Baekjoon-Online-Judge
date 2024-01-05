#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Initialization
    string alpha[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    
    // Input
    string str;
    cin >> str;
    
    long size=str.length(); // 크로아티아 알파벳을 고려하기 전 길이
    
    for (string alp : alpha) // 각각의 크로아티아 알파벳에 대해
    {
        if (str.length() >= alp.length()) // str이 alp보다 길거나 같다면
        {
            for (int i=0; i<str.length()-alp.length()+1; i++) // 두 문자열 비교
            {
                if (str[i] != 'X')
                {
                    bool flag = 1;
                    for (int j=0; j<alp.length(); j++)
                    {
                        if (alp[j] != str[i+j])
                        {
                            flag = 0; // 크로아티아 알파벳 존재 X
                            break;
                        }
                    }
                    
                    if (flag) // 크로아티아 알파벳이 존재하면
                    {
                        for (int j=0; j<alp.length(); j++)
                            str[i+j] = 'X'; // 더이상 고려 X
                        size -= alp.length()-1;
                    }
                }
            }
        }
    }
    cout << size << '\n';
}
