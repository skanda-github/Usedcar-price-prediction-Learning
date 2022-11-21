#include<iostream>
using namespace std;

int main(){

    cout << "ready" << endl;

    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        // 1st triangle

        // int values = n - row + 1;
        // int print_col = 1;
        // while (values){
        //     cout << print_col++;  
        //     values--;
        // }

        int start = row;
        int col4 = 1;
        while (start <= n)
        {
            cout << col4++; 
            start++;
        }
        

        // 2nd triangle
        // int col = row - 1;
        // while (col)
        // {
        //     cout << "*";
        //     col--;
        // }

        int col = 0;
        while (col < row - 1)
        {            
            cout << "*";
            col++;
        }


        // 3rd triangle
        // int col1 = row - 1;
        // while (col1)
        // {
        //     cout << "*";
        //     col1--;
        // }

        int col2 = 0;
        while (col2 < row - 1)
        {
            cout << "*";
            col2++;
        }

        // 4th triangle
        // int values1 = n - row + 1;
        // while (values1){
        //     cout << values1--;
            
        // }

        int counter = row;
        while (counter <= n)
        {
            cout << n - counter + 1;
            counter++;
        }
        

        cout << endl;
        row = row + 1;
    }
    
}