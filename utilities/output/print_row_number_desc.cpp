#include <iostream>
using std::cin;
using std::cout;

/**
 * Prints the numbers from 5 to 1 in descending order, one number per line.
 *
 * @return int The exit code of the program.
 *
 * @throws None
 * source: Think Like a Programmer Ch. 2
*
*/

int main() {


    // Loop through each row
    for (int row = 1; row <= 5; row ++){
        // Print the number 6 minus the current row number
        cout << 6 - row << "\n";
    }


}