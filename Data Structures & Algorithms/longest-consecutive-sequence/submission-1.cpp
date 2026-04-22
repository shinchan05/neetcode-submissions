class Solution 
{
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_set<int> store(nums.begin(),nums.end());
        int res=0;
        for(int i:nums)
        {
            int streaks=0,curr=i;
            while(store.find(curr)!=store.end())
            {
                streaks++;
                curr++;
            }
            res=max(res,streaks);
        }
        return res;
    }
};
