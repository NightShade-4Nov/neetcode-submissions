class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, int> counts;
        for(auto& c: s)
        {
            counts[c]++;
        }
        for(auto& c: t)
        {
            counts[c]--;
        }
        for(auto const& [key, val] : counts)
        {
            if (val != 0) return false;
        }
        return true;
    }
};