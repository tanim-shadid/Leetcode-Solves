class Solution {
public:
    char kthCharacter(int k) {
        string word="a";
        while(word.size()<k)
        {
            string tem=word;
            for(int j=0;j<tem.size();j++)
            {
            char nextChar = (tem[j] - 'a' + 1) % 26 + 'a';
            word+=nextChar;
           }


        } return word[k-1];
    }
};
