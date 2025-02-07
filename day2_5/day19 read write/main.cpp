#include "headers.h"
#include "dfh.h"
#define FILE "cse.txt"
using namespace file;

void input()
{
    cin.ignore();
    cout<<endl<<"please enter name ";
    getline(cin,name);
    cout<<endl<<"please enter Roll ";
    cin>>roll;
    cout<<"enter 5 subject marks ";
    cin>>marks[0]>>marks[1]>>marks[2]>>marks[3]>>marks[4];
    cout<<"Enter Grade ";
    cin>>grade;
}

int main()
{   char menu;
    data d;
    while(true)
    {
    cout<<"\nEnter \n1-Write\n2-Read\n3-Exit  ";
    cin>>menu;
    switch(menu)
    {
    case '1':   cout<<"\nYou have Pressed 01 for Write\n";
                input();
                d.input(name,roll,grade,marks);
                //d.display();
                //d.write_stream();
                //d.read_stream();
                d.write_object();
                break;


    case '2':   cout<<"\nYou have Pressed 02 for Read\n";
                d.read_object();
                break;

    case '3':   cout<<"\nYou have Pressed 3 for Exit\n";
                cout<<"Have a NIce Day Bye!!!";
                exit(0);

    default: cout<<"Wrong CHoice";

    }
    }

    return 0;
}




