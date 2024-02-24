#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    int groups = 1;
    string prev_polarity;
    cin >> prev_polarity;

    for (int i = 1; i < n; ++i) {
        string polarity;
        cin >> polarity;
        if (polarity != prev_polarity) {
            groups++;
            prev_polarity = polarity;
        }
    }

    cout << groups << endl;

    return 0;
}
