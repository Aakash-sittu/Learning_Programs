#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,arr[n],counter=1;
    cout<<"Enter Limit of Array: ";
    cin>>n;
    cout<<"Enter Array Values Now"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter index "<<i<<": ";
        cin>>arr[i];
    }
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            }           
        }counter++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
