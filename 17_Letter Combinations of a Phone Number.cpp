class Solution {
public:
void combination(string&digits,vector<string>&ans,string tem,vector<string>&digitochar,int i)
{
  if(i>=digits.size())
  {
    ans.push_back(tem);
    return;
  }
  int num=digits[i]-'0';
  string val=digitochar[num];
  for(int j=0;j<val.size();j++)
  {
    tem.push_back(val[j]);
    combination(digits,ans,tem,digitochar,i+1);
    tem.pop_back();
  }
}
public:
    vector<string> letterCombinations(string digits) {
        vector<string>digitochar{"","","abc","def","ghi","jkl",
        "mno","pqrs","tuv","wxyz"};
        vector<string>ans;
        string tem;
        if(digits.empty())return ans;
        combination(digits,ans,tem,digitochar,0);
        return ans;
    }
};
