#include<iostream>
using namespace std;

int main() {
    int cases, placement;
    cin >> cases >> placement;

    int storage[cases];
    int count = 0;

    for (int i = 0; i < cases; i++) {
        cin >> storage[i];
    }

    int cutoff_score = storage[placement - 1]; 

    for (int i = 0; i < cases; i++) {
        if (storage[i] > 0 && storage[i] >= cutoff_score) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
