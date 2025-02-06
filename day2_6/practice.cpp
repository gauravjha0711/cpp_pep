// write a program find maximum of 2 number, swapping of two no, array sum,overloading using template, concatnation of two string using template.
#include<iostream>
#include<string>
using namespace std;
template<typename v>
void swapp(v &a, v &b){
    v temp;
    temp=a;
    a=b;
    b=temp;
}
template<typename v>
void maxx(v a, v b){
    if(a>b){
        cout << "a is greater than b" << endl;
    }else{
        cout << "b is greater than a" << endl;
    }
}
template<typename v>
void sumArr(v arr[], v n){
    v sum = 0;
    for(v i=0; i<n; i++){
        sum += arr[i];
    }
    cout << "Sum of array: " << sum << endl;
}
template<typename v>
void add(v a, v b){
    cout << "Sum: " << a+b << endl;
}
template<typename v>
void stringConcat(v a, v b){
    cout<<"String add:" << a+b << endl;
}
int main(){
    int a = 5, b = 10;
    swapp(a, b);
    cout << "a: " << a << ", b: " << b << endl;

    maxx(5, 10);

    int arr[5]= {1,2,3,4,5};
    sumArr(arr, 5);

    add(5, 10);
    add(5.1, 6.2);

    string s1 = "Hello", s2 = "World";
    add(a,b);
}