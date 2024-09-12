// Input: n = 4
// Output:

// A B C D E F G
// A B C   E F G
// A B       F G
// A           G
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int x = 0 ; x<n*2-1 ; x++)
    {
        cout<<(char)(x+65)<<" ";
    }
    cout<<endl;

    for(int i = 1 ; i<=n-1 ; i++ )
    {
        int a = 1;
        for(int j = n-i ; j>0; j--)
        {    
            cout<<(char)(64+a)<<" ";
            a++;
        }

        for(int k = 1 ; k<=2*i-1 ; k++)
        {
            cout<<"  ";
        }

        int b=n+i;
        for(int l = n-i ; l>0; l--)
        {    
            cout<<(char)(64+b)<<" ";
            b++;
        }



    cout<<endl;
    }
    
}