class Solution {
public:
    int trap(vector<int>& height) 
    {
        int i=0;
        int j=height.size()-1;
        int maxleft=0;
        int maxright=0;
        int store=0;
        while(i<j)
        {
            if(height[i] <= height[j])
            {
                if(height[i] >= maxleft)
                    maxleft = height[i];
                else
                    store += maxleft - height[i];

                i++;
            }
            else
            {
                if(height[j] >= maxright)
                    maxright = height[j];
                else
                    store += maxright - height[j];

                j--;
            }
        }
        return store;
    }
};
