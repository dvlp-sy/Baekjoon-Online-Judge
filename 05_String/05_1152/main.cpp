#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    string str;
    getline(cin, str);
    
    bool flag=0; int cnt = 0;
    for (char ch : str)
    {
        if (flag == 1) // after word start
        {
            if ((ch<'A' || ch>'Z') && (ch<'a' || ch>'z'))
                flag = 0;
        }
        else // before word start
        {
            if ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
            {
                cnt++;
                flag = 1;
            }
        }
    }
    
    cout << cnt << '\n';
}
