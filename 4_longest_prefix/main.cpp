#include "iostream"
#include "string"
#include <map>


using namespace std;

string longestCommonPrefix(vector<string> &strs) {
    string return_value = "";
    string original_prefix = strs[0];

    for (int j = original_prefix.size(); j > 0; j--) {
        bool correct_prefix = true;

        string current_prefix = original_prefix.substr(0, j);

        for (int i = 1; i < strs.size(); ++i) {
            if (!strs[i].starts_with(original_prefix.substr(0, j))) {
                correct_prefix = false;
            }
        }
        if (correct_prefix) return current_prefix;
    }

    return return_value;
}