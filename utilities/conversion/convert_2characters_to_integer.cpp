#include <iostream>
using std::cin;
using std::cout;

/**
 * Prompts the user to enter a two-digit number and converts it to an integer.
 *
 * @return int The entered number as an integer.
 *
 * @throws None
 * 
 * source: think-like-a-programmer
 */

int main() {


    // Prompt the user to enter a two-digit number
    cout << "Enter a two-digit number \n";
    
    // Read the first digit character
    char digitChar = cin.get();
    
    // Convert the first digit character to an integer and multiply by 10
    int overallNumber = (digitChar - '0') * 10;
    
    // Read the second digit character
    digitChar = cin.get();
    
    // Convert the second digit character to an integer and add to overallNumber
    overallNumber += (digitChar - '0');
    
    // Print the entered number as an integer
    cout << "That number as an integer: " << overallNumber << "\n";


}
