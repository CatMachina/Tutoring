#include <iostream>

using namespace std;
/*
  This is exercise 2
*/
int main(){
    // Read in a string
    string s;
    cin >> s;
    // Take the length of the string
    int length = s.length();
    bool palindrome = 1;
    // Loop through each character, but only the first half, but how do we know where to stop?
    /*
        Note that there are two cases, the length is odd or even
        Odd case:
        If the length is odd, there is an extra character in the middle, which can be either checked, or not
        Even case:
        There is no middle character and we just check the first half against the second half
    */
    for(int i = 0; i < length/2; i++){
        // Extra -1 since 0 indexed array
        if(s[i]!=s[length-i-1]){
            palindrome = 0;
            break;
        }
    }
    if(palindrome){
        cout << "Palindrome\n";
    } else {
        cout << "Not Palindrome\n";
    }
}
