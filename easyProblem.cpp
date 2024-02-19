#include<iostream>
using namespace std;

int main(){

    int cases;
    cin>>cases;

    int storage[cases];

    for (int i=0;i<cases;i++){
        cin>>storage[i];
    }

    bool hard = false;

    for (int i=0;i<cases;i++){
        if ((storage[i] == 1)){
            hard = true;
            break;
        }
    }

    if (hard){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }


    return 0;
}