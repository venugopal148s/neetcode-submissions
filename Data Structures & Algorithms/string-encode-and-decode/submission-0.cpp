class Solution {
public:

    string encode(vector<string>& strs) {
        string encode = "";
        for(int i=0;i<strs.size();i++){
        string s = to_string(strs[i].size())+"#"+strs[i];
        encode += s;
        }
        return encode;
        

    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        while(i < s.size()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int len = stoi(s.substr(i,j-i));
            j++;
            string word = s.substr(j,len);
            ans.push_back(word);
            i = j + len;
        }
        return ans;
    }
};
