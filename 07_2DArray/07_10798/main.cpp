#include <iostream>
#include <string>

using namespace std;

int main()
{
    char words[5][15];
    string word;
    
    for (int i=0; i<5; i++)
        for (int j=0; j<15; j++)
            words[i][j] = '.';
    
    for (int i=0; i<5; i++)
    {
        cin >> word;
        for (int j=0; j<word.length(); j++)
            words[i][j] = word[j];
    }
    
    for (int j=0; j<15; j++)
    {
        for (int i=0; i<5; i++)
        {
            if (words[i][j] != '.')
                cout << words[i][j];
        }
    }
    cout << '\n';
}
