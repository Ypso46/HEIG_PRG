#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int infValue = 0;
    int supValue = 0;
    int userValue = 0;

    cout << "Enter the inferior value superior to 0" << endl;
    cin >> infValue;

    while (infValue < 0) {
        cout << "Wrong value, please choose again: " << endl;
        cin >> infValue;
    }

    cout << "Enter the superior value:" << endl;
    cin >> supValue;

    while (supValue < infValue) {
        cout << "Wrong value, please choose again:" << endl;
        cin >> supValue;
    }

    cout << "Enter a value between your inferior and superior values" << endl;
    cin >> userValue;

    while (userValue <= infValue || userValue >= supValue) {
        cout << "Wrong value, please choose again: " << endl;
        cin >> userValue;
    }

    cout << "Your inferior value is: " << infValue << endl;
    cout << "Your superior value is: " << supValue << endl;
    cout << "The number to guess is: " << userValue << endl << endl;


    char userChoice = 0;
    int guessRange = (supValue + infValue) / 2;

    cout << "Answer the questions with 'y' for yes and 'n' for no." << endl;

    while (infValue != userValue || supValue != userValue) {
        cout << "Is your number between: " << ((infValue + supValue) / 2) << " and " << supValue << endl;
        cin >> userChoice;

        if (userChoice == 'y') {
            infValue = guessRange;
        } else if (userChoice == 'n') {
            supValue = guessRange;
        } else {
            cout << "Error, choose 'y' or 'n'" << endl;
        }
    }

    /*
    char userInput;

    string choicePhrase =  "Game mode or test mode? Enter 'g' for game mode and 't' for test)";

    cout << choicePhrase << endl;
    cin >> userInput;

    if (userInput == 'g') {
        cout << "Game mode" << endl;
    } else if (userInput == 't') {
        cout << "Test mode" << endl;
    } else {
        cout << "Error!" << endl;
    }
    */
    return 0;
}
