class Solution {
public:
    bool isSubsequence(string s, string t) {
        int pos = 0;
       
        for(int i = 0; i<t.size(); i++){
            if(t.substr(i,1) == s.substr(pos,1)){    
                pos++;
            }
            if(pos == s.size()){
                // if(s.size() == 0 && t.size() == 0){
                //     return false;
                // }
                return true;
            }
        }
        if(s.size() == 0){
            return true;
        }
        return false;
    }
};