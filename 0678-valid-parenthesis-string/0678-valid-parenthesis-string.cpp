class Solution {
public:
    bool checkValidString(string s) {
        int low =0;//minimum number of unmatched '('
        int high=0; //maximum number of unmatched '('
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                low++;
                high++;
            }
            if(s[i]==')'){
                high--;
                low--;
            }
            if(s[i]=='*'){
                low--;
                high++;
            }
            low=max(low,0);
        if(high<0){
            return false;
        }
        } 
        return low==0;
    }
};