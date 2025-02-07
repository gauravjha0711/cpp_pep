// // write a program find maximum of 2 number, swapping of two no, array sum,overloading using template, concatnation of two string using template.
// #include<iostream>
// #include<string>
// using namespace std;
// template<typename v>
// void swapp(v &a, v &b){
//     v temp;
//     temp=a;
//     a=b;
//     b=temp;
// }
// template<typename v>
// void maxx(v a, v b){
//     if(a>b){
//         cout << "a is greater than b" << endl;
//     }else{
//         cout << "b is greater than a" << endl;
//     }
// }
// template<typename v>
// void sumArr(v arr[], v n){
//     v sum = 0;
//     for(v i=0; i<n; i++){
//         sum += arr[i];
//     }
//     cout << "Sum of array: " << sum << endl;
// }
// template<typename v>
// void add(v a, v b){
//     cout << "Sum: " << a+b << endl;
// }
// template<typename v>
// void stringConcat(v a, v b){
//     cout<<"String add:" << a+b << endl;
// }
// int main(){
//     int a = 5, b = 10;
//     swapp(a, b);
//     cout << "a: " << a << ", b: " << b << endl;

//     maxx(5, 10);

//     int arr[5]= {1,2,3,4,5};
//     sumArr(arr, 5);

//     add(5, 10);
//     add(5.1, 6.2);

//     string s1 = "Hello", s2 = "World";
//     add(a,b);
// }








#include <iostream>
using namespace std;

template<typename t>
t maxof2(t a, t b )
{   cout<<"\n2 vala chal gya-V1";
    t c=(a>b)?a:b;
    return c;
}

template<typename t, typename t2>
t maxof2(t a, t2 b )
{   cout<<"\n2 vala chal gya-V2";
    t2 c=(a>b)?a:b;
    return c;
}


template<typename t>
t maxof2(t a, t b, t c )
{   cout<<"\n3 vala chal gya";
    c=(a>b)?a:b;
    return c;
}
template<typename t>
void swapping(t &a, t &b )
{
    t c=a;
    a=b;
    b=c;

}

template<typename t>
t sum(t *array1)
{
    t sum=0;
    for (int i=0;i<10;i++)
    {
        sum=sum+array1[i];
        cout<<"\n"<<array1[i]<<"\n";
    }
    return sum;
}
int main()
{
    cout << "Max of 2 - 2 numbers V1- " << maxof2(1,2)<<endl;
    cout << "Max of 2 - 3 numbers- " << maxof2(15.2,2.0,0.0)<<endl;
    cout << "Max of 2 - 2 numbers V2- " << maxof2(1,2.0)<<endl;
    int a=10, b=20;
    cout<<"\nbefore swapping "<<a<<" "<<b;
    swapping(a,b);
    cout<<"\nafter swapping "<<a<<" "<<b;
    double array1[10]={5,5,5,5,5,5,5};
    cout<<"sum of array "<<sum(array1);
    return 0;
}