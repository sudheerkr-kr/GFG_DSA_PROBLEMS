class Solution {
  public:
    int countMinReversals(string s) {
        // code here
        if(s.size()%2==1){
            return -1;
            
        }
        int ans =0;
        stack<char> st;
        for(auto ch:s){
            if(ch=='{'){
                st.push(ch);
            }
            else{
                if(!st.empty() && st.top()=='{'){
                    st.pop();
                }
                else{
                    st.push(ch);
                }
            }
        }
        
        
        // if stack is still not empty , let's count reversals
        while(!st.empty()){
            char a = st.top();
             st.pop();
            char b= st.top();
             st.pop();
            
            if(a==b){
                ans+=1;
                
            }
            else{
                ans+=2;
            }
            
        }
        return ans;
            
      }
    };