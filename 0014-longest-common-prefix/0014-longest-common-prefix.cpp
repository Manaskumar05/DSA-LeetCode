class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size = strs.size();

        int minlen = strs[0].size();

        for(int i = 1; i < size; i++) {
            minlen = std::min(minlen, (int)strs[i].size());
        }

        for(int i = 0; i < minlen; i++) {

            char ch = strs[0][i];

            for(int j = 1; j < strs.size(); j++) {

                if(strs[j][i] != ch) {
                    return strs[0].substr(0, i);
                }
            }
        }

        return strs[0].substr(0, minlen);
    }
};