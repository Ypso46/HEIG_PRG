#include <iostream>
#include <cstdlib>
#include <cstdlib>

using namespace std;

int main() {
    int infValue = 0;
    int supValue = 0;
    int guessNumber = 0;
    char userChoice = 0;
    char gameOrTest;

    string choicePhrase =  "Enter 'g' for game mode and 't' for test)";

    cout << choicePhrase << endl;
    cin >> gameOrTest;

    if (gameOrTest == 'g') {
        cout << "Game mode" << endl;

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

        cout << "Your inferior value is: " << infValue << endl;
        cout << "Your superior value is: " << supValue << endl;

        cout << "Choose a number in this range and answer the questions with 'y' for yes and 'n' for no." << endl;



        do {
                int guess = (supValue + infValue) / 2;
                cout << "Is your number smaller or equal to " << guess << endl;
                cin >> userChoice;

                if (userChoice == 'y') {
                    supValue = guess;
                } else if (userChoice == 'n') {
                    infValue = guess + 1;
                } else {
                    cout << "Error, choose 'y' or 'n'" << endl;
                }
        } while (infValue != supValue );

        cout << "Your number is: " << infValue << endl;

    } else if (gameOrTest == 't') {
        cout << "Test mode" << endl;

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

        cout << "Enter a number to be guessed: " << endl;
        cin >> guessNumber;

        while (guessNumber > supValue || guessNumber < infValue) {
            cout << "Wrong value, please choose again:" << endl;
            cin >> guessNumber;
        }

        cout << "Your inferior value is: " << infValue << endl;
        cout << "Your superior value is: " << supValue << endl;
        cout << "Your number to be guessed is: " << guessNumber << endl;

//        srand(time(NULL));
//        int randomNumber = rand() % (infValue-supValue) + 1;
//        cout << "Your random number is: " << randomNumber << endl;

        cout << "Choose a number in this range and answer the questions with 'y' for yes and 'n' for no." << endl;

        do {
            int guess = (supValue + infValue) / 2;
            cout << "Is your number smaller or equal to " << guess << endl;
            cin >> userChoice;

            if (guessNumber > guess) {
                userChoice == 'y';
                supValue = guess;
            } else if (guessNumber < guess) {
                   userChoice == 'n';
                   infValue = guess + 1;
                 }
        } while (infValue != supValue );

        cout << "Your number is: " << infValue << endl;

    } else {
        cout << "Error!" << endl;
    }

    return 0;
}
