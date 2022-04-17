#include <bits/stdc++.h>
using namespace std;
 
// Function to replace all occurrences
// of character c1 with character c2
void replaceCharacter(char input[],
                    char c1, char c2)
{
    // Base Case
    // If the string is empty
    if (input[0] == '\0') {
        return;
    }
 
    // If the character at starting
    // of the given string is equal
    // to c1, replace it with c2
    if (input[0] == c1) {
        input[0] = c2;
    }
 
    // Getting the answer from recursion
    // for the smaller problem
    return replaceCharacter(input + 1,
                            c1, c2);
}

int main(){

    int t;
    cin>>t;
    while(t--)
    {

    char input[100];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}
}