#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void findPrimeFactor(int num){
    int n=num;
    for(int i=2;i<=num;i++){
        while(num%i==0 && isPrime(i)){
                cout<<i<<" ";
            num=num/i;
        }
    }
}
void findDifference(int num){
    int n1=num,rem,sumPrime=0,sumNonPrime=0;
    while(n1>0){
        rem=n1%10;
        if(isPrime(rem)){
            sumPrime+=rem;
        }
        else{
            sumNonPrime+=rem;
        }
        n1=n1/10;
    }
    cout<<"Diffence : "<<sumPrime-sumNonPrime<<endl;
}
void findPrimeDigitFactor(int num){
    int n=num,sp=0,snp=0,rem;
    while(n>0){
        rem = n%10;
        if(num%rem==0){
            sp+=rem;
        }
        else{
            snp+=rem;
        }
        n=n/10;
    }
    cout<<"Diffence of prime factor digit and no-prime factor digit is: "<<sp-snp<<endl;
}
void findDifferencePlace(int num){
    int n=num,rem,se=0,so=0,i=1;
    while(n>0){
        rem=n%10;
        if(i%2==0){
            se=se+rem;
        }
        else{
            so+=rem;
        }
        n/=10;
        i++;
    }
    cout<<"Difference : "<<se-so<<endl;
}
void checkPallindrome(int num){
    int n=num,rem,sum=0;
    while(n>0){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(sum==num){
        cout<<num<<" is pallindrome\n";
    }
    else{
        cout<<num<<" is not pallindrome\n";
    }
}
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    //findPrimeFactor(num);
    //findDifference(num);
    //findPrimeDigitFactor(num);
    findDifferencePlace(num);
    //checkPallindrome(num);
}





