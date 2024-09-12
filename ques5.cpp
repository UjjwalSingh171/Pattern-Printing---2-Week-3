// Print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int x = 1 ; x<=2*n-1 ; x++)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    for(int i = 1 ; i<=n-1 ; i++ )
    {
        int a = 1;
        for(int j = n-i ; j>0; j--)
        {    
            cout<<a<<" ";
            a++;
        }

        for(int k = 1 ; k<=2*i-1 ; k++)
        {
            cout<<"  ";
        }

        int b=n-i;
        for(int l = n-i ; l>0; l--)
        {    
            cout<<b<<" ";
            b--;
        }



    cout<<endl;
    }
    
}