class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.size() != t.size()){
        return false;
       } 
       unordered_map<char,int> mpp;
       for(int i=0;i<t.size();i++){
        mpp[t[i]]++;
       }
       for(int k=0;k<s.size();k++){
        if(mpp[s[k]] == 0){
            return false;
        }
        mpp[s[k]]--;
       }
       return true;
    }
};
