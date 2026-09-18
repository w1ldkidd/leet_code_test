#include <algorithm>

class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_length = s.length();
        int t_length = t.length();

        if (s_length != t_length) { return false; }

        else {
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());

            if (s == t) { return true; }
            
            else {
                return false;
            }
        };
    }
};
