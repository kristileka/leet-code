#include "vector"
#include "map"
#include "iostream"
#include "string"
#include <sstream>

using namespace std;

static vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> v;

    map<int, int> map;

    for (int i = 0; i < nums.size(); i++) {
        int item = nums[i];
        if (map.count(item) > 0) {
            int first_index = map[item];
            v.push_back(first_index);
            v.push_back(i);
            return v;
        } else {
            map[target - item] = i;
        }
    }
    return v;
}


int main() {
    vector<int> v = {3, 2, 4};
    vector<int> v1 = twoSum(v, 6);
    stringstream ss;
    copy(v1.begin(), v1.end(), ostream_iterator<int>(ss, " "));
    string s = ss.str();

    cout << s;
    return 0;
}


