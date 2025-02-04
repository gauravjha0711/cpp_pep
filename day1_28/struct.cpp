#include <iostream>
#include <limits>
using namespace std;

struct student_details
{
    string name;
    float marks[5], total=0, perc=0;
    int roll;
};
void input(student_details &s)
{   //cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout<<"\nEnter Name - ";
    getline(cin,s.name);
    cout<<"\nEnter Roll - ";
    cin>>s.roll;
    cout<<"\nEnter Marks of all 5 - ";
    cin>>s.marks[0]>>s.marks[1]>>s.marks[2]>>s.marks[3]>>s.marks[4];

}
void calculate(student_details &s)
{
    s.total=s.marks[0]+s.marks[1]+s.marks[2]+s.marks[3]+s.marks[4];
    s.perc=s.total/5;

}
void display(student_details &s)
{
    cout<<s.name<<endl<<s.roll<<endl<<s.total<<endl<<s.perc;
}
int main()
{   student_details s1, s2;
    input(s1);
    calculate (s1);
    display(s1);

    input(s2);
    calculate (s2);
    display(s2);

    return 0;
}
