class Solution {
  public:
    bool checkRedundancy(string &s) {
       
                stack<char> st;

                for(int i = 0; i < s.size(); i++) {
                    if(s[i] == ')') {

                        bool hasOperator = false;

                        while(!st.empty() && st.top() != '(') {
                            if(st.top() == '+' || st.top() == '-' ||
                               st.top() == '*' || st.top() == '/') {
                                hasOperator = true;
                            }
                            st.pop();
                        }

                        st.pop(); // remove '('

                        if(!hasOperator)
                            return true;
                    }
                    else {
                        st.push(s[i]);
                    }
                }

                return false;
            
    }
};
