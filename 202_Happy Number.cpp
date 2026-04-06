class Solution {
public:
    bool isHappy(int n) {
          int tem=n;
        map<int,int>m;
        while(1){

         int sum=0;
    while(tem!=0)
    {
      int rem=tem%10;
      sum+=pow(rem,2);
      tem=tem/10;
    }
    if(sum==1)return true;
    tem=sum;
    m[sum]++;
    //cout<<sum<<" ";
     if(m[sum]>1){

        return false;
       }
      }
    }
};
