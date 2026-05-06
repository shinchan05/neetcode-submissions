class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_set<char> seen;
        int left=0;
        int maxlenght=0;
        for(int i=0;i<s.size();i++)
        {
           while(seen.count(s[i]))
           {
            seen.erase(s[left]);
            left++;
           } 
           seen.insert(s[i]);
           maxlenght=max(maxlenght,i-left+1);
        }
        return maxlenght;
    }
};
