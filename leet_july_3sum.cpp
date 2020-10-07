class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector< vector <int> > ans;  
        vector <int> ans1;
        map < pair <int,int> , int > mp;
        map <int,int> mp1;
        set < vector <int> > s1;
        
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                mp[make_pair(nums[i],nums[j])] = nums[i] + nums[j];
            }
            mp1[nums[i]] += 1;
        }
        for(auto it2 = mp1.begin(); it2 != mp1.end(); ++it2)
        {
            for(auto it1 = mp.begin(); it1 != mp.end(); ++it1)
            {
     //  cout << it1->first.first << " " << it1->first.second << " " << it2->first << endl;
                if((it1->second + it2->first == 0)&&(mp1[it2->first]+mp1[it1->first.first] + mp1[it1->first.second] >= 3))
                {
                    cout << (mp1[it2->first]+mp1[it1->first.first] + mp1[it1->first.second] >= 3) << endl;
                     //  cout << it1->first.first << " " << it1->first.second << " " << it2->first << endl;

                    ans1.push_back(it1->first.first);
                    ans1.push_back(it1->first.second);
                    ans1.push_back(it2->first);
                    sort(ans1.begin(),ans1.end());
                    s1.insert(ans1);
                    ans1.clear();
                }
            }
        }
        for (auto it = s1.begin(); it != s1.end(); it++)
            ans.push_back(*it);
        return ans;
    }
};
