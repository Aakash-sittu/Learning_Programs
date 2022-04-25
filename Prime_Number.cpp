#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,i;
    cout<<("Enter the number to check whether the number is prime: ");
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
        cout<<"Non Prime"<<endl;
        break;
        }
    }
    if(n==i){
        cout<<"Prime"<<endl;
    }
    return 0;
}
