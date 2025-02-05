// #include <iostream>
// using namespace std;
// void swap3(int *x, int *y) //call by reference
// {
//     int temp =*x;
//     *x=*y;
//     *y=temp;
// }
// void display(int *B,int n)
// {
//     for (int i=0;i<n;i++)
//     {   cout<<*(B+i)<<" "; // array a is accessed by B
//     }
// }
// int main()
// {   int A[10],n,max,min;
//     n=5;
//     //int *B; //int pointer
//     //B=A; //assigning the base address of array a to b
//     max=min=0;
//     for (int i=0;i<n;i++)
//     {   cin>>*(A+i);
//         if ((A+i)>(A+max))
//             max=i;

//         if ((A+min)>(A+i))
//             min=i;
//     }
//     swap3((A+min),(A+max));

//     display(A,n);
//     cout << "Hello world!" << endl;
//     return 0;
// }









// #include <iostream>
// using namespace std;
// void swap3(int *x, int *y) //call by reference
// {
//     int temp =*x;
//     *x=*y;
//     *y=temp;
// }
// int main()
// {   int A[10],n,max,min;
//     n=5;
//     int *B; //int pointer
//     B=A; //assigning the base address of array a to b
//     max=min=0;
//     for (int i=0;i<n;i++)
//     {   cin>>A[i];
//         if (A[i]>A[max])
//             max=i;

//         if (A[min]>A[i])
//             min=i;
//     }
//     swap3(&A[min],&A[max]);

//     for (int i=0;i<n;i++)
//     {   cout<<B[i]<<" "; // array a is accessed by B
//     }
//     cout << "Hello world!" << endl;
//     return 0;
// }






#include <iostream>
using namespace std;
void swap3(int *x, int *y) //call by reference
{
    int temp =*x;
    *x=*y;
    *y=temp;
}
int main()
{   int A[10],n,max,min;
    n=5;

    max=min=0;
    for (int i=0;i<n;i++)
    {   cin>>A[i];
        if (A[i]>A[max])
            max=i;

        if (A[min]>A[i])
            min=i;
    }
    swap3(&A[min],&A[max]);
    for (int i=0;i<n;i++)
    {   cout<<A[i]<<" ";
    }
    cout << "Hello world!" << endl;
    return 0;
}