//WAP to show default constructor
/*#include<iostream>
using namespace std;
class Student{
    string name;
    int roll;
    float total,percentage;
    public:
    Student(){
        cout<<"Constructor called"<<endl;
    }
    void input(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll no: ";
        cin>>roll;
        cout<<"Enter total marks: ";
        cin>>total;
        
    }
    void calculate(){
        percentage=total/5;
    }   

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Total Marks: "<<total<<endl;
        cout<<"Percentage: "<<percentage<<endl;
        
    }
    ~Student(){
        cout<<"Destructor called"<<endl;
    }
};
int main(){
    Student s1;
    cout<<"Welcome To OOPS!"<<endl;
    s1.input();
    s1.calculate();
    s1.display();

}*/


//WAP to show paramertised constructor
/*#include<iostream>
using namespace std;
class Student{
    string name;
    int roll;
    float total,percentage;
    public:
    Student(){
        cout<<"Default constructor called"<<endl;
    }
    Student(string name,int roll,float total=500){
        cout<<"Paramertised constructor called"<<endl;
        this->name=name;
        this->roll=roll;
        this->total=total;
        calculate();
        
    }
    Student(Student &obj){
        cout<<"Copy constructor called"<<endl;
        name=obj.name;
        roll=obj.roll;
        total=obj.total;
        display();

    }
    void calculate(){
        percentage=total/5;
        display();
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Total Marks: "<<total<<endl;
        cout<<"Percentage: "<<percentage<<endl;
        
    }
    ~Student(){
        cout<<"Destructor called"<<endl;
    }
};
int main(){
    Student s("RIYA",4,80),s1;
    s1=s;
    cout<<"Welcome To OOPS!"<<endl;
    Student s2=s;
    Student s3(s2);


}*/


//WAP that will count the number of function counts static example
/*#include<iostream>
using namespace std;
void print(){
    static int count=1;
    cout<<"called: "<<count<<endl;
    count++;
}
int main(){
    for(int i=1;i<=5;i++){
        print();
    }
}*/

//WAP that will count the number of function counts extern example
/*#include<iostream>
using namespace std;
void print(){
    extern int count;
    cout<<"called: "<<count<<endl;
    count++;
}
int main(){
    for(int i=1;i<=5;i++){
        print();
    }
}
int count=1;
*/

//Static function
/*#include<iostream>
using namespace std;
class student{
    public:
    static int count;
    student(){
        cout<<"Cons"<<endl;
    }
    void counter(){
        cout<<"Count: "<<count<<endl;
         count++;
    }
};
int student::count=1;
int main(){
    student s,s1;
    s.counter();
    s1.counter();
 }*/


//single inheritance
/*#include<iostream>
using namespace std;
class bank{
    public:
    string name;
    float balance;
    bank(string name="Batch01", float balance=0.0){
        this->name=name;
        this->balance=balance;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
class atm_deposit:public bank{
    public:
    atm_deposit(string name="Batch01", float balance=0.0){
        cout<<"Atm constructor"<<endl;
    }
    void deposit(float bal){
        balance+=bal;
        cout<<"Deposited: "<<bal<<endl;
        display();
    }
};
int main(){
    //bank c1,c2("LPU",250);
    atm_deposit c1,c2;
    c1.display();
    c2.display();
    c1.deposit(100);
    c2.deposit(500);
    c1.deposit(200);
}*/


//multilevel inheritance
/*#include<iostream>
using namespace std;
class bank{
    public:
    string name;
    float balance;
    bank(string name="Batch01", float balance=0.0){
        this->name=name;
        this->balance=balance;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
class atm_deposit:public bank{
    public:
    atm_deposit(string name="Batch01", float balance=0.0){
        cout<<"Atm constructor"<<endl;
    }
    void deposit(float bal){
        balance+=bal;
        cout<<"Deposited: "<<bal<<endl;
        display();
    }
};
class atm_withdraw:public atm_deposit{
    public:
    atm_withdraw(string name="Batch01", float balance=0.0){
        cout<<"Atm withdraw constructor"<<endl;
    }
    void withdraw(float bal){
        if(balance>=bal){
            balance-=bal;
            cout<<"Withdrew: "<<bal<<endl;
            display();
        }
        else{
            cout<<"Insufficient balance"<<endl;
        }
    }
};
int main(){
    //bank c1,c2("LPU",250);
    atm_withdraw c1,c2;
    c1.display();
    c2.display();
    c1.deposit(100);
    c2.deposit(500);
    c1.deposit(200);
    c1.withdraw(150);
    c2.withdraw(800);

   

}*/


//multiple inheritance
#include<iostream>
using namespace std;
class bank{
    protected:
    string name;
    float balance;
    public:
    bank(string name="Batch01", float balance=0.0){
        this->name=name;
        this->balance=balance;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Final Balance: "<<balance<<endl;
    }
};
class atm_deposit:public bank{
    public:
    atm_deposit(string name="Batch01", float balance=0.0):bank(name, balance){
        cout<<"Atm constructor"<<endl;
    }
    void deposit(float bal){
        balance+=bal;
        cout<<"Deposited: "<<bal<<endl;
        display();
    }
};
class atm_withdraw:public atm_deposit{
    public:
    atm_withdraw(string name="Batch01", float balance=0.0):atm_deposit(name,balance){
        cout<<"Atm withdraw constructor"<<endl;
    }
    void withdraw(float bal){
        cout<<"current amount: "<<balance<<endl;
        cout<<"final amount: "<<bal<<endl;
            balance-=bal;
            
            display();
    }
       
};
int main(){
    //bank c1,c2("LPU",250);
    atm_withdraw c1,c2("LPU",250);
    c1.display();
    c2.display();
    c1.deposit(100);
    c2.deposit(500);
    c1.deposit(150);
    c2.deposit(600);
    c1.withdraw(117);
    c2.withdraw(20);

   

}