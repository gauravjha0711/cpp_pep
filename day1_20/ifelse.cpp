#include<iostream>
using namespace std;
int main(){
    /*
    int n,income, tax;
    cin>>income;
    n = income-750000;
    if(income<=750000){
        cout<<"No tax\n";
        tax=0;
    }
    else if(750000<income && income<=1000000){
        tax=n*(0.1);
        cout<<"Tax is 10%\n";
    }
    else if(1000000<income && income<=2000000){
        tax= (250000*0.1)+((income-1000000)*(0.2));
        cout<<"Tax is 20%\n";
    }
    else if(2000000<=income){
        tax= (250000*0.1)+(1000000*0.2)+((income-2000000)*(0.3));
        cout<<"Tax is 30%\n";
    }
    cout<<"Tax is : "<<tax<<endl;


    int price,unit;
    cin>>unit;
    if(unit<=200){
        cout<<"No bill\n";
        price=0;
    }
    else if(unit<=300){
        cout<<"Rs 5 per unit\n";
        price=(unit-200)*5;
    }
    else if(unit <=500){
        cout<<"Rs 10 per unit\n";
        price=(100*5)+(unit-300)*10;
    }
    else if(unit>500){
        cout<<"Rs 20 per unit\n";
        price =(100*5)+(200*10)+(unit-500)*20;
    }
    cout<<"Bill : "<<price<<endl;
    cout<<"Effective unit : "<<(float)price/unit<<endl;


    int n;
    cin>>n;
    switch(n){
    case 1:
        cout<<"Sunday\n";
        break;
    case 2:
        cout<<"Monday\n";
        break;
    case 3:
        cout<<"Tuesday\n";
        break;
    case 4:
        cout<<"Wednesday\n";
        break;
    case 5:
        cout<<"Thursday\n";
        break;
    case 6:
        cout<<"Friday\n";
        break;
    case 7:
        cout<<"Saturday\n";
        break;
    default :
        cout<<"Please enter valid number\n";
        break;
    }



    int a=5, b=2;
    char ch;
    cin>>ch;
    switch(ch){
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
    }



    int num1, num2;
    cin>>num1>>num2;
    switch(num1>num2){
    case 1:
        cout<<num1;
        break;
    case 0:
        switch(num1<num2){
        case 1:
            cout<< num2;
            break;
        case 0:
            cout<<"Equal";
            break;
        }
        break;
    }
    */


    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<i<<" ";
    }


}
