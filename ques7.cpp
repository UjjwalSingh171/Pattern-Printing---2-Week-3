// Print the following pattern
// Sample Input : m = 4
// Sample Output :
//             *
//         *       *
//     *               *
// *                       *
//     *               *
//         *       *
//             *
 

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
     
    for(int i = 1; i <= n; i++) // Loop through rows
    {
        // First diagonal
        for(int j = 1; j <= n; j++) // Loop through columns
        {
            if(i + j == n + 1) // Condition for first diagonal
            {
                cout << "* ";
            }
            else
            {
                cout << "  "; // Print space if no star
            }
        }

        // Second diagonal
        for(int j = 1; j <= n - 1; j++) // Loop for second half (without the first column)
        {
            if(j == i - 1) // Condition for second diagonal
            {
                cout << "* ";
            }
            else
            {
                cout << "  "; // Print space if no star
            }
        }

        cout << endl; // Move to the next line after each row
    }

    for(int i = 1 ; i<=n-1 ; i++)
    {
        for(int j = 1 ; j<=n ; j++)
        {
            if(j==i+1)
            {
                cout<< "* ";
            }
            else
            {
                cout << "  "; // Print space if no star
            }
        }
        for(int j = 1 ; j<=n ; j++)
        {
            if(i>n-2)
            {
                break;
            }
            else if(i+j==n-1)
            {
                cout<< "* ";
            }
            else
            {
                cout<< "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
 