#include<iostream>
using namespace std;

class complex
{
 int real,imag;
 
public:
 void input()
 {
  cout<<"enter real part:";
  cin>>real;
  
  cout<<"enter imaginary part:";
  cin>>imag;
 }
 
 void subtract(complex c)
 {
  cout<<"subtrction="
    <<real-c.real<<"+"
    <<imag-c.imag<<"i";
 }
};

int main()
{
 complex c1, c2;
 
 cout<<"enter first complex number:\n";
 c1.input();
 
 cout<<"enter second complex number:\n";
 c2.input();
 
 c1.subtract(c2);
 
 return 0;
}
