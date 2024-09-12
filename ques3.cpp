// Print the following pattern
// Input: n = 4
// Output:
//       A
//     B A B
//   C B A B C
// D C B A B C D
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int i = 1 ; i<=n ; i++)
    {
        for(int j = n-i ; j>0 ; j--)
        {
            cout<<"  ";
        }
        
        for(int l = 1 ; l<=i-1 ; l++)
        {
            cout<<(char)(i+65-l)<<" ";
        }

        for(int k = 1 ; k<=i ; k++)
        {
             
            cout<<(char)(k+64)<<" ";
             
        }

    cout<<endl;
    }
}