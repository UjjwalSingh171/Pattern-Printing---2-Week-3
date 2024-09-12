// Print the following pattern
// Input : n = 4
// Output :

// *     *
// **   **
// *** ***
// *******
// *******
// *** ***
// **   **
// *     *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n; 
    for (int i = 1; i <= n-1; i++) {
        // Print left stars
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        // Print spaces
        for (int j = 1; j <= 2 * (n - i) - 1; j++) {
            std::cout << " ";
        }
        // Print right stars
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for(int i = 1 ; i<=2*n-1 ; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(int i = 1 ; i<=2*n-1 ; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for (int i = 1; i <= n-1; i++) {
        // Print left stars
        for (int j = n-i; j > 0; j--) {
            std::cout << "*";
        }
        // Print spaces
        for (int j = 1; j <= 2*i-1 ; j++) {
            std::cout << " ";
        }
        // Print right stars
        for (int j = n-i; j > 0; j--) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}