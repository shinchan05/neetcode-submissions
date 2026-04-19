class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int ,int> fre;
        for(int num : nums)
            {
                fre[num]++;
            }
        priority_queue< pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
vector<int> result;
            for(auto &it : fre)
            {
                 pq.push({it.second, it.first});

                if(pq.size() > k)
                {
                    pq.pop();
                }
            }
            while(!pq.empty())
                {
                    result.push_back(pq.top().second);
                    pq.pop();
                }
    
    return result;
    }

};
