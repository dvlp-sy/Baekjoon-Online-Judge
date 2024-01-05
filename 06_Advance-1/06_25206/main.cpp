#include <iostream>
#include <string>

using namespace std;

int main()
{
    string subject;
    double credit;
    string grade;
    
    double totScore = 0, totSum = 0;
    while (cin >> subject >> credit >> grade)
    {
        if (grade != "P")
        {
            totSum += credit;
            
            if (grade == "A+")
                totScore += credit * 4.5;
            else if (grade == "A0")
                totScore += credit * 4.0;
            else if (grade == "B+")
                totScore += credit * 3.5;
            else if (grade == "B0")
                totScore += credit * 3.0;
            else if (grade == "C+")
                totScore += credit * 2.5;
            else if (grade == "C0")
                totScore += credit * 2.0;
            else if (grade == "D+")
                totScore += credit * 1.5;
            else if (grade == "D0")
                totScore += credit * 1.0;
            
        }
    }
    
    cout << totScore/totSum << '\n';
    
}
