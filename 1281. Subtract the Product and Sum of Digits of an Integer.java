class Solution {
    public int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;
        int last = 0;
        while(n != 0){
            last = n % 10;
            sum += last;
            product *= last;
            n /=10;
        }
        int dif = product - sum;
        return dif;
    }
}
