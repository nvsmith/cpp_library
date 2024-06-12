#include <iostream>
using std::cin;
using std::cout;

/**
 * This function reads a number from the user input, converts it to an integer, 
 * and prints the result.
 *
 * @return int The converted integer value of the user input.
 *
 * @throws None
 */

int main() {


    // Prompt the user to enter a number with as many digits as they'd like.
    cout << "Enter a number with as many digits as you'd like: ";
    
    // Read the first digit character.
    char digitChar = cin.get();
    
    // Convert the first digit character to an integer and assign it to number.
    int number = (digitChar - '0');
    
    // Read the next digit character until the end-of-line character (10) is reached.
    // Multiply number by 10 and add the digit character to it in each iteration.
    digitChar = cin.get();
    while (digitChar != 10){
        number = number * 10 + (digitChar - '0');
        digitChar = cin.get();
    }
    
    // Print the converted integer value of the user input.
    cout << "You number has been converted to an integer: " << number << "\n";

    


}