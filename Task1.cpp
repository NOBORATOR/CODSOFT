#include<bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0));
    int a = rand();
    int sNumber = a% 100 + 1;
    int guess = 0;

    cout << "Welcome to the Guess the Number game " <<endl;
    cout << "I've chosen a number between 1 and 100. Try to guess it." <<endl;

    while (guess != sNumber) {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess < sNumber)cout << "Its Too low! Try again. \n";
        else if (guess > sNumber)cout << "Its Too high! Try again. \n";
        else cout << "Congratulations! You guessed the correct number: " << sNumber <<endl;
    }

    return 0;
}
