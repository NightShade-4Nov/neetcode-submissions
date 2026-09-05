class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq;

    for (int num : nums) {
        freq[num]++;
    }

    vector<pair<int, int>> frequencies;

    for (auto& [value, count] : freq) {
        frequencies.push_back({count, value});
    }

    sort(frequencies.rbegin(), frequencies.rend());

    vector<int> result;

    for (int i = 0; i < k; i++) {
        result.push_back(frequencies[i].second);
    }

    return result;
}

};
