#include <iostream>
using std::cin;
using std::cout;

/**
 * Reads an integer from the user and maps it to a corresponding symbol.
 *
 * @return void
 *
 * @throws None
 */

int main() {

    cout << "Enter a number between 1-8: ";
    int number;
    cin >> number;
    char outputCharacter;
    // Map then number to the indicated symbol
    switch (number)
    {
        case 1: outputCharacter = '!'; break;
        case 2: outputCharacter = '?'; break;
        case 3: outputCharacter = ','; break;
        case 4: outputCharacter = '.'; break;
        case 5: outputCharacter = ' '; break;
        case 6: outputCharacter = ';'; break;
        case 7: outputCharacter = '"'; break;
        case 8: outputCharacter = '\''; break;
    }
    cout << "Corresponding symbol: " << outputCharacter << "\n";

    
}