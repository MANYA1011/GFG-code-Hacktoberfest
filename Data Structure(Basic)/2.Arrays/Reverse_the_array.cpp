#include<iostream>
using namespace std;
void reverse(int arr[], int len){
    int low=0,high=len-1;
    while(low<high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
    for(int i=0; i<len; i++)
    cout<<arr[i]<<" ";
}
int main(){

    int n;
    cout<<"enter number of elements in array\n";
    cin>>n;
    int arr[n];
cout<<"Enter elements of array\n";
for(int i=0; i<n; i++)
cin>>arr[i];

reverse(arr,n);
return 0;

}
