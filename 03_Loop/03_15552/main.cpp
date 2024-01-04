#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int T, A, B;
    std::cin >> T;
    
    while (T--)
    {
        cin >> A >> B;
        cout << A+B << '\n';
    }
}
