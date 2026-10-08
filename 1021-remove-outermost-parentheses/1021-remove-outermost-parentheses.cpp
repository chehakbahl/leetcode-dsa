class Solution {
public:
    string removeOuterParentheses(string s) {
        string answer;
        int balance=0;
        //primitive parenthesis=when no of ( and ) are equal
        for(int i =0;i<s.size();i++){
            if(s[i]=='('){
                if(balance>0){
                    answer.push_back('(');
                    balance++;
                }
                else{
                    balance++;
                }
            }
            if(s[i]==')'){
                balance--;
                if(balance>0){
                    answer.push_back(')');
                }  
            } 
        }
        return answer;
    }
};