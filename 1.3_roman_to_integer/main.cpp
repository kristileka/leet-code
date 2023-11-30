#include "iostream"
#include "string"
#include <map>


using namespace std;

int romanToInt(string s) {

    map<string, int> numerals;
    numerals["I"] = 1;
    numerals["V"] = 5;
    numerals["X"] = 10;
    numerals["L"] = 50;
    numerals["C"] = 100;
    numerals["D"] = 500;
    numerals["M"] = 1000;
    numerals["IV"] = 4;
    numerals["IX"] = 9;
    numerals["XL"] = 40;
    numerals["XC"] = 90;
    numerals["CD"] = 400;
    numerals["CM"] = 900;

    int currentSum = 0;
    int i = 0;
    while (i < s.length()) {
        if (i < s.length() - 1) {
            string symbol = s.substr(i, 2);
            if (numerals.count(symbol) > 0) {
                currentSum += numerals[symbol];
                i += 2;
                continue;
            }
        }
        string single_symbol = s.substr(i, 1);
        currentSum += numerals[single_symbol];
        i += 1;
    }
    return currentSum;
}
