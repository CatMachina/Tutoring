#include <iostream>

using namespace std;
/*
    This is homework 1
*/

int main()
{
    int i;
    // Testing all numbers from 1 - 10000
    for(i = 1; i <= 10000; i++){
        int x = i, cnt = 0;
        bool terminates = 1;
        // Main loop, will only terminate after reaching the end of the sequence
        while(x > 1){
            // Divide by 2 if even, else multiply by 3 and add 1
            if(x%2==0){
                x/=2;
            } else {
                x=x*3+1;
            }
            // Cnt is just a variable to verify that the sequence will EVENTUALLY terminate
            cnt++;
            if(cnt>1000000){
                terminates = 0;
                break;
            }
        }
        // Terminate if not true
        if(!terminates){
            cout << "Not true\n";
            break;
        }
    }
    // Checking if all the numbers are true
    /*
    Note that i will become 10001 if this is the case, since the loop continues
    until i <= 10000 is not satisfied
    */
    if(i==10001){
        cout << "True\n";
    }
}
