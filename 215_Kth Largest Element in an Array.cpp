class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto it:nums){
            pq.push(it);
        }
        while(!pq.empty()){
            if(k==1){
                return pq.top();

            }
            pq.pop();
            k--;
        }

        return -1;
    }

};
