#include <iostream>

using namespace std;

int main()
{
    // Main for loop
    for(int i = 1; i <= 100000; i++){
        // Is prime
        bool prime = 1;
        // Try every number less than i
        for(int factor = 2; factor < i; factor++){
            if(i%factor == 0){
                prime = 0;
                break;
            }
        }
        if(prime){
            cout << i << "\n";
        }
    }
}
