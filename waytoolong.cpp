#include <iostream>
using namespace std;

int main()
{
    int number;
    string sss;
    cin >> number;
    while (number--)
    {
        cin >> sss;
        if (sss.length() > 10)
        {
            cout << sss[0] << sss.length() - 2 << sss[sss.length() - 1] << endl;
        }
        else
        {
            cout << sss << endl;
        }
    }

    return 0;
}