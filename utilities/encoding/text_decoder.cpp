#include <iostream>
using std::cin;
using std::cout;

/**
 * Decodes a comma-separated, number-coded message entered by the user, using a simple substitution cipher.
 * It cycles in order through uppercase, lowercase, and punctuation modes.
 * In uppercase & lowercase modes: converts an integer 1-26 to the corresponding letter of the alphabet.
 * In punctuation mode: converts into a hardcoded symbol. 
 * 
 * TEST INPUT: 8,27,5,12,12,15,27,3,5,9,23,27,15,18,12,4,27,1
 * TEST OUTPUT: Hello, World!
 * 
 * @return void
 *
 * @throws None
 */

int main() {

    char outputCharacter;    // The decoded character
    enum modeType {UPPERCASE, LOWERCASE, PUNCTUATION};   // The modes of the cipher
    modeType mode = UPPERCASE;  // The current mode
    char digitChar;  // The current digit character being processed
    
    cout << "\nEnter your coded message: \n";  // Prompt the user
    
    do {
        digitChar = cin.get();  // Get the first digit character of a number
        int number;  // The number being decoded
        number = (digitChar - '0');  // Convert the digit character to an integer
        digitChar = cin.get();  // Get the next digit character
        
        while ((digitChar != 10) && (digitChar != ',')) {  // Repeat until the end of the number is reached
            number = number * 10 + (digitChar - '0');  // Add the digit character to the number
            digitChar = cin.get();  // Get the next digit character
        }

        // Decode the number based on the current mode
        switch (mode) {
            case UPPERCASE:
                number = number % 27;
                outputCharacter = number + 'A' - 1;
                if (number == 0){
                    mode = LOWERCASE;
                    continue;
                }
                break;
            
            case LOWERCASE:
                number = number % 27;
                outputCharacter = number + 'a' - 1;
                if (number == 0){
                    mode = PUNCTUATION;
                    continue;
                }
                break;

            case PUNCTUATION:
                number = number % 9;
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
                if (number == 0){
                    mode = UPPERCASE;
                    continue;
                }
                break;
        }
        cout << outputCharacter;  // Print the decoded character
    } while (digitChar != 10);  // Run until encountering a newline character
    cout << "\n\n";

}