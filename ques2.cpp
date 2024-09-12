// Print the following pattern
// Input: n = 4
// Output:
//       A
//     A B C
//   A B C D E
// A B C D E F G
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;

    for(int i = 1 ; i<=n ; i++)
    {
        for(int j = n-i ; j>0 ; j--)
        {
            cout<<"  ";
        }

        for(int k = 1 ; k<=2*i-1 ; k++)
        {
            cout<<(char)(k+64)<<" ";
        }

    cout<<endl;
    }
}