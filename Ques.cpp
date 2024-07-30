#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;


char firstNonRepeatingCharacter(const string& str) {

    unordered_map<char, int> frequency;


    for (char ch : str) {
        frequency[ch]++;
    }


    for (char ch : str) {
        if (frequency[ch] == 1) {
            return ch;
        }
    }


    return '\0';
}

int main() {
    string input;

   cout << "Enter a string: ";
   getline(cin, input);

    char result = firstNonRepeatingCharacter(input);

    if (result != '\0') {
       cout << "The first non-repeating character is: " << result << endl;
    } else {
       cout << "There is no non-repeating character in the string." << endl;
    }

    return 0;
}

