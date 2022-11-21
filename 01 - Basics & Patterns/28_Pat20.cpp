#include<iostream>
using namespace std;

int main(){

    cout << "ready" << endl;

    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        // Star printing
        // int star = n - row + 1;
        // while (star)
        // {
        //     cout << "*";
        //     star = star - 1;
        // }

        int value = row;
        while (value <= n)
        {
            cout << "*"; 
            value++;
        }
        

        
        cout << endl;
        row = row + 1;
    }
    
}