class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char,int> mps;
        unordered_map<char,int> mpt;

        for(char x: s)
            mps[x]++;
        for(char x: t)
            mpt[x]++;

        for(auto const& [key,val] : mps){
            if(mps.at(key)==mpt[key]){
                
            }else{
                return false;
            }
        }
        return true;
    }
};
