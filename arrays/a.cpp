class Solution {
public:
    int reverse(int x) {
        int max = INT_MAX;
        int min = INT_MIN;
       long long int revnum=0;
      
        while(x!=0){
            long long int lDigit = x%10;
            revnum = revnum*10+lDigit;
            x=x/10;
        }

        if(revnum>=max || revnum<=min){
            return 0;
        }

        return revnum;
    }
};