vector<int> mergeSortedArrays(vector<int> A, vector<int> B) {
   vector<int> C(A.size() + B.size());
   for (int i = 0; i < A.size(); i++) {
       C[i] = A[i];
   }
   for (int i = 0; i < B.size(); i++) {
       C[A.size() + i] = B[i];
   }
   sort(C.begin(), C.end());
   return C;
}

//Time Complexity: O((m + n) * log (m + n))
//Auxiliary Space Complexity: O(1)

//optimal

vector<int> mergeSortedArrays(vector<int> A, vector<int> B) {
   vector<int> C(A.size() + B.size());
   int i = 0, j = 0, k = 0;
   while (i < A.size() && j < B.size()) {
       if(A[i] < B[j]) {
           C[k] = A[i];
           k++;
           i++;
       }
       else {
           C[k] = B[j];
           k++;
           j++;
       }
   }
   while (i < A.size()) {
       C[k] = A[i];
       k++;
       i++;
   }
   while (j < B.size()) {
       C[k] = B[j];
       k++;
       j++;
   }
   return C;
}

//Time Complexity: O(m + n)
//Auxiliary Space Complexity: O(1)
