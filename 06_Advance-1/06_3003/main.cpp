#include <iostream>

using namespace std;

int main()
{
    int arr[6];
    /* pieces */
    arr[0] = 1; arr[1] = 1; arr[2] = 2;
    arr[3] = 2; arr[4] = 2; arr[5] = 8;
    
    int input, output[6];
    for (int i=0; i<6; i++)
        output[i] = 0;
    
    for (int i=0; i<6; i++)
    {
        cin >> input;
        if (input != arr[i])
            output[i] = arr[i] - input;
    }
    
    for (int i=0; i<6; i++)
        cout << output[i] << ' ';
    cout << '\n';
}
