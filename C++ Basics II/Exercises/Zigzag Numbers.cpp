#include <iostream>

using namespace std;
/*
  This is exercise 1
*/
int main(){

    int arr[100];
    for(int i = 0; i < 100; i++){
        arr[i] = i+1;
    }
    // Fill up array from 1 - 100 but print them in a certain order
    for(int i = 0; i < 50; i++){
        cout << arr[i] << " " << arr[100-1-i] << " ";
    }
    // or
    // If i is even, fill array from the low end, if odd, fill from the high end
    for(int i = 0, lo = 1, hi = 100; i < 100; i++){
        if(i%2==0){
            arr[i] = lo++;
        } else {
            arr[i] = hi--;
        }
    }
    // or
    // Same idea as above, but increments twice and we don't keep tract of parity (odd or even)
    for(int i = 0, j = 1, k = 100; i < 100; i+=2){
        arr[i] = j++;
        arr[i+1] = k--;
    }

    // Same idea as above
    int c = 0, a = 1, b = 100;

    while(c < 100){
        arr[c] = a;
        c++;
        a++;
        arr[c] = b;
        c++;
        b--;
    }
    for(int i = 0; i < 100; i++)
    {
        cout << arr[i] << " ";
    }
}
