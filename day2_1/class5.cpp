// #include <iostream>
// using namespace std;
// class LPU
// {
// public:
//     LPU()
//     {
//         cout<<endl<<"--WELCOME TO LPU by CONS--"<<endl;
//     }
//     void display()
//     {
//         cout<<endl<<"--Display () of LPU--"<<endl;
//     }
// };
// class CSE : public LPU
// {
// public:
//     CSE()
//     {
//         cout<<endl<<"--WELCOME TO CSE by CONS--"<<endl;
//     }
//     void display()
//     {
//         cout<<endl<<"--Display () of CSE--"<<endl;
//     }
// };
// int main()
// {
//     LPU l;
//     CSE c;
//     l.display();
//     c.display(); //function overriding
//     c.CSE::display();//manual invoke
//     c.LPU::display();//manual invoking of base class function, overring function overriding

// }





// #include <iostream>
// using namespace std;
// class LPU
// {
// public:
//     LPU()
//     {
//         cout<<endl<<"--WELCOME TO LPU by CONS(BASE)--"<<endl;
//     }
//     void display1()
//     {
//         cout<<endl<<"--Display1 () of LPU(BASE)--"<<endl;
//     }

//      void display2()
//     {
//         cout<<endl<<"--Display2 () of LPU(BASE)--"<<endl;
//     }
// };
// class CSE : public LPU
// {
// public:
//     CSE()
//     {
//         cout<<endl<<"--WELCOME TO CSE by CONS(DERIVED)--"<<endl;
//     }
//     void display1()
//     {
//         cout<<endl<<"--Display () of CSE(DERIVED)--"<<endl;
//     }

//     void display2()
//     {
//         cout<<endl<<"--Display () of CSE(DERIVED)--"<<endl;
//     }
// };
// int main()
// {
//     LPU lpu_obj, *lpu_ptr; //base class
//     CSE cse_obj, *cse_ptr; //derived class

//     cout<<"\n------------------------------------------------------"<<endl;
//     cout<<"\n BASE(LPU) PTR-BASE(LPU) OBJ\n";
//     lpu_ptr=&lpu_obj;
//     lpu_ptr->display1(); //base class ptr-base class obj
//     lpu_ptr->display2();

//     cout<<"\n------------------------------------------------------"<<endl;
//     cout<<"\n Derived(CSE) PTR-Derived(CSE) OBJ\n";

//     cse_ptr=&cse_obj;
//     cse_ptr->display1(); //derived class ptr-derived class obj
//     cse_ptr->display2();

//     cout<<"\n------------------------------------------------------"<<endl;



// }






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
    LPU lpu_obj, *lpu_ptr; //base class
    CSE cse_obj, *cse_ptr; //derived class

    cout<<"\n------------------------------------------------------"<<endl;
    cout<<"\n BASE(LPU) CLASS PTR-BASE(LPU)CLASS OBJ\n";
    lpu_ptr=&lpu_obj;
    cout<<"\nlpu_ptr->display1();\n";
    lpu_ptr->display1(); //base class ptr-base class obj
    cout<<"\nlpu_ptr->display2();\n";
    lpu_ptr->display2();

    cout<<"\n------------------------------------------------------"<<endl;
    cout<<"\n Derived(CSE) CLASS PTR-Derived(CSE) CLASS OBJ\n";

    cse_ptr=&cse_obj;
    cout<<"\ncse_ptr->display1();\n";
    cse_ptr->display1(); //derived class ptr-derived class obj
    cout<<"\ncse_ptr->display2();\n";
    cse_ptr->display2();

    cout<<"\n------------------------------------------------------"<<endl;
    cout<<"\n BASE(LPU) CLASS PTR-DErived(CSE) CLASS OBJ\n";
    cout<<"\n VERY VERY SPECIAL CASE\n";

    lpu_ptr=&cse_obj; //naya hai base class ptr-derived class object
    cout<<"\nlpu_ptr=&cse_obj;\n";
    cout<<"\nlpu_ptr->display1() [sada vala];\n";
    lpu_ptr->display1();
    cout<<"\nlpu_ptr->display2() [ye virtual vala hai];\n";
    lpu_ptr->display2();

}