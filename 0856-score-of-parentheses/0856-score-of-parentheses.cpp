class Solution {
public:
    int scoreOfParentheses(string s) {
     stack<int>st;
     st.push(0);
     int score=0;
     for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            st.push(0);
        }
        if(s[i]==')'){
            if(st.top()==0){
                score=1;
            }
            else{
                score=2*st.top();
            }
            st.pop();
            st.top()+=score;
        }

     }  
     return st.top(); 
    }
};