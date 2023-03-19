//narive approuch

vector<int> getPositiveCumulativeSum(vector<int> &arr) {
   vector<int> cumulativeSum;
   for (int i = 0; i < arr.size(); i++) {
       int prefixSum = 0;
       for(int j = 0; j <= i; j++) {
           prefixSum += arr[j];
       }
       cumulativeSum.push_back(prefixSum);
   }
   vector<int> positiveCumulativeSum;
   for(auto x: cumulativeSum) {
       if(x > 0) {
           positiveCumulativeSum.push_back(x);
       }
   }
   return positiveCumulativeSum;
}


//Time Complexity : O(n2)
//Space Complexity : O(n)

----------------------------------
  
//optimize
  
  vector<int> getPositiveCumulativeSum(vector<int> &arr) {
   vector<int> prefix(arr.size());
   prefix[0] = arr[0];
   for (int i = 1; i < arr.size(); i++) {
       prefix[i] = prefix[i - 1] + arr[i];
   }
   vector<int> positivePrefix;
   for (int i = 0; i < arr.size(); i++) {
       if(prefix[i] > 0) {
           positivePrefix.push_back(prefix[i]);
       }
   }
   return positivePrefix;
}

//Time Complexity : O(n) 
//Space Complexity : O(n)
