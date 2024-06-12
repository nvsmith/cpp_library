#include <iostream>
using std::cin;
using std::cout;

/**
 * Prompts the user to enter a number between 1-26, converts it to a corresponding
 * uppercase letter, and prints the result.
 *
 * @return int The exit code of the program.
 *
 * @throws None
 */

int main() {


    // Prompt the user for a number between 1-26
    cout << "Enter a number between 1-26: ";
    int number;
    cin >> number;
    // Convert number to corresponding capital letter
    char outputCharacter;
    outputCharacter = number + 'A' - 1;
    // Print the corresponding letter
    cout << "Corresponding letter: " << outputCharacter << "\n";
    

    


}