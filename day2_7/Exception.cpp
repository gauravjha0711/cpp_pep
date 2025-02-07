// #include <iostream>
// using namespace std;
// #include<vector>
// #include<exception>
// int main()
// {
//     long long int a,b,c;
//     cin>>a>>b;
//     vector<int> v;
//     try
//     {
//         if (b==0)
//             throw 0;//0=int
//         c=a/b;
//         //cout<<v.at(5);
//         int* bigArray = new int[a*b]; // Try allocating excessive memory
//         delete[] bigArray;


//     }
//     //catch (const int &e)
//     //{
//       //  cout << "Say Hi to your 1st Exceotion!" << endl;

//     //}
//     //catch (const exception &e)
//     //{
//      //   cout<<"standards erororor "<<e.what();
//     //}
//     catch (...)
//     {
//         cout<<"ERRRRRRROOOOORRRRRRRRRR";
//     }
//     cout<<"0 ke baad bhi main chal gya";
//     return 0;
// }




#include <iostream>
#include <string>

void generateException(int type) {
    if (type == 1) throw 404;                   // Integer Exception
    if (type == 2) throw 'E';                   // Character Exception
    if (type == 3) throw 3.14;                  // Double Exception
    if (type == 4) throw 2.718f;                // Float Exception
    if (type == 5) throw std::string("Error!"); // String Exception

    throw "Unknown Exception"; // Default case (C-style string)
}

int main() {
    for (int i = 1; i <= 6; ++i) { // Test different exceptions
        try {
            std::cout << "Trying case " << i << "...\n";
            generateException(i);
        }
        catch (const int &e) {  // Catching integer by const reference
            std::cout << "Caught an integer: " << e << std::endl;
        }
        catch (const char &e) {  // Catching char by const reference
            std::cout << "Caught a character: " << e << std::endl;
        }
        catch (const double &e) {  // Catching double by const reference
            std::cout << "Caught a double: " << e << std::endl;
        }
        catch (const float &e) {  // Catching float by const reference
            std::cout << "Caught a float: " << e << std::endl;
        }
        catch (const std::string &e) {  // Catching string by const reference
            std::cout << "Caught a string: " << e << std::endl;
        }
        catch (...) { // Catch-all block for unknown exceptions
            std::cout << "Caught an unknown exception!\n";
        }
    }
    return 0;
}