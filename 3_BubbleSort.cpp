#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        // Last i elements are already
        // in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
 
int main()
{
    int arr[] = { 6, 1, 2, 4, 3};
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    int i;
    for (i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}