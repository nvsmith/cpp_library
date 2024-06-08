#include <iostream>
using std::cin;
using std::cout;

/**
 * Reads a three-digit or four-digit number from the user and converts it to an integer.
 *
 * @return void
 *
 * @throws None
 */

int main() {

    cout << "Enter a three-digit or four-digit number: ";

    // 1st character
    char digitChar = cin.get();

    // Convert 1st digit character to an integer
    int number = (digitChar - '0') * 100;

    // 2nd character
    digitChar = cin.get();

    // Convert 2nd digit character to an integer and add to number.
    number += (digitChar - '0') * 10;

    // 3rd character
    digitChar = cin.get();

    // Convert 3rd digit character to an integer and add to number.
    number += (digitChar - '0');

    // 4th character
    digitChar = cin.get();

    // If 4th character is the end-of-line character, then number is three-digits
    if (digitChar == 10) {
        // Output the three-digit number.
        cout << "Your three-digit number: " << number << "\n";
    } else {
        // Convert the 4th digit character to an integer and add to number.
        number = number * 10 + (digitChar - '0');

        // Output the four-digit number.
        cout << "Your four-digit number :" << number << "\n";
    }

}