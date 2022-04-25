#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,temp,sum=0,r;
    printf("enter the interger: ");
    scanf("%d",&a);
    temp=a;
    while(a>0){
    r=a%10;
    sum=(sum*10)+r;
    a=a/10;
    }
    if(temp==sum){
        printf("Its a Palindrome Number!");
        
    }
    else printf("its not a Palindrome number");
    
    return 0;
}
