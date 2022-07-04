//outer numbers of a array printer
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int r,c;
    cin>>r>>c;
    int a[r][c];
    int f=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }cout<<"\n";
    }
    
    
        for(int j=0;j<c;j++){
            
            cout<<a[f][j]<<" ";
            
        }
       for(int j=1;j<r;j++){
            int i=r-1;
            cout<<a[j][i]<<" ";
            
        }
        for(int j=c-2;j>=0;--j){
            int i=r-1;
            cout<<a[i][j]<<" ";
            
        }
        for(int j=r-2;j>=0;j--){
            
            cout<<a[j][f]<<" ";}  
            
        

    
    
    return 0;
}

