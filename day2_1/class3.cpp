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

    virtual void display2()
    {
        cout<<endl<<"--Display2 () of LPU(BASE)--"<<endl;
    }
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
        cout<<endl<<"--Display () of CSE(DERIVED)--"<<endl;
    }

    void display2()
    {
        cout<<endl<<"--Display () of CSE(DERIVED)--"<<endl;
    }
};
int main()
{
    LPU lpu_obj, *lpu_ptr;
    CSE cse_obj, *cse_ptr;

    cout<<"\n------------------------------------------------------"<<endl;
    cout<<"\n BASE(LPU) PTR-BASE(LPU) OBJ\n";
    lpu_ptr=&lpu_obj;
    lpu_ptr->display1(); //base class ptr-base class obj
    lpu_ptr->display2();

    cout<<"\n------------------------------------------------------"<<endl;
    cout<<"\n Derived(CSE) PTR-Derived(CSE) OBJ\n";

    cse_ptr=&cse_obj;
    cse_ptr->display1(); //derived class ptr-derived class obj
    cse_ptr->display2();

    cout<<"\n------------------------------------------------------"<<endl;
    cout<<"\n BASE(LPU) PTR-DErived(CSE) OBJ\n";

    lpu_ptr=&cse_obj; //naya hai base class ptr-derived class object
    lpu_ptr->display1();
    lpu_ptr->display2();

}