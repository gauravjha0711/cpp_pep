// #include <iostream>
// #define SIZE 10
// #include <array>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     array<int,SIZE> arr; //equivalent to int arr[10];
//     cout<<endl<<"ENTER STL ARRAY"<<endl;
//     for (auto &i:arr)
//         cin>>i;

//     cout<<endl<<"STORED STL ARRAY"<<endl;
//     for (auto &i:arr)
//         cout<<i<<"  ";

//     sort(arr.begin(),arr.end());

//     cout<<endl<<"\nSORTED STL ARRAY ASCENDING"<<endl;
//     for (auto &i:arr)
//         cout<<i<<"  ";

//     sort(arr.begin(),arr.end(),greater<int>());

//     cout<<endl<<"\nSORTED STL ARRAY DESCENDINGs"<<endl;
//     for (auto &i:arr)
//         cout<<i<<"  ";
// }






// #include <iostream>
// #define SIZE 5
// #define DT char
// #include <array>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     array<DT,SIZE> arr; //equivalent to int arr[10];
//     cout<<endl<<"ENTER STL ARRAY"<<endl;
//     for (auto &i:arr)
//         cin>>i;

//     cout<<endl<<"STORED STL ARRAY"<<endl;
//     for (auto &i:arr)
//         cout<<i<<"  ";

//     sort(arr.begin(),arr.end());

//     cout<<endl<<"\nSORTED STL ARRAY ASCENDING"<<endl;
//     for (auto &i:arr)
//         cout<<i<<"  ";

//     sort(arr.begin(),arr.end(),greater<DT>());

//     cout<<endl<<"\nSORTED STL ARRAY DESCENDINGs"<<endl;
//     for (auto &i:arr)
//         cout<<i<<"  ";
// }




// #include <iostream>
// #define SIZE 10
// #define DT char
// #include <array>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     array<DT,SIZE> arr; //equivalent to int arr[10];
//     cout<<endl<<"ENTER STL ARRAY"<<endl;
//     for (auto &i:arr)
//         cin>>i;

//     cout<<endl<<"ENTERED STL ARRAY"<<endl;
//     for (auto &i:arr)
//         cout<<i<<"  ";

//     sort(arr.begin(),(arr.begin()+SIZE/2));

//     cout<<endl<<"\nHALF SORTED STL ARRAY ASCENDING"<<endl;
//     for (auto &i:arr)
//         cout<<i<<"  ";

//     sort((arr.begin()+SIZE/2),arr.end(),greater<DT>());

//     cout<<endl<<"\nHALF SORTED STL ARRAY DESCENDINGs"<<endl;
//     for (auto &i:arr)
//         cout<<i<<"  ";
// }



