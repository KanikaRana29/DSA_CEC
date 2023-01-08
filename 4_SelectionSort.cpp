#include<iostream>
using namespace std;

void selection(int arr[], int n)  
{  
    int i, j, min;  
      
    for (i = 0; i < n-1; i++)    
    {  
        min = i;
          
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min])  
            min = j;  
            int temp = arr[min];  
            arr[min] = arr[i];  
            arr[i] = temp;  
    }  
}  
  
void printArr(int a[], int n)   
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout<<a[i]<<" ";  
}  
  
int main()  
{  
    int a[] = { 21, 31, 20, 7, 29, 19 };  
    int n = sizeof(a) / sizeof(a[0]);  
    cout<<"Before sorting array elements are -\n";  
    printArr(a, n);  
    selection(a, n);  
    cout<<"\nAfter sorting array elements are -\n";    
    printArr(a, n);  
    return 0;  
}