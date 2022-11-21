#include<iostream>
using namespace std;

int main(){

    cout << "ready" << endl;

    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c){
        if (b + c > a)
        {
            if (c + a > b){
                cout << "Valid triangle" << endl;
            }
            else
            {
                cout << "Not" << endl;
            }
            
        }
        else
            {
                cout << "Not" << endl;
            }
        
    }
    else
    {
        cout << "Not" << endl;
    }
}