class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> value = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int n = s.size();
        int result = 0;

        for (int i = 0; i < n; ++i) {
            int current  = value[s[i]];
            int next = 0;
            if (i + 1 < n) {
                next = value[s[i + 1]];
            }

            if (current < next) {
                result -= current;
            } else {
                result += current;
            }
        }

        return result;
    }
};
