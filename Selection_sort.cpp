#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter Limit of Array:";
    cin>>n;
    int arr[n];
    cout<<"\nEnter unsorted array\n"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter index "<<i<<": ";
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            }
        }
    }
    cout<<"The sorted Array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
