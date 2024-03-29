class Solution {
    public:
       bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        long int rev = 0;
        int temp = x;
        while(temp != 0) {
            int pop = temp % 10;
            temp /= 10;
            rev = rev * 10 + pop;
        }
        return x == rev;
    }
};