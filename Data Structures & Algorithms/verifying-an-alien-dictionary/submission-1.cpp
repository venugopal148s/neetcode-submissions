class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> mpp;
        for(int i=0;i<order.size();i++){
            mpp[order[i]] = i;
        }
        for(int k=0;k<words.size()-1;k++){
            string s1 = words[k];
            string s2 = words[k+1];
            int i=0;
            while(i<s1.size() && i<s2.size()){
                if(mpp[s1[i]] != mpp[s2[i]]){
                    if(mpp[s1[i]] > mpp[s2[i]]){
                    return false;
                }
                break;
                }
                i++;
            }
            if(i == s2.size() && i < s1.size()){
                return false;
            }

        }
        return true;
        
    }
};