#include <iostream>
using namespace std;
class LPU
{
public:
    LPU()
    {
        cout<<endl<<"--WELCOME TO LPU by CONS(BASE)--"<<endl;
    }
    void display1()
    {
        cout<<endl<<"--Display1 () of LPU(BASE)--"<<endl;
    }

    virtual void aditya()=0;//pure virtual


};
class CSE : public LPU
{
public:
    CSE()
    {
        cout<<endl<<"--WELCOME TO CSE by CONS(DERIVED)--"<<endl;
    }
    void display1()
    {
        cout<<endl<<"--Display1 () of CSE(DERIVED)--"<<endl;
    }

    void aditya()
    {
        cout<<endl<<"--aditya () of CSE(DERIVED)--"<<endl;
    }
};
int main()
{
    LPU  *lpu_ptr;
    CSE cse_obj, *cse_ptr;



    cout<<"\n------------------------------------------------------"<<endl;
    cout<<"\n Derived(CSE) PTR-Derived(CSE) OBJ\n";

    cse_ptr=&cse_obj;
    cse_ptr->display1(); //derived class ptr-derived class obj
    cse_ptr->aditya();

    cout<<"\n------------------------------------------------------"<<endl;
    cout<<"\n BASE(LPU) PTR-DErived(CSE) OBJ\n";

    lpu_ptr=&cse_obj; //naya hai base class ptr-derived class object
    lpu_ptr->display1();
    lpu_ptr->aditya();

}