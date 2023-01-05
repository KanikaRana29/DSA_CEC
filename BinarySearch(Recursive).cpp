#include <iostream>
using namespace std;

int Binarysearch(int arr[], int l, int r, int element)
{
  
  while(l<=r){
      int mid=l+(r-l)/2;
      if(arr[mid]==element)
       return mid;
      else if(arr[mid]<element)
       return Binarysearch(arr,mid+1,r,element);
      else
        return Binarysearch(arr,l,mid-1,element);
  }
  return -1;
  }

int main(){
int n,x,index,l,r;
cout<<"Enter value of n\n";
cin>>n;
l=0;
r=n-1;
int arr[n];
cout<<"Enter the elements of the array\n";
for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<"Enter the element to find\n";
cin>>x;
index=Binarysearch(arr,l,r,x);
if(index==-1)
cout<<"Not found";
else
cout<<"The element is at "<<index;
return 0;
}
