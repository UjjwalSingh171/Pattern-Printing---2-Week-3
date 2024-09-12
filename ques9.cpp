// Print the following pattern
// Sample Input : n = 5
// Output :

//      *
//     ***
//    * * *
//   *  *  *
//  *   *   *
// ***********
//  *   *   *
//   *  *  *
//    * * *
//     ***
//      *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
     
    for(int i = 1; i <= n; i++) // Loop through rows
    {
        cout<<" ";
        // First diagonal
        for(int j = 1; j <= n; j++) // Loop through columns
        {
            if(i + j == n + 1 or j==n) // Condition for first diagonal
            {
                cout << "*";
            }
            else
            {
                cout << " "; // Print space if no star
            }
        }

        // Second diagonal
        for(int j = 1; j <= n - 1; j++) // Loop for second half (without the first column)
        {
            if(j == i - 1) // Condition for second diagonal
            {
                cout << "*";
            }
            else
            {
                cout << " "; // Print space if no star
            }
        }

        cout << endl; // Move to the next line after each row
    }

    for(int i = 1 ; i<=2*n+1 ; i++)
    {
        cout<<"*";
    }
    cout<< endl;


    for(int i = 1 ; i<=n ; i++)
    {
        cout<<" ";
        for(int j = 1 ; j<=n ; j++)
        {
            if(j==i or j==n)
            {
                cout<< "*";
            }
            else
            {
                cout << " "; // Print space if no star
            }
        }
        for(int j = 1 ; j<=n ; j++)
        {
            if(j==n-i)
            {
                cout<< "*";
            }
            else
            {
                cout<< " ";
            }
        }
        cout << endl;
    }

    return 0;
}