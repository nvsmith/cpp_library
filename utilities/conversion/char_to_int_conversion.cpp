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
    cout << "Enter a two-digit number \n";
    char digitChar = cin.get();
    int overallNumber = (digitChar - '0') * 10;
    digitChar = cin.get();
    overallNumber += (digitChar - '0');
    cout << "That number as an integer: " << overallNumber << "\n";
}
