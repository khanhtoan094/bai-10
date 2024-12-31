// bai 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

    /*
    int so;
    cout << "nhap so";
    cin >> so;


    cout << "in tu 1 toi 10 su dung vong lap for\n";
    for(int i = 1; i <= 10; i++){
       // cout << i << "\n":
        cout << i << " x " << j << " = " << so *i << "\n";
    }
    for (int i = 2; i <= 9; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << i*j << "\n";
        }
    */


    for (int j = 1; j <= 10; j++) {
        for (int i = 2; i <= 9; i++) {
            cout << i << " x " << j << " = " << i * j << "\t";
        }
        cout << endl;
    }
    cout << "in tu 1 toi 10 su dung vong lap while\n";
    cout << "in tu 1 toi 10 su dung vong lap do while\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
