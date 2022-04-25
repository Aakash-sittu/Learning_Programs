#include<iostream>
#include<climits>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter Limit of Array: ";
    cin>>n;
    int array[n];
    int maxno=INT_MIN;
    int minno=INT_MAX;
    for(int i=0;i<n;i++){
        cout<<"Enter array index "<<i<<":";
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        maxno=max(maxno,array[i]);
        minno=min(minno,array[i]);
    }
    cout<<"Max Number: "<<maxno<<endl;
    cout<<"Min Number: "<<minno<<endl;
    return 0;
}
