#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    string s; short i;
    cin >> s >> i;
    cout << s[i-1] << '\n';
}
