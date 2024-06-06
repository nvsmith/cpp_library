#include <iostream>
using std::cin;
using std::cout;

/**
 * Prints a sideways triangle of characters.
 *
 * @return int The exit code of the program.
 *
 * @throws None
* source: Think Like a Programmer Ch. 2
*/

int main() {


    // Loop through each row
    for (int row = 1; row <= 7; row++){
        // Loop through each char space in the row
        // quantity of char space = [4 - |4-(current row number)|]
        for (int hashNum = 1; hashNum <= 4 - abs(4 - row); hashNum++){
            // Print a hash
            cout << "#";
        }
        // Print a new line at the end of each row
        cout << "\n";
    }


}