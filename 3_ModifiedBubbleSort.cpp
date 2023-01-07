#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) { 
  for (int j = 0; j < size - 1; ++j) {

    int flag = 0;
    for (int i = 0; i < size - j - 1; ++i) {
      if (arr[i] > arr[i + 1]) {

        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        flag = 1;
      }
    }

    if (flag == 0)
      break;
  }
}


int main()
{            
  int arr[] = {-11, 40, 0, 1, -31};
  int size = sizeof(arr) / sizeof(arr[0]);
  bubbleSort(arr, size);
  cout << "Sorted array :\n";
  for (int i = 0; i < size; ++i) {
    cout << "  " << arr[i];
  }
  cout << "\n";
}