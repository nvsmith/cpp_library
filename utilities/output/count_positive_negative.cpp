#include <iostream>
using std::cin;
using std::cout;

/**
 * Counts the number of positive and negative integers entered by the user.
 *
 * @return void
 *
 * @throws None
 */

int main() {

    // Initialize the variables.
    int number;
    int positiveCount = 0;
    int negativeCount = 0;

    // Loop for input of 5 numbers.
    for (int i = 1; i <= 5; i++){
        // Prompt the user for input.
        cout << "Input an integer (" << i << " of 5) \n";
        // Read the input.
        cin >> number;
        // If the number is positive, increment positiveCount.
        if (number > 0) positiveCount++;
        // If the number is negative, increment negativeCount.
        if (number < 0) negativeCount++;
    }

    // Output the counts.
    cout << "Positive count: " << positiveCount << "\n";
    cout << "Negative count: " << negativeCount << "\n";

}