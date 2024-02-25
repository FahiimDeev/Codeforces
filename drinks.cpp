#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int cases, sum = 0;
    cin >> cases;

    int storage[cases];

    for (int i = 0; i < cases; i++) {
        cin >> storage[i];
        sum += storage[i];
    }

    double average = static_cast<double>(sum) / cases;

    cout << fixed << setprecision(12) << average << endl;

    return 0;
}
