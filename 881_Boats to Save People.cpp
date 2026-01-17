class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int ans=0;
        int n=people.size();
        int l=0,r=n-1;
        sort(people.begin(),people.end());
        while(l<=r)
        {
            if(people[l]+people[r]<=limit)
            {
                ans++;
                l++;
                r--;
            }
            else if(people[l]+people[r]>limit)
            {
                ans++;
                r--;
            }
        }
        return ans;


    }
};
