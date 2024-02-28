#include <iostream>

using namespace std;

int main() {
    int cases, count = 0;
    cin >> cases;

    int storage[cases];

    for (int i = 0; i < cases; i++) {
        cin >> storage[i];
    }

    for (int i = cases - 2; i >= 0; i--) {
        if (storage[i] != storage[i+1]) {
            count++;
        }
    }
    cout << count;

    return 0;
}
