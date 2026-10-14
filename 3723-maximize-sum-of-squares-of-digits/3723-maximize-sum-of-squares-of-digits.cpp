class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(num*9<sum || sum==0){
            return "";
        }
        string answer="";
        for(int i=0;i<num;i++){
            if(sum>=9){
                answer.push_back('9');
                sum-=9;
            }
            else{
                answer.push_back('0'+sum);
                sum=0;
            }
        }
        return answer;
    }
};