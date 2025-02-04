#include<iostream>
using namespace std;
int checkCount(int count){
    if(count==2){
        return 1;
    }
    return 0;
}
int findPrime(int n){
        int count=0;
        for(int j=1;j<=n;j++){
            if(n%j==0){
                count++;
            }
        }
        if(checkCount(count)){
            return 1;
        }
        return 0;
}
bool isEven(int num){
    if(num%2==0){
            return 1;
        }
        else{
            return 0;
        }
}
bool isPrime(int num){
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
void prime(int num){
    if(isPrime(num)){
        cout<<"Prime\n";
        if(isEven(num)){
            cout<<"Even\n";
        }
        else{
            cout<<"Odd\n";
        }
    }
    else{
        //cout<<num-2<<endl;
        cout<<"not prime"<<endl;
    }
}
int digitSum(int num){
    int rem,sum=0,n=num;
    while(n>0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    return sum;
}
int main(){
    /*
    //printing number of multiple between a & b
    int a, b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(i%5==0){
            cout<<i<<" \n";
        }
    }


    //printing number of multiple between a & b taking input by user
    int a, b,c;
    cin>>a>>b>>c;
    for(int i=a;i<=b;i++){
        if(i%c==0){
            cout<<i<<" \n";
        }
    }


    ////printing count of number of multiple between a & b
    int a, b,c;
    cin>>a>>b>>c;
    int count;
    for(int i=a;i<=b;i++){
        if(i%c==0){
            count++;
        }
    }
    cout<<count;


    //printing number of multiple between a & b taking input by user and also count
    int start, end, num;
    cout<<"Enter starting range: ";
    cin>>start;
    cout<<"Enter ending range: ";
    cin>>end;
    cout<<"Enter number for multiple: ";
    cin>>num;
    int count=0,even=0,odd=0;
    for(int i=start;i<=end;i++){
        if(i%num==0){
            if(i%2==0){
                cout<<i<<" ";
                even++;
            }
            else{
                cout<<i<<" ";
                odd++;
            }
            //cout<<i<<" ";
            count++;
        }
    }
    cout<<"\nCount of even: "<<even<<" count of odd: "<<odd<<endl;
    cout<<"\nThere are "<<count<<" multiples of "<<num<<" between "<<start<<" and "<<end<<endl;




    int start, end, num;
    cout<<"Enter starting range: ";
    cin>>start;
    cout<<"Enter ending range: ";
    cin>>end;
    cout<<"Enter number for multiple: ";
    cin>>num;
    int count=0,even=0,odd=0;
    for(int i=start;i<=end;i++){
        if(i%num==0){
            if(i%2==0){
                cout<<i<<" ";
                even++;
            }
        }
    }
    cout<<"\nCount of even: "<<even<<endl;;
    for(int i=start;i<=end;i++){
        if(i%num==0){
            if(i%2!=0){
                cout<<i<<" ";
                odd++;
            }
        }
    }
    cout<<<<" count of odd: "<<odd<<endl;


    int start, end, num;
    cout<<"Enter starting range: ";
    cin>>start;
    cout<<"Enter ending range: ";
    cin>>end;
    for(int i=start;i<=end;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            cout<<i<<" ";
        }
    }



    int start, end, num;
    cout<<"Enter starting range: ";
    cin>>start;
    cout<<"Enter ending range: ";
    cin>>end;
    for(int i=start;i<=end;i++){
        if(findPrime(i)){
            cout<<i<<" ";
        }
    }
    */



    int num;
    cout<<"Enter number: ";
    cin>>num;
    //prime(num);
    cout<<digitSum(num);




















}
