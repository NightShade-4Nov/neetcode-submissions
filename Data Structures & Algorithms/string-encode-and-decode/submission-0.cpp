class Solution {
public:

    string encode(vector<string>& strs) {
        string str;
        for(size_t i = 0; i < strs.size(); i++)
        { 
            str +=to_string(strs[i].size());
            str+='#';
            for(size_t j = 0; j < strs[i].length(); j++)
            {
                str+=strs[i][j];
            }

            
        }    
        return str;
    }

    vector<string> decode(string& s) {
    vector<string> vec;
    size_t i = 0;

    while (i < s.length())
    {
        size_t delimPos = s.find('#', i);           
        int len = stoi(s.substr(i, delimPos - i));   
        string word = s.substr(delimPos + 1, len); 
        vec.push_back(word);
        i = delimPos + 1 + len;                    
    }

    return vec;
}
};
