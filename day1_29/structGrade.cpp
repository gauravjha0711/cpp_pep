#include <iostream>
#include <limits>
using namespace std;

struct student_details
{
    string name;
    float marks[5], total=0, perc=0, fine=0;
    int roll;
    char grade;
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
void findFine(student_details &s)
{
    for(int i=0;i<5;i++){
        if(s.marks[i]<40)
        {
            s.fine+=500;
        }
    }
    if(s.grade=='F')
    {
        s.fine+=5000;
    }
}
void calculate(student_details &s)
{
    s.total=s.marks[0]+s.marks[1]+s.marks[2]+s.marks[3]+s.marks[4];
    s.perc=s.total/5;
    s.grade = (s.perc > 50) ? 'P' : 'F';
    findFine(s);

}
void display(student_details &s)
{   cout<<endl<<"Students Details \n";
    cout<<s.name<<endl<<s.roll<<endl<<s.total<<endl<<s.perc<<endl;
    cout<<"Fine is: "<<s.fine<<endl;
    cout<<"Grade is: "<<s.grade<<endl;
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
    // cout<<endl<<"Topper is "<<s[max].name<<" with total marks "<<s[max].perc<<endl;
    cout<<"Topper is \n";
    display(s[max]);
    cout<<endl;
}
int main()
{   student_details s[5];
    int n;
    cout<<"Enter number of students max 5 ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        input(s[i]);
        calculate (s[i]);    }
    for (int i=0;i<n;i++)
    {
        display(s[i]);
    }
    // calculateTopper(s,n);

    return 0;
}