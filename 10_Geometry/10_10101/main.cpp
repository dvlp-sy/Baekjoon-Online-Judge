#include <iostream>

using namespace std;

int main()
{
    short A, B, C;
    cin >> A >> B >> C;
    
    if (A+B+C != 180)
        cout << "Error\n";
    else if (A==60 && B==60 && C==60)
        cout << "Equilateral\n";
    else if (A==B || B==C || C==A)
        cout << "Isosceles\n";
    else
        cout << "Scalene\n";
}
