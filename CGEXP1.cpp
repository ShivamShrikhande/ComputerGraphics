Lab Assignment 1
Arithmetic operations on complex numbers using operator overloading.

#include<iostream>
using namespace std;
class complex
{
float real;
float imag;
public:
complex();
complex(float,float);
complex operator+(complex);
complex operator*(complex);
friend ostream &operator<<(ostream &out, complex c);
friend istream &operator>>(istream &in, complex &c);
};
complex::complex()
{
real=0;
imag=0;
}
complex::complex(float a,float b)
{
real=a;
imag=b;
}
complex complex::operator+(complex c)
{
complex temp;
temp.real=real+c.real;
temp.imag=imag+c.imag;
return temp;
}
complex complex::operator*(complex c)
{
complex temp2;
temp2.real=(real*c.real)-(imag*c.imag);
temp2.imag=(imag*c.real)+(real*c.imag);
return temp2;
}
ostream &operator<<(ostream &out, complex c)     //output
{
        out<<c.real<<"+"<<c.imag<<"i"<<"\n";
        return out;
}
istream &operator>>(istream &in, complex &c)     //input
{
        cout<<"enter real part:\n";
        in>>c.real;
        cout<<"enter imag part: \n";
        in>>c.imag;
        return in;
}
/*complex complex::operator /(complex c)
{
complex temp3;
temp3.x=((x*c.x)+(y*c.y))/((c.x*c.x)+(c.y*c.y));
temp3.y=((y*c.x)-(x*c.y))/((c.x*c.x)+(c.y*c.y));
return(temp3);
}
*/
int main()
{
complex c1,c2,c3;
cout<<"\n Enter the 1st complex number\n";
cin>>c1;
cout<<"\n Enter the 2nd complex number\n";
cin>>c2;
cout<<"\n The first number complex is ";
cout<<c1;
cout<<"\n";
cout<<"\n The second complex number is ";
cout<<c2;
cout<<"\n";
c3=c1+c2;
cout<<"Addition of complex number=";
cout<<c3;
cout<<"\n";
c3=c1*c2;
cout<<"Multiplication of complex number=";
cout<<c3;
cout<<"\n";
return 0;
}
