#include<iostream>
using namespace std;

int main(){

    int cases,a,b;
    cin>>cases;

    for (int i = 0; i < cases; ++i) {
        int x, y;
        cin>>x>>y;
        if (x % y == 0) {
            cout << "0" << endl;
        } else {
            cout << y - (x % y) << endl;
        }
    }
    return 0;
}