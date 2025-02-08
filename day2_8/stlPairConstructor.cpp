// #include <iostream>


// using namespace std;

// int main()
// {   pair<int,int> p(1,2);//constructor method
//     cout<<p.first<<" "<<p.second;
//     cout << "\nHello world!" << endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main()
// {   pair<int,int> p(55,55);//constructor method
//     cout<<p.first<<" "<<p.second<<endl;
//     p={56,22}; //manually
//     cout<<p.first<<" "<<p.second;
//     cout<<"\nEnyter the values of pair ";
//     cin>>p.first>>p.second; //input from user
//     cout<<p.first<<" "<<p.second;
//     cout << "\nHello world!" << endl;
//     return 0;
// }




// #include<iostream>
// using namespace std;
// int main()
// {   pair<int,int> p(1,2);//constructor method
//     cout<<p.first<<" "<<p.second;
//     int first,second; //2 separate variables
//     cout<<"\nEnyter the values of pair ";
//     cin>>first>>second; //input from user
//     cout<<first<<" "<<second;
//     p=make_pair(first,second); //manually making them pair using inbuilt function
//     cout<<p.first<<" "<<p.second;
//     cout << "\nHello world!" << endl;
//     return 0;
// }




// #include<iostream>
// using namespace std;
// void func(pair<int,int> p)
// {
//     cout<<"IN FUNCTION"<<endl;
//     cout<<endl<<p.first<<" "<<p.second<<endl;
//     p.first=50;
//     p.second=51;
//     cout<<endl<<p.first<<" "<<p.second<<endl;
//     cout<<"BYE FUNCTION"<<endl;
// }
// int main()
// {   pair<int,int> p(1,2);//constructor method
//     cout<<p.first<<" "<<p.second;
//     int first,second; //2 separate variables
//     cout<<"\n Enter the values of pair ";
//     cin>>first>>second; //input from user
//     cout<<first<<" "<<second<<endl;
//     p=make_pair(first,second); //manually making them pair using inbuilt function
//     cout<<p.first<<" "<<p.second<<endl;
//     cout << "\nPair FUnction Called" << endl;
//     func(p);
//     cout<<endl<<"IN MAIN AFTER CALL"<<endl;
//     cout<<p.first<<" "<<p.second;
//     return 0;
// }







#include<iostream>
using namespace std;
void func1(pair<int,int> p)
{
    cout<<"IN FUNCTION-VALUE"<<endl;
    cout<<endl<<p.first<<" "<<p.second<<endl;
    p.first=50;
    p.second=51;
    cout<<endl<<p.first<<" "<<p.second<<endl;
    cout<<"BYE FUNCTION"<<endl;
}
void func2(pair<int,int> &p)
{
    cout<<"IN FUNCTION-REFERENCE"<<endl;
    cout<<endl<<p.first<<" "<<p.second<<endl;
    p.first=50;
    p.second=51;
    cout<<endl<<p.first<<" "<<p.second<<endl;
    cout<<"BYE FUNCTION"<<endl;
}
int main()
{   pair<int,int> p(1,2);//constructor method
    cout<<p.first<<" "<<p.second;
    int first,second; //2 separate variables
    cout<<"\n Enter the values of pair ";
    cin>>first>>second; //input from user
    cout<<first<<" "<<second<<endl;
    p=make_pair(first,second); //manually making them pair using inbuilt function
    cout<<p.first<<" "<<p.second<<endl;
    cout << "\nPair FUnction Called" << endl;
    func1(p);
    cout<<endl<<"IN MAIN AFTER CALL"<<endl;
    cout<<p.first<<" "<<p.second;
    func2(p);
    cout<<endl<<"IN MAIN AFTER CALL"<<endl;
    cout<<p.first<<" "<<p.second;
    return 0;
}