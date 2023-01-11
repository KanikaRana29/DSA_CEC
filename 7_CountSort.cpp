#include<iostream>
using namespace std;
void print(int *arr, int size) {
   for(int i = 1; i<=size; i++)
      cout << arr[i] << " ";
   cout << endl;
}
int getMax(int arr[], int size) {
   int max = arr[1];
   for(int i = 2; i<=size; i++) {
      if(arr[i] > max)
         max = arr[i];
   }
   return max; 
}
void countSort(int *arr, int size) {
   int output[size+1];
   int max = getMax(arr, size);
   int count[max+1];    
   for(int i = 0; i<=max; i++)
      count[i] = 0;     
   for(int i = 1; i <=size; i++)
      count[arr[i]]++;    
   for(int i = 1; i<=max; i++)
      count[i] += count[i-1];  
   for(int i = size; i>=1; i--) {
      output[count[arr[i]]] = arr[i];
      count[arr[i]] -= 1;
   }
   for(int i = 1; i<=size; i++) {
      arr[i] = output[i]; 
   }
}
int main() {
   int n;
   cout << "Enter the number of elements ";
   cin >> n;
   int arr[n+1];       
   cout << "Enter elements " << endl;
   for(int i = 1; i<=n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   print(arr, n);
   countSort(arr, n);
   cout << "Array after Sorting: ";
   print(arr, n);
}
