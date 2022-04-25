#include <iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
    factorial*=i;
    }
return factorial;
}

int main(int argc, char const *argv[])
{
    /* code */
    int n,ans;
    cout<<"Enter Factorial Integer: ";
    cin>>n;
    ans=fact(n);
    cout<<ans<<endl;
    return 0;
}
