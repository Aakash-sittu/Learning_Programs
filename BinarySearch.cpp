//the time complexity for the given code is log n base 2!!
#include<iostream>
using namespace std;
int BinSearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    int mid;
    while(s<=e){
        mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>s){
            e=mid-1;
        }
        else{s=mid+1;}
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int n,arr[n],key;
    cout<<"Enter Limits of Array: ";
    cin>>n;
    cout<<"\nEnter Array ONLY in ascending order!\n"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter Array Index "<<i<<":";
        cin>>arr[i];
    }
    cout<<"Enter KEY to find index for: ";
    cin>>key;
    if(BinSearch(arr,n,key)==-1){
        cout<<"There is NO Match for the KEY in the given array!"<<endl;
    }
    else{
    cout<<BinSearch(arr,n,key)<<endl;
    }
    return 0;
}
