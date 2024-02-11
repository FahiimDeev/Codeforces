#include<iostream>
using namespace std;

int main(){

    int cases;
    cin>>cases;

    int matrix[cases][3];

    for (int i = 0; i < cases; i++){
        for (int j = 0; j < 3; j++){
            cin>>matrix[i][j];
        }
    }

    for (int i = 0; i < cases; i++){
        for (int j = 0; j < 3; j++){
            cout<<matrix[i][j]<<endl;
        }
    }

    

    return 0;
}