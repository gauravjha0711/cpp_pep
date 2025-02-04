#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    cout<<"Printing the array elements: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printArray(arr, n);
}

//in call by value method the value from main to the function is passed and the changes made in the function are not reflected in the main function. but in call by reference the address of the variable is passed and the changes made in the function are reflected in the main function. 
//Array is pass always call by referene.
