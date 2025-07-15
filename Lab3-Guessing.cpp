#include <iostream> // Required for input/output operations (e.g., cout, cin)
#include <cstdlib>  // Required for rand() and srand() functions (random numbers)
#include <ctime>    // Required for time() function (to seed the random number generator)

int main() {
    // Seed the random number generator
    // time(0) returns the current calendar time as a time_t object.
    // srand() uses this value to initialize the random number generator,
    // ensuring a different sequence of random numbers each time the program runs.
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100 (inclusive)
    // rand() % 100 generates a number between 0 and 99.
    // Adding 1 shifts the range to 1 to 100.
    int secretNumber = (rand() % 100) + 1;
    int guess = 0;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have picked a number between 1 and 100." << std::endl;
    std::cout << "Can you guess what it is?" << std::endl << std::endl;

    // Game loop: Continue until the user guesses the correct number
    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess; // Read the user's guess
        attempts++;        // Increment the attempt counter

        // Provide hints based on the guess
        if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            // This block executes when guess == secretNumber
            std::cout << std::endl;
            std::cout << "Congratulations! You guessed the number!" << std::endl;
            std::cout << "The secret number was: " << secretNumber << std::endl;
            std::cout << "It took you " << attempts << " attempts." << std::endl;
        }
    } while (guess != secretNumber); // Loop continues as long as the guess is not correct

    return 0; // Indicate successful program execution
}
