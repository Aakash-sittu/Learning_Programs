#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,sum=0,lastdigit,original_n;
    cin>>n;
    original_n=n;
    while(n>0){
        lastdigit=n%10;
        sum=(lastdigit*lastdigit*lastdigit)+sum;
        n=n/10;

    }
    if(original_n==sum){
        cout<<"It is a Armstrong Number"<<endl;
    }
    else cout<<"It is not a Armstrong Number"<<endl;
    return 0;
}
