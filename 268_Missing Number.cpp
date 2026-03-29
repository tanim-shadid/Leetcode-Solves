class Solution {
public:
    int missingNumber(vector<int>& v) {
        int n=v.size();
      int sum=accumulate(v.begin(),v.end(),0);
       int ans=(n*(n+1))/2;
      return ans-sum;
    }
};
