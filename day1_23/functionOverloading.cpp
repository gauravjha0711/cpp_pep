#include<iostream>
using namespace std;
void print(int n){
    cout<<"Printing integer"<<endl;
}
void print(double n){
    cout<<"Printing Double"<<endl;
}
void print(char ch){
    cout<<"Priting character"<<endl;
}
void print(string st){
    cout<<"Printing string\n";
}
int main(){
    print("Hello");
}
0
