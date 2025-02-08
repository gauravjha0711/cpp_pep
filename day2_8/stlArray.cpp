// #include <iostream>
// #include <array>
// using namespace std;
// #define SIZE 5
// int main()
// {
//     array<int,SIZE> arr; //equivalent to int arr[10];

//     for (auto &i:arr)
//         cin>>i;
//     for (auto &i:arr)
//         cout<<i<<endl;

//     int Arr[SIZE];//traditional array
//         for (auto &i:Arr)
//         cin>>i;
//     for (auto &i:Arr)
//         cout<<i<<endl;

//     for(int i=0;i<SIZE;i++)
//     {
//         cout<<"STL ARRAY-"<<arr[i]<<"  INT TRADITIONAL ARRAY-"<<Arr[i]<<endl;
//     }

//         cout << "Hello world!" << endl;
//     return 0;
// }






// #include <iostream>
// #include <array>
// using namespace std;
// #define SIZE 5

// void func1(int (&Arr)[SIZE]) //CALL BY REFERENCE ALWAYS
// {
//     for (auto &i:Arr)
//         i=i*10;
// }

// void func2(array<int,SIZE> Arr) //CALL BY VALUE
// {
//     for (auto &i:Arr)
//         i=i*100;
// }

// void func3(array<int,SIZE> &Arr) //CALL BY REFERENCE
// {
//     for (auto &i:Arr)
//         i=i*100;
// }
// int main()
// {
//     array<int,SIZE> arr; //equivalent to int arr[10];
//     cout<<endl<<"ENTER STL ARRAY"<<endl;
//     for (auto &i:arr)
//         cin>>i;
//         cout<<endl<<"STL ARRAY"<<endl;
//     for (auto &i:arr)
//         cout<<i<<endl;
//     cout<<endl<<"ENTER TRADITIONAL ARRAY"<<endl;
//     int Arr[SIZE];//traditional array
//         for (auto &i:Arr)
//         cin>>i;
//         cout<<endl<<"TRADITIONAL ARRAY"<<endl;
//     for (auto &i:Arr)
//         cout<<i<<endl;
//     func1(Arr);//TRADITIONAL CALL BY REFERENCE ALWAYS
//     func2(arr);//STL ARRAY CALL BY VALUE
//     for(int i=0;i<SIZE;i++)
//     {
//         cout<<"STL ARRAY-"<<arr[i]<<"  INT TRADITIONAL ARRAY-"<<Arr[i]<<endl;
//     }
//     func3(arr);//STL ARRAY CALL BE REFERENCE
//     for(int i=0;i<SIZE;i++)
//     {
//         cout<<"STL ARRAY-"<<arr[i]<<"  INT TRADITIONAL ARRAY-"<<Arr[i]<<endl;
//     }


//         cout << "Hello world!" << endl;
//     return 0;
// }




// #include <iostream>
// #define SIZE 10
// #include <array>
// using namespace std;

// int main()
// {
//     array<int,SIZE> arr; //equivalent to int arr[10];
//     cout<<endl<<"ENTER STL ARRAY"<<endl;
//     for (auto &i:arr)
//         cin>>i;
//         cout<<endl<<"STL ARRAY"<<endl;
//     for (auto &i:arr)
//         cout<<i<<endl;
//     cout<<"FIRST INDEX - 0 FRONT()="<<arr.front()<<endl;
//     cout<<"LAST INDEX - 9 SIZE-1 BACK()="<<arr.back()<<endl;

//     cout<<"FIRST INDEX - 0="<<arr[0]<<endl;
//     cout<<"LAST INDEX - 9 SIZE-1 ="<<arr[SIZE-1]<<endl;

// }





// #include <iostream>
// #define SIZE 10
// #include <array>
// using namespace std;
// int main()
// {
//     array<int,SIZE> arr; //equivalent to int arr[10];
//     cout<<endl<<"ENTER STL ARRAY"<<endl;
//     for (auto &i:arr)
//         cin>>i;

//     cout<<"FIRST INDEX - 0 FRONT()="<<arr.front()<<endl;
//     cout<<"LAST INDEX - 9 SIZE-1 BACK()="<<arr.back()<<endl;

//     cout<<"FIRST INDEX - 0="<<arr[0]<<endl;
//     cout<<"LAST INDEX - 9 SIZE-1 ="<<arr[SIZE-1]<<endl;

//     int X=999;
//     arr.fill(X);//ENTIRE ARRAY FILLED WITH X
//     cout<<endl<<"STL ARRAY"<<endl;
//     for (auto &i:arr)
//         cout<<i<<endl;

// }





// #include <iostream>
// #define SIZE 10
// #include <array>
// using namespace std;
// int main()
// {
//     array<int,SIZE> arr; //equivalent to int arr[10];
//     cout<<endl<<"ENTER STL ARRAY"<<endl;
//     for (auto &i:arr)
//         cin>>i;

//     cout<<"FIRST INDEX - 0 FRONT()="<<arr.front()<<endl;
//     cout<<"LAST INDEX - 9 SIZE-1 BACK()="<<arr.back()<<endl;

//     cout<<"FIRST INDEX - 0="<<arr[0]<<endl;
//     cout<<"LAST INDEX - 9 SIZE-1 ="<<arr[SIZE-1]<<endl;

//     int X=999;
//     arr.fill(X);//ENTIRE ARRAY FILLED WITH X
//     cout<<endl<<"STL ARRAY"<<endl;
//     for (auto &i:arr)
//         cout<<i<<endl;
//     cout<<"\nSIZE OF ARRAY---"<<arr.size();
// }




// #include <iostream>
// #define SIZE 10
// #include <array>
// using namespace std;
// int main()
// {
//     array<int,SIZE> arr; //equivalent to int arr[10];
//     cout<<endl<<"ENTER STL ARRAY"<<endl;
//     for (auto &i:arr)
//         cin>>i;

//     cout<<"FIRST INDEX - 0 FRONT()="<<arr.front()<<endl;
//     cout<<"LAST INDEX - 9 SIZE-1 BACK()="<<arr.back()<<endl;

//     cout<<"FIRST INDEX - 0="<<arr[0]<<endl;
//     cout<<"LAST INDEX - 9 SIZE-1 ="<<arr[SIZE-1]<<endl;

//     int X=999;
//     arr.fill(X);//ENTIRE ARRAY FILLED WITH X
//     cout<<endl<<"STL ARRAY"<<endl;
//     for (auto &i:arr)
//         cout<<i<<endl;
//     cout<<"\nSIZE OF ARRAY---"<<arr.size();
// }






