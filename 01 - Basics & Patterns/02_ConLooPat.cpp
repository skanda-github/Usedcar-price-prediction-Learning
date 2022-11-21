#include<iostream>
using namespace std;

int main(){

    // int a;
    // cin >> a;

    // cout << "Value of a is " << a << endl;

    // if (a > 0){
    //     cout << "a is positive" << endl;
    // }
    // else{
    //     cout << "a is non positive" << endl;
    // }

    // int n;
    // n = cin.get();

    // cout << "Value given is " << n << endl;

    // int a,b;
    // cout << "Enter the value of a" << endl;
    // cin >> a;
    // cout << "Enter the value of b" << endl;
    // cin >> b;

    // if (a > b){
    //     cout << "a is greater" << endl;
    // }
    // if (b > a){
    //     cout << "b is greater" << endl;
    // }

    // int a;
    // cout << "Enter a number" << endl;
    // cin >> a;

    // if (a > 0)
    // {
    //     cout << "a is +ve" << endl;
    // }
    // else if (a < 0)
    // {
    //     cout << "a is -ve" << endl;
    // }
    // else
    // {
    //     cout << "a is zero" << endl;
    // }

    char ch;
    cout << "Enter a character" << endl;
    cin >> ch;

    if (ch >= 97 && ch <= 122)
    {
        cout << "This is lowercase" << endl;
    }
    else if (ch >= 65 && ch <= 90)
    {
        cout << "This is uppercase" << endl;
    }
    else if (ch >= 48 && ch <= 57)
    {
        cout << "This is numeric" << endl;
    }
    else
    {
        cout << "Other character" << endl;   
    }
    
}