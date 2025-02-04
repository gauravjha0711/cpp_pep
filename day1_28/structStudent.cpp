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
{   cin.ignore(numeric_limits<streamsize>::max(),'\n');
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
{   cout<<endl<<"Students Details \n";
    cout<<s.name<<endl<<s.roll<<endl<<s.total<<endl<<s.perc;
}
void calculateTopper(student_details s[], int n)
{
    int max=0;
    for (int i=0;i<n;i++)
    {
        if (s[i].total>s[max].total)
        {
            max=i;
        }
    }
    // cout<<endl<<"Topper is "<<s[max].name<<" with total marks "<<s[max].perc;
    cout<<"Topper is \n";
    display(s[max]);
}
int main()
{   student_details s[5];
    int n;
    cout<<"Enter number of students max 5 ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        input(s[i]);
        calculate (s[i]);
        //display(s[i]);
    }
    for (int i=0;i<n;i++)
    {
        //input(s[i]);
        //calculate (s[i]);
        // display(s[i]);
    }
    calculateTopper(s,n);


    return 0;
}