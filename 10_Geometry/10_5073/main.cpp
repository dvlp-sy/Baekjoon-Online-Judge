#include <iostream>

using namespace std;

int main()
{
    short a, b, c;
    
    while(cin >> a >> b >> c)
    {
        if (a==0 && b==0 && c==0)
            break;
        
        int max = a;
        if (b > max)
            max = b;
        if (c > max)
            max = c;
        
        if (max >= a+b+c-max)
            cout << "Invalid\n";
        else if (a==b && b==c && c==a)
            cout << "Equilateral\n";
        else if (a==b || b==c || c==a)
            cout << "Isosceles\n";
        else
            cout << "Scalene\n";
    }
    
}
