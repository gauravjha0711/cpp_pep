#include<iostream>
using namespace std;
void length(string &s1){
    // cout<<"Length of the string is: "<<s1.length()<<endl;
    int len=0;
    while(s1[len]){
        len++;
    }
    cout<<"Length of the string is: "<<len<<endl;
}
void stringFunction(string &str, string &s1){
    cout<<"Length: "<<str.length()<<endl;
    cout<<"Size: "<<str.size()<<endl;
    cout<<
}
void smallestCharacter(char ch[]){
    char min = ch[0];
    for(int i=0; ch[i]!='\0'; i++){
        if(ch[i]<min){
            min = ch[i];
        }
    }
    cout<<"Smallest character is: "<<min<<endl;
}
void largestCharacter(char ch[]){
    char max = ch[0];
    for(int i=0; ch[i]!='\0'; i++){
        if(ch[i]>max){
            max = ch[i];
        }
    }
    cout<<"Largest character is: "<<max<<endl;
}
void smallestArray(int arr[], int n){
    int min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"Smallest element is: "<<min<<endl;
}
void largestArray(int arr[], int n){
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"Largest element is: "<<max<<endl;
}
void findCharacter(char ch[], char key){
    int i;
    for(i=0; ch[i]!='\0'; i++){
        if(ch[i]==key){
            break;
        }
    }
    if(ch[i]=='\0'){
        cout<<"Character not found!"<<endl;
    }else{
        cout<<"Character found at index: "<<i<<endl;
    }
}
void countCharacter(char ch[], char key){
    int count=0;
    for(int i=0; ch[i]!='\0'; i++){
        if(ch[i]==key){
            count++;
        }
    }
    cout<<"Character = "<<count<<endl;
}
void findNumber(int arr[], int n, int key){
    int i;
    for(i=0; i<n; i++){
        if(arr[i]==key){
            break;
        }
    }
    if(i==n){
        cout<<"Number not found"<<endl;
    }else{
        cout<<"index= "<<i<<endl;
    }
}
void countNumber(int arr[], int n, int key){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            count++;
        }
    }
    cout<<"Number = "<<count<<endl;
}
void inputString(string &s1){
    cout<<"Enter a string: ";
    getline(cin, s1);
    // length(s1);
    stringFunction(s1);
}
void inputChar(char ch[]){
    cout<<"Enter a string: ";
    cin.getline(ch, 30);
    cout<<"You entered: "<<ch<<endl;
    // smallestCharacter(ch);
    // largestCharacter(ch);
    char key;
    cout<<"Enter a character to find: ";
    cin>>key;
    findCharacter(ch, key);
    countCharacter(ch, key);
}
void inputArray(int arr[]){
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // smallestArray(arr, n);
    // largestArray(arr, n);
    int key;
    cout<<"Enter a number to find: ";
    cin>>key;
    findNumber(arr, n, key);
    countNumber(arr, n, key);
    
}
int main(){
    string s1;
    inputString(s1);

    char ch[30];
    // inputChar(ch);

    int arr[50];
    // inputArray(arr);

}