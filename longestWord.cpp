#include <iostream>
#include <string>

using namespace std;

string abbreviate(const string& word) {
    if (word.length() <= 3) {
        return word;
    } else {
        return word[0] + to_string(word.length() - 2) + word.back();
    }
}

int main() {
    string example1 = "localization";
    string example2 = "internationalization";

    cout << abbreviate(example1) << endl;
    cout << abbreviate(example2) << endl;

    return 0;
}
