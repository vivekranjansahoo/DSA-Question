

void insertionSort(vector<int> &arr) {
   int n = arr.size();
   for (int i = 1; i < n; i++) {
       int currentElement = arr[i];
       int position = i - 1;
       while (position >= 0 && arr[position] > currentElement) {
           arr[position + 1] = arr[position];
           position--;
       }
       arr[position + 1] = currentElement;
   }
}

//Time Complexity: O(n2)
//Auxiliary Space Complexity: O(1)
