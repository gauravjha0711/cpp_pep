#include<iostream>

using namespace std;
// function overloading
// int sum(int a, int b){
//     return a+b;
// }
// double sum(double a, double b){
//     return a+b;
// }
// char sum(char a, char b){
//     return a+b;
// }
// int main(){
//     cout<<"Sum of integer: "<<sum(5,6)<<endl;
//     cout<<"Sum of double: "<<sum(5.1, 6.2)<<endl;
//     cout<<"Sum of char: "<<sum('A','B')<<endl;
// }




// class overloading
// class inte{
//     int a;
//     int b;
//     public:
//     inte(int x, int y){
//         a=x;
//         b=y;
//     }
//     int sum(){
//         return a+b;
//     }
// };
// class dou{
//     double a;
//     double b;
//     public:
//     dou(double x, double y){
//         a=x;
//         b=y;
//     }
//     double sum(){
//         return a+b;
//     }
// };
// class cha{
//     char a;
//     char b;
//     public:
//     cha(char x, char y){
//         a=x;
//         b=y;
//     }
//     char sum(){
//         return a+b;
//     }
// };
// int main(){
//     inte i(5,6);
//     dou d(5.1,6.2);
//     cha c('A','B');
//     cout<<"Sum of integer: "<<i.sum()<<endl;
//     cout<<"Sum of double: "<<d.sum()<<endl;
//     cout<<"Sum of char: "<<c.sum()<<endl;
// }



// template function and auto function
// template<typename lpu>
// lpu add(lpu a, lpu b){
//     return a+b;
// }
// auto sum(auto a, auto b){
//     return a+b;
// }
// int main(){
//      cout<<"Sum of integer: "<<add(5,6)<<endl;
//     cout<<"Sum of double: "<<add(5.1, 6.2)<<endl;
//     cout<<"Sum of char: "<<add('A','B')<<endl;
//     cout<<endl;
//     cout<<"Sum of integer: "<<sum(5,6)<<endl;
//     cout<<"Sum of double: "<<sum(5.1, 6.2)<<endl;
//     cout<<"Sum of char: "<<sum('A','B')<<endl;
// }




#include<typeinfo>

//template class
template<typename lpu>
class ops{
    lpu a,b,c;
    public:
    lpu add(){
        cout<<"Enter a & b of type "<<typeid(lpu).name()<<": ";
        cin>>a>>b;
        c=a+b;
        
        return c;
    }
};
int main(){
    ops<int> i;
    cout<<"Sum of integer: "<<i.add()<<endl;
    ops<double> d;
    cout<<"Sum of double: "<<d.add()<<endl;
    ops<char> c;
    cout<<"Sum of char: "<<c.add()<<endl;
}


