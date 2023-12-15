class Solution {
public:
    int mySqrt(int x) {
        if(1==x)return 1;
        if(x==0)return 0;
        int l =1, h = x;
       
        while(h>=l){
             int mid = l + (h-l)/2;
           long long int  mul = static_cast<long long>(mid) * mid;
            if(mul == x)return mid;
            else if (mul > x) h=mid-1;
            else if(mul < x) l=mid+1;
        }
        return h;
    }
};