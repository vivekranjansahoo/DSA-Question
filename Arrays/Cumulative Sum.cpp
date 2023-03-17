class Solution {
public:

   vector<int> getCumulativeSum(vector<int> &arr) {
   vector<int> cumulativeSum;
   for(int i = 0; i < arr.size(); i++) {
       int prefixSum = 0;
       for (int j = 0; j <= i; j++) {
           prefixSum += arr[j];
       }
       cumulativeSum.push_back(prefixSum);
   }
   return cumulativeSum;
}
};

//Time Complexity: O(n2)
//Space Complexity: O(n)
------------------------------------

optimal:

class Solution {
public:

   vector<int> getCumulativeSum(vector<int> &arr) {
   vector<int> cumulativeSum(n);
   cumulativeSum[0] = arr[0];
   for (int i = 1; i < arr.size(); i++) {
       cumulativeSum[i] = cumulativeSum[i - 1] + arr[i];
   }
   return cumulativeSum;
}
};

Time Complexity: O(n)
Space Complexity: O(n)


