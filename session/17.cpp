class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        
        for(int x=0;x<strs[0].size();x++){
            ans+=strs[0][x];
            
            for(auto x:strs){
                if(ans != x.substr(0,ans.size()))return ans.substr(0,ans.size()-1);
            }
        }
        return ans;
    }
};