class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1,s2;
        for(auto it:nums1)
        {
            s1.insert(it);
        }
        for(auto it:nums2)
        {
            if(s1.count(it)==1)s2.insert(it);

        }
        vector<int>v;
        for(auto it:s2)
        {
            v.push_back(it);
        }
        return v;
    }
};
