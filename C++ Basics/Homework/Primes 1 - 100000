#include <math.h>
#include <iostream>

using namespace std;
/*
  This is homework 2
*/
int main(){
    // Print something out first since the system could take a while before preceding
    cout << "Prime count: ";
    int number_of_primes = 0;
    for(int i = 2; i <= 100000; i++){
        bool prime = 1;
        // Check up to the square root of the number for quicker runtime
        for(int factor = 2; factor <= sqrt(i); factor++){
            if(i%factor==0){
                prime = 0;
                break;
            }
        }
        if(prime){
            number_of_primes++;
        }
    }
    cout << number_of_primes << "\n";
}
