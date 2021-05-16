class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> vs;
        int a,b,c=-1,j=0;
        for(int i=0;i<nums.size();){
            j=i+1;
            b=i;
            c++;
            vs.push_back(to_string(nums[i]));
            if(j>=nums.size())break;
            while(j<nums.size()&&nums[j]==++nums[b]){
                j++;
            }
            if(j>i+1&&j<=nums.size()){
            vs[c]+="->";
            vs[c]+=to_string(nums[j-1]);
            }
            i=j;
        }return vs;
    }
};
