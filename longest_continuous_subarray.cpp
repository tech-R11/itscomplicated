class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count=1,count1=0,j=0,b;
        for(int i=0;i<nums.size();){
            j=i;
            b=i;
            while(j<nums.size()-1&&nums[j+1]>nums[j]){
                count++;
                j++;
            }
            if(i!=b)
            i=j+1;
            else i++;
            count1=max(count,count1);
            count=1;
        }return count1;
    }
};
