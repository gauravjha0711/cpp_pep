#include <iostream>

using namespace std;
class student {
    int num;
public:
    int sal;
    student(int num=0)
    {
        this->num=num;
        (*this).sal=this->num;
        cout<<endl<<"NUM="<<num;
        cout<<endl<<"SAL="<<sal;
    }
};
int main()
{   int *iptr=new int;
    cout<<iptr<<endl; //address
    //cout << "Hello world!" << endl;
    (*iptr)=500;
    cout<<(*iptr);//value
    student *sptr=new student; //default=0
    student *sptr2=new student(1558); //default=0
    //(*sptr)--class object
    (*sptr).sal=500;
    cout<<endl<<(*sptr).sal;
    //sptr---pointer
    sptr->sal=18500;
    cout<<endl<<sptr->sal;
    return 0;
}