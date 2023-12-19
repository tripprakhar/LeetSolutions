class Solution {
public:

    int bs(vector<int>& numbers, int target, int s, int e){
        if(s>e)return -1;
        int mid = (s+e)/2;
        if(numbers[mid]==target)return mid;
        else if (numbers[mid]>target)return bs(numbers,target,s,mid-1);
        else if(numbers[mid]<target)return bs(numbers,target,mid+1,e);
        return -1;
    }

    vector<int> twoSum(vector<int>& numbers, int target) {
        int n= numbers.size();
        for(int i=0;i<n;i++){
            int b=bs(numbers,target-numbers[i],i+1,n-1) ;
            if(b != -1)return vector<int>{i+1,b+1};
        }
        return vector<int>{};
    }
    // for(int i=0; i<numbers.size(); i++) {
    //         if(binary_search(numbers.begin()+i+1,numbers.end(), target-numbers[i])){
    //             int x = lower_bound(numbers.begin()+i+1, numbers.end(), target-numbers[i])-numbers.begin();
    //             return {i+1,x+1};
    //         }
    //     }
    //     return {};
};