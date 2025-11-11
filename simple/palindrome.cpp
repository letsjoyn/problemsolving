class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int original=x;
        long long rem=0;
        while(x!=0){
            rem=(rem*10)+(x%10);
            x=x/10;
        }
        if(rem==original) return true;
        else return false;
    }
};
