class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        // using hashmap to know the frequency if any number occurs more than
        // once so it can be used again
        int ans = 0;
        unordered_map<int, int> mpp;
        for (int i = 0; i < digits.size(); i++) {
            mpp[digits[i]]++;
        }
        for (int i = 100; i < 1000; i++) {
            if (i % 2 == 0) {
                int n = i;
                unordered_map<int, int> freq;
                while (n != 0) {
                    int digit = n % 10;
                    freq[digit]++;
                    n = n / 10;
                }
                bool possible=true;
                for(auto p :freq){
                    int digit=p.first;
                    int required=p.second;

                    if(mpp[digit]<required){
                        possible=false;
                        break;
                    }
                }
                if(possible){
                        ans++;
                    }
            }
        }
        return ans;
    }
};