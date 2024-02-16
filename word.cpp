#include <iostream>
#include <string>

int main() {
    std::string word;
    std::cin >> word;

    int upper_count = 0;
    for (char c : word) {
        if (std::isupper(c)) {
            upper_count++;
        }
    }

    int lower_count = word.size() - upper_count;

    std::cout << "Uppercase count: " << upper_count << std::endl;
    std::cout << "Lowercase count: " << lower_count << std::endl;

    return 0;
}
