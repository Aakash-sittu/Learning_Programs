#include <iostream>
#include <algorithm>
using namespace std;
class complex
{
public:
    int real;
    int imaginary;
    complex()
    {
        real = 0;
        imaginary = 0;
    }
    // this can also be used

    // complex():real(0),imaginary(0){}

    complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }
    complex(complex &a)
    {
        real = a.real;
        imaginary = a.imaginary;
    }
    /*complex add(complex a)
    {
        complex temp;
        temp.real = real + a.real;
        temp.imaginary = imaginary + a.imaginary;
        return temp;
    }*/
    // changing to operator overloading
    complex operator+(complex a)
    {
        complex temp;
        temp.real = real + a.real;
        temp.imaginary = imaginary + a.imaginary;
        return temp;
    }

    void display()
    {
        cout << real << "+";
        cout << imaginary << "i" << endl;
    }
};
int main()
{
    complex c1;
    // int re, imi;
    // cin >> re >> imi;
    // c1.real = re;
    // c1.imaginary = imi;
    // c1.add();
    // c1.display();
    //  parametrized
    complex c2(3, 4);
    // c2.add();
    // c2.display();
    // copy
    complex c3(3, 5);
    complex c4 = c3;
    // c4.add();
    // c4.display();
    // c1 = c4.add(c3);
    // calling
    c1 = c3 + c4; // thisid for operator overloading..!!
    // c4 is parameter
    cout << c1.real << "+" << c1.imaginary << "i";
    cout << endl;
    return 0;
}
/* The operator will be assighned with different  functions it is categorised into uniary operator overloading and binary operator overloading
+,-,*,/,>>,<<
size of scope resolution operator*/
// return operatorany operator(list of argymemnts)
// write a program to overload the decrement operator and does decrement by 5
#include <iostream>
using namespace std;
class eg
{
public:
    int n, s;
    eg()
    {
        n = 0;
        s = 0;
    }
    eg(int num, int su)
    {
        n = num;
        s = su;
    }
    void operator--()
    {
        n = n - 5;
    }
    void operator++()
    {
        s = s + 2 + n;
    }
};
int main(int argc, char const *argv[])
{
    eg e(10, 8);
    --e;
    cout << e.n << endl;
    ++e;
    cout << e.s << endl;

    return 0;
}
