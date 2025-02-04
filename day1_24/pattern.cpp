#include<iostream>
using namespace std;
void square(int n){
    cout<<"Pattern * square\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void number(int n){
    cout<<"Pattern number\n";
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void charac(int n){
    cout<<"Pattern character\n";
    char ch=65+n-1;
    for(int i=0;i<n;i++){
        for(char j='A';j<=ch;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void numpatt(int n){
    cout<<"Number Pattern\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j%2==0){
                cout<<"0 ";
            }
            else{
                cout<<"1 ";
            }
        }
        cout<<endl;
    }
}
void hallowsq(int n){
    cout<<"Hallow Square\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                cout<<"* ";
            }
            else{
                    cout<<"  ";
            }
        }
        cout<<endl;
    }
}
void principaldiagonal(int n){
    cout<<"Principla Diagonal\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1 ||i==j){
                cout<<"* ";
            }
            else{
                    cout<<"  ";
            }
        }
        cout<<endl;
    }
}
void reverseprincipaldiagonal(int n){
    cout<<"Reverse Principal Diagonal\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1 ||i==n-j-1){
                cout<<"* ";
            }
            else{
                    cout<<"  ";
            }
        }
        cout<<endl;
    }
}
void crisscrossprincipaldiagonal(int n){
    cout<<"criss cross Principal Diagonal\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1 || i==j ||i==n-j-1){
                cout<<"* ";
            }
            else{
                    cout<<"  ";
            }
        }
        cout<<endl;
    }
}
void traingle(int n){
    cout<<"Triangle\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void hallotraingle(int n){
    cout<<"Hallow triangle\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || i==n-1 || i==j){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
void numtraingle(int n){
    cout<<"Number Triangle\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
void charactertriangle(int n){
    cout<<"Character Triangle\n";
    char ch=65+n;
    for(char i='A';i<ch;i++){
        for(char j='A';j<=i;j++){
            cout<<(char)j<<" ";
        }
        cout<<endl;
    }
}
void counttriangle(int n){
    cout<<"Count Triangle\n";
    int k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<k;
            if(k<10){
                cout<<"  ";
            }
            else{
                cout<<" ";
            }
            k++;
        }
        cout<<endl;
    }
}
void Charcounttriangle(int n){
    cout<<"Character Count Triangle\n";
    char k='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}
void reverseTriangle(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}
void invertedTriangle(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<i){
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}
void hallowreverseTriangle(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<i){
                cout<<"  ";
            }
            else{
                if(i==1 || j==n-1 || i==j){
                    cout<<"* ";
                }
            }
        }
        cout<<endl;
    }
}
void squarePattern(int n){
    square(n);
    cout<<endl;
    number(n);
    cout<<endl;
    charac(n);
    cout<<endl;
    numpatt(n);
    cout<<endl;
    hallowsq(n);
    cout<<endl;
    principaldiagonal(n);
    cout<<endl;
    reverseprincipaldiagonal(n);
    cout<<endl;
    crisscrossprincipaldiagonal(n);
    cout<<endl;
}
void trianglePattern(int n){
    traingle(n);
    cout<<endl;
    numtraingle(n);
    cout<<endl;
    charactertriangle(n);
    cout<<endl;
    hallotraingle(n);
    cout<<endl;
    counttriangle(n);
    cout<<endl;
    Charcounttriangle(n);
    cout<<endl;
    reverseTriangle(n);
    cout<<endl;
    invertedTriangle(n);
    cout<<endl;
    hallowreverseTriangle(n);
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    

    // squarePattern(n);
    trianglePattern(n);

}