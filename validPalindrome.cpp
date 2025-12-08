class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
     for(int i = 0; i<s.size(); i++){
        string temp = s.substr(i,1);
        if(((temp <= "z")&&(temp >= "a"))||((temp>="0")&&(temp<="9"))){
            str+= temp;

        }else if((temp <= "Z") && (temp >= "A")){
             std::transform(temp.begin(), temp.end(), temp.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    str += temp;
        }
        }
     for(int i = 0; i<str.size(); i++){
        cout << str.substr(i,1) << str.substr(str.size()-i-1,1) << endl;
        if(str.substr(i,1)!=str.substr(str.size()-i-1,1)){
            return false;
        }
     }
     return true;   
    }
};