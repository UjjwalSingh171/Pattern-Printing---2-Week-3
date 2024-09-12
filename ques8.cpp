// Print the following pattern
// Sample Input : n = 4
// Output :
//      1
//     2 2
//    3   3
//   4     4

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
                cout << i;
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
                cout << i;
            }
            else
            {
                cout << " "; // Print space if no star
            }
        }

        cout << endl; // Move to the next line after each row
    }
}