#include "iostream"

bool isPalindrome(int x) {
    std::string value_as_string = std::to_string(x);
    int length = value_as_string.length();

    for (int i = 0; i < length / 2; i++) {
        if (value_as_string[i] != value_as_string[length - 1 - i])
            return false;
    }
    return true;
}
