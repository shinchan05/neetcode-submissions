class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
       unordered_map<int,int> seen;
        for(int i=0;i<nums.size();i++)
        {
            int cur=nums[i];
            int compliment=target-cur;
            if(seen.find(compliment)!=seen.end())
            {
                return {seen[compliment],i};
            }
            seen[cur] = i;
        }
        return {};
    }
};
