#Link for the problem :https://leetcode.com/problems/reverse-words-in-a-string/
Solution in CPP
class Solution {
public:
    string reverseWords(string s){
     int n=s.size();
        vector<string>v;
        string str="";
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                v.push_back(str);
                str="";
            }
            else{
                str+=s[i];
            }
        }
        v.push_back(str);
        int i;
        string st="";
    for (i = v.size() - 1; i > 0; i--){
      st+=v[i]+" ";
    }
    st+=v[0];
return st;
    }
};
