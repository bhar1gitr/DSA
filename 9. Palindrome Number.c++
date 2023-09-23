class Solution {
public:
    bool isPalindrome(int x) {
        int rev = 0;
        int dig = 0;
        if(x < 0){
            return false;
        }
        int y = x;
        while(y != 0){
            dig = y % 10;
            if((rev > INT_MAX / 10) || (rev < INT_MIN / 10)){
                return false;
            }
            rev = rev * 10 + dig;
            y = y / 10;
        }
        
        return rev == x;
    }
};
