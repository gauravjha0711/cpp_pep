#include<iostream>
using namespace std;
void calculate(float marks[]){
    float total=0;
    for(int i=0; i<5; i++){
        total+=marks[i];
    }
    cout<<"Total marks: "<<total<<endl;
    double percentage = (total/500)*100;
    cout<<"Percentage: "<<percentage<<endl;
}
void print(string name, int roll, float marks[]){
    cout<<"Name: "<<name<<endl;
    cout<<"Roll number: "<<roll<<endl;
    cout<<"Marks: ";
    for(int i=0; i<5; i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;
}
void input(){
    string name;
    cout<<"Enter your name: ";
    getline(cin, name);
    int roll;
    cout<<"Enter your roll number: ";
    cin>>roll;
    float marks[5];
    cout<<"Enter your marks: ";
    for(int i=0; i<5; i++){
        cin>>marks[i];
    }
    print(name, roll, marks);
    calculate(marks);
}
int main(){
    input();
}