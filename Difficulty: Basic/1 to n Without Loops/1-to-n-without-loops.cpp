class Solution {
  public:
   void solve(int i , int n){
      
       if(i==n+1){
           return;
       }
       cout<<i<<" " ;
       solve(i+1, n);
   }
    void printTillN(int n) {
        int i=1;
        // code here
        solve(i,n);
        
    }
};