#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    short T, R; string S;
    cin >> T;

    while (T--)
    {
        cin >> R >> S;
        char* str_arr = new char[S.length()*R];
        
        for (int i=0; i<S.length(); i++)
            for (int j=0; j<R; j++)
                str_arr[R*i+j] = S[i];
        
        for (int i=0; i<S.length()*R; i++)
            cout << str_arr[i];
        cout << '\n';
        
        delete[] str_arr;
    }
}
