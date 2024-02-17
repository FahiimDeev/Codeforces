#include <iostream>
using namespace std;

int main(){

    int n, h, count=0;
    cin >> n >> h;

    int person[n];

    for (int i = 0; i < n; i++){
        cin >> person[i];
    }

    for (int i = 0; i < n; i++){
        if (person[i]>h){
            count+=2;
        }
        else if(person[i]<=h){
            count++;
        }
    }

    cout<<count;

    return 0;
}