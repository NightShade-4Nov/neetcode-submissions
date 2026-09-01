class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> map;
        for(string& c : strs)
        {
            string key = c;
            sort(key.begin(), key.end());
            map[key].push_back(c);
        }

        std::vector<vector<string>> result;

        for(auto& [key,value] : map)
        {
            result.push_back(std::move(value));
        }
        return result;
    }
};
