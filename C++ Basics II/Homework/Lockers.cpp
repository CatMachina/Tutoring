#include <iostream>

using namespace std;
/*
  This is homework 1
*/
bool arr[101];

int main(){

    for(int add = 1; add <= 100; add++){
        for(int i = add; i <= 100; i+=add){
            arr[i] = !arr[i];
        }
    }
    for(int i = 1; i <= 100; i++){
        if(arr[i]){
            cout << i << " ";
        }
    }
}
