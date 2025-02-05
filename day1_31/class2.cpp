#include <iostream>
using namespace std;
class complex
{
private:
    double real, imag;
public:
    complex(double real=0, double imag=0)
    {
        this->real=real;
        this->imag=imag;
        cout<<endl<<"Constructor INvoked"<<endl;
        cout<<"Number -> "<<real<<" + i"<<imag<<endl;

    }
    void display()
    {
        cout<<endl<<"Your Number is"<<endl;
        cout<<"Number -> "<<real<<" + i"<<imag<<endl;

    }
    complex operator+(complex &obj)
    {
        complex sum;
        sum.real=this->real+obj.real;
        sum.imag=this->imag+obj.imag;
        return sum;
    }
};

int main()
{   complex n1(15,15),n2(50,85),sum;
    n1.display();
    n2.display();
    sum=n1+n2;
    sum.display();


    return 0;
}