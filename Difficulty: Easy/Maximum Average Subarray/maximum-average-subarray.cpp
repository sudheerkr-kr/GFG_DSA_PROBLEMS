class Solution {
  public:
    int findMaxAverage(vector<int>& arr, int k) {

        int sum = 0;

        
        for(int i = 0; i < k; i++) {
            sum += arr[i];
        }

        int maxSum = sum;
        int ans = 0;

        //
        for(int i = k; i < arr.size(); i++) {

            sum -= arr[i - k];
            sum += arr[i];

            if(sum > maxSum) {
                maxSum = sum;
                ans = i - k + 1;
            }
        }

        return ans;
    }
};