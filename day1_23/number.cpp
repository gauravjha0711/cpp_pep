#include<bits/stdc++.h>
using namespace std;
void removeNumberReverse(int num, int r){
    int n=num,rem=0,rem2=0,sum=0,sum2=0;
    while(n>0){
        rem=n%10;
        if(rem!=r){
            sum=sum*10+rem;
        }
        n/=10;
    }
    while(sum>0){
        rem2=sum%10;
        sum2=sum2*10+rem2;
        sum/=10;
    }
    cout<<"After remove: "<<sum2<<endl;
}
void removeNumber(int num, int r);
int main(){
    int n,r;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter number for remove: ";
    cin>>r;
    //removeNumberReverse(n,r);
    removeNumber(n,r);
}
void removeNumber(int num, int r){
    int sum=0,rem,n=num,pow=1;
    while(n>0){
        rem=n%10;
        if(rem!=r){
            sum=sum+(rem*pow);
            pow*=10;
        }
        n/=10;
    }
    cout<<"After remove: "<<sum<<endl;
}
