#include <iostream>
#include<cmath>
using namespace std;
bool Prime(int num ){
    for(int i=2;i<sqrt(num);i++) //we created this function in order to check a number
    //if it is prime or not
    {
        if(num%i==0)//here num gets divided by i again and again untill we get a 0
        return false;//as soon as we get a 0 we load false to boolean
    }
    return true;//and if 0 is never triggered, then we load true to bool
}

int main(int argc, char const *argv[])
{
    int a,b;
    cout<<"Enter values of A and B: ";
    cin>>a>>b;
    for(int i=a;i<=b;i++){//we assign i as a to as to run a loop from a to b
        if(Prime(i))//here i variable is sent to prime function and there is is replaced with num adn the function runs there

        cout<<i<<endl;//if we return a false value a,b is printed and if we get a true value then we get all the prime numbers between a and be
    }

    return 0;
}
