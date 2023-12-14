class Solution {
public:

    int squares(int num){
        int sq = 0;
        while(num > 0){
            int x = num%10;
            sq += x*x;
            num/=10;
        }
        return sq;
    }

    bool isHappy(int n) {
        set<int> t;
        int temp = squares(n);
        cout<<temp<<" "; 
        while(temp!=1){
            if(t.contains(temp))return false;
            t.insert(temp);
            temp = squares(temp);
            cout<<temp<<" "; 

        }
        return true;
    }
};