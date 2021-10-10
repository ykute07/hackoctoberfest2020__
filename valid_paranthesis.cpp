   #include <iostream>
   #include <bits/stdc++.h>
   using namespace std;
   bool isValid(string s) {
       stack<char> m;
        for(auto& ch:s){
            if(ch=='('||ch=='{'||ch=='[')
                m.push(ch);
            else if(ch==')'){
                if(m.empty()||m.top()!='(')
                    return false;
                m.pop();
            }
                        else if(ch=='}'){
                if(m.empty()||m.top()!='{')
                    return false;
                m.pop();
            }
                        else if(ch==']'){
                if(m.empty()||m.top()!='[')
                    return false;
                m.pop();
            }
            
        }
    return m.empty();
    }
    
    int main()
    {
    string s;
    cin>>s;
    cout<<isValid(s);
    return 0;
    }