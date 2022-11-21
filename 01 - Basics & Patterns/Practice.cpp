#include <iostream>
using namespace std;

int main(){

    cout << "ready" <<endl;

    int n;
    cin >> n;

    int row  = 1;
    while (row <= n)
    {

        int col = row - 1;
        while (col)
        {
            cout << " ";
            col--; 
        }

        int value = n - row + 1;
        while (value)
        {
            cout << "*";
            value--;
        }
        

        cout << endl;
        row++;
    }
}