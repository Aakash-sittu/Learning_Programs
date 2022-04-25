#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,arr[n];
    cout<<"Enter Limit of Array :";
    cin>>n;
    cout<<"Enter Unsorted Array Now!"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter index "<<i<<": ";
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int current = arr[i];
        int j=i-1;
        while(arr[j]>arr[i] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }arr[j+1]=current;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
