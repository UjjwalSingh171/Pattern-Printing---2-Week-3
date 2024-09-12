// Print the following pattern
// Input : n = 5
// Output:
// *                      *
//   *                 *
//      *           *
//         *     *
//            *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin >> n;

    for(int i = 1 ; i<=n ; i++)
    {
        for(int j = 1 ; j<=2*n-1 ; j++)
        {
            if(i==j or i+j==2*n)
            {
                cout<<"* ";
            }
            else 
            cout<<"  ";
        }
        cout<<endl;
    }

}























// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;

//     for(int i = 1 ; i<=n ; i++)
//     {
//         for(int j = 1 ; j<=2*n-1 ; j++)
//         {
//             if(i==j)
//             {
//                 cout<<"*  ";
//             }
//             else if((i+j)==(2*n))
//             {
//                 cout<<"*  ";
//             }
//             else
//             {
//                 cout<<"   ";
//             }
//         }
//         cout<<endl;
//     }
// }

