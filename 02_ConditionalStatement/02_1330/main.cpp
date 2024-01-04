#include <iostream>

using namespace std;

int main()
{
    short A, B;
    cin >> A >> B;
    
    if (A < B)
        cout << "<" << '\n';
    else if (A > B)
        cout << ">" << '\n';
    else
        cout << "==" << '\n';
}
