#include<iostream>
using namespace std;

int main(){

    cout << "ready" << endl;

    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            // 1st L-R
            // cout << j;

            // ********* IMP *************
            // 2nd R-L
            // ********** n - j + 1 
            cout << n - j + 1;   
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    
}