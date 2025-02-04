#include<iostream>
using namespace std;
void input(int marks[],char grade[], int n){
    cout<<"Enter marks: ";
    for(int i=0;i<n;i++){
        cin>>marks[i];
    }  
    cout<<"Enter grade: ";
    for(int i=0;i<n;i++){
        cin>>grade[i];
    }
}
void print(int marks[], char grade[],int n){
    cout<<"Marks: ";
    for(int i=0;i<n;i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;
    cout<<"Grade: ";
    for(int i=0;i<n;i++){
        cout<<grade[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // int marks[100];
    // char grade[100];
    // cout<<"Enter size, Max 100: ";
    // int n;
    // cin>>n;
    // if(n>100){
    //     n=100;
    // }
    // input(marks,grade,n);
    // print(marks,grade,n);


    // char g[100];
    // cin.getline(g,100,'*');
    // cout<<g;
    

    string str;
    getline(cin, str);
    cout<<str;




}