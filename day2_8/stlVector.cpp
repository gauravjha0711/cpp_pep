// #include <iostream>
// #include <vector>
// #define DT int
// #define SIZE 10
// using namespace std;
// int main()
// {
//     vector<DT> V;
//     cout<<"\n STARTING MAIN\n";
//     cout<<endl<<"SIZE--"<<V.size()<<"   Capacity--"<<V.capacity();
//     for (int i=1;i<=SIZE;i++)
//     {
//             cout<<"\nV.push_back(10);\n";
//             V.push_back(10);
//             cout<<endl<<"SIZE--"<<V.size()<<"   Capacity--"<<V.capacity();

//     }
//     cout << "\nONLINE CLASS IS BEST!" << endl;
//     return 0;
// }




// #include <iostream>
// #include <vector>
// #define DT pair<int,int>
// #define SIZE 10
// #define VALUE {10,10}
// using namespace std;

// int main()
// {
//     vector<DT> V; //vector(pair<int,int>)
//     cout<<"\n STARTING MAIN\n";
//     cout<<endl<<"SIZE--"<<V.size()<<"   Capacity--"<<V.capacity();
//     for (int i=1;i<=SIZE;i++)
//     {
//             cout<<"\nV.push_back();\n";
//             V.push_back(VALUE);
//             cout<<endl<<"SIZE--"<<V.size()<<"   Capacity--"<<V.capacity();

//     }

//     for (auto &i : V)
//         cout<<i.first<<"   "<<i.second<<endl;
//     cout << "\nONLINE CLASS IS BEST!" << endl;
//     return 0;
// }





// #include <iostream>
// #include <vector>
// #define DT pair<int,int>
// #define SIZE 10
// #define VALUE {10,10}
// using namespace std;
// int main()
// {
//     vector<DT> V; //vector(pair<int,int>)
//     cout<<"\n STARTING MAIN\n";
//     cout<<endl<<"SIZE--"<<V.size()<<"   Capacity--"<<V.capacity();
//     for (int i=1;i<=SIZE;i++)
//     {
//             cout<<"\nV.push_back();\n";
//             V.push_back(VALUE);
//             cout<<endl<<"SIZE--"<<V.size()<<"   Capacity--"<<V.capacity();

//     }

//     for (auto &i : V)
//         cout<<i.first<<"   "<<i.second<<endl;
//     cout << "\nONLINE CLASS IS BEST!" << endl;
//     return 0;
// }





// #include <iostream>
// #include <array>
// #define DT pair<int,int>
// #define SIZE 10
// #define VALUE {10,10}
// using namespace std;
// int main()
// {
//     array<DT,SIZE> V; //array(pair<int,int>)
//     cout<<"\n STARTING MAIN\n";
//     int k=17;
//     for (auto &i : V)
//     {
//         i.first=k+1;
//         i.second=k+2;
//         k=k+5;
//     }

//     for (auto &i : V)
//         cout<<i.first<<"   "<<i.second<<endl;
//     cout << "\nONLINE CLASS IS BEST!" << endl;
//     return 0;
// }





// #include <iostream>
// #include <vector>
// #define DT int
// #define SIZE 10
// using namespace std;
// pair<int,int> func(vector<int> V)
// {
//     pair<int,int> max_min;
//     max_min={V.at(0),V.at(0)};

//     for(int i=0;i<SIZE;i++){
//         if (V.at(i)>max_min.first)
//             max_min.first=V.at(i);
//         if (V.at(i)<max_min.second)
//             max_min.second=V.at(i);
//     }
//     return max_min;
// }
// int main()
// {
//     vector <DT> V;
//     int num;

//     for (int i=0;i<SIZE;i++)
//     {
//         cout<<endl<<"ENTER Value "<<i+1<<" -";
//         cin>>num;
//         V.push_back(num);
//     }

//     pair<int,int> max_min;

//     max_min=func(V);

//     cout<<"\nMAX & MIN of Vecor V--"<<max_min.first<<"&"<<max_min.second;
//     cout<<"\nMAX & MIN Differernec--"<<max_min.first-max_min.second;
//     cout<<"\nMAX & MIN SUM--"<<max_min.first+max_min.second;

//     cout << "Hello world!" << endl;
//     return 0;
// }




