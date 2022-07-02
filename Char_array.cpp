#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char arr[50]={"An apple a day keeps a bug away"};
    int i=0;
    while(arr[i]!='\0'){
        cout<<arr[i]<<endl;
        i++;
    } 

    return 0;
}

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char arr[50];
    cin>> arr;
    cout<<arr;
    return 0;
}
//palindrome using character arrays
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{   
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool counter=1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
        counter=0;
        break;
        }
    }
    if(counter==true)
    cout<<"Palindrome"<<endl;
    else cout<<"Not Palindrome"<<endl;
    return 0;
}

