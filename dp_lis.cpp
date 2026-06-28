class Solution {
    public:
    int recurse(int n,vector<int> &arr ,int index,int prev){
    if(index==n){
        return 0;
    }
    //take;
    int take=0;
    int nottake=0;
    if (prev == -1 || arr[index] >arr[ prev]) {
        take = 1 + recurse(n,arr,index+1,index);
    }
    
         nottake=recurse(n,arr,index+1,prev);
    return max(take,nottake);
}
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
       return recurse(n,nums,0,-1);
    }
};