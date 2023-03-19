
int getIdenticalTwinsCount(vector<int> &arr) {
   int countIdenticalTwins = 0;
       for (int i = 0; i < arr.size(); i++) {
       for (int j = i + 1; j < arr.size(); j++) {
           if (arr[i] == arr[j]) {
               countIdenticalTwins++;
           }
       }
   }
   return countIdenticalTwins;
}

//Time Complexity: O(n2)
//Space Complexity: O(1)



---------------------

//optimal

int getIdenticalTwinsCount(vector<int> &arr) {
   unordered_map<int, int> frequency;
   for (auto x: arr) {
       frequency[x]++;
   }
   int identicalTwinCount = 0;
   for (auto x: frequency) {
       identicalTwinCount += (x.second * (x.second - 1) / 2);
   }
   return identicalTwinCount;
}

//Time Complexity: O(n)
//Space Complexity: O(n)
