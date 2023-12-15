class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)return n;
        int a = 1,b=2;n-=2;
        while(n){
            if(n==1)return a+b;
            n--;
            int x = a+b;
            a=b;b=x;
        }
        return 0;
    }
};