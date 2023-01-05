#include <iostream>
using namespace std;

int Linearsearch(int arr[], int n, int element_to_search)
{
  for(int i=0;i<n;i++)
{
  if(arr[i] == element_to_search)
{
  return i;
}
}
return -1;
}
int main(){
int n,x,index;
cout<<"Enter value of n\n";
cin>>n;
int arr[n];
cout<<"Enter the elements of the array\n";
for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<"Enter the element to find\n";
cin>>x;
index=Linearsearch(arr,n,x);
if(index==-1)
cout<<"Not found";
else
cout<<"The element is at "<<index;
return 0;
}