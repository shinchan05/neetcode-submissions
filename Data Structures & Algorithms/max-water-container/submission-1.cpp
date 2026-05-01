class Solution {
public:
    int maxArea(vector<int>& heights) 
    {
      int vol=0;
      int i=0;
      int j=heights.size()-1;
      int max=0;
      while(i<j){
        vol=min(heights[i],heights[j])*(j-i);
        if(max<vol)
        {
           max=vol;
        }
        if(heights[i]<heights[j])
        {
            i++;
        }
        else
        j--;
        
      } 
      return max;  
    }
};
