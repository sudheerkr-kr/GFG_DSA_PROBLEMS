class Solution {
public:
    int celebrity(vector<vector<int>>& mat) {

        int n = mat.size();

        stack<int> st;

        // Step 1: Push all persons into the stack
        for(int i = 0; i < n; ++i)
        {
            st.push(i);
        }

        // Step 2: Discard method
        while(st.size() != 1)
        {
            int a = st.top();
            st.pop();

            int b = st.top();
            st.pop();

            // If a knows b
            if(mat[a][b])
            {
                // a is not celebrity, b might be
                st.push(b);
            }
            else
            {
                // b is not celebrity, a might be
                st.push(a);
            }
        }

        // Step 3: Check the remaining person
        int mightBeCelebrity = st.top();
        st.pop();

        // Celebrity should not know anyone
        for(int i = 0; i < n; i++)
        {
            if(i != mightBeCelebrity && mat[mightBeCelebrity][i] != 0)
            {
                return -1;
            }
        }

        // Everyone should know the celebrity
        for(int j = 0; j < n; j++)
        {
            if(j != mightBeCelebrity && mat[j][mightBeCelebrity] == 0)
            {
                return -1;
            }
        }

        return mightBeCelebrity;
    }
};