#include "headers.h"
#include "dfh.h"
#define FILE "cse.txt"
using namespace file;

void input()
{
    cout<<endl<<"please enter name and roll  ";
    getline(cin,name);
    cin>>roll;
}

int main()
{
    input();
    data d(name,roll);
    d.display();
    d.write();
    d.read();



    return 0;
}




