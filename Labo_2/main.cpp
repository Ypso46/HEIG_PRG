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
    string yesOrNo = "Answer the questions with 'y' for yes and 'n' for no.";
    string modeChoice =  "Enter 'g' for game mode and 't' for test)";

    cout << modeChoice << endl;
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

       
        char modeChoice;

        cout << "For random mode enter 'r' and for in the middle mode enter 'm'" << endl;
        cin >> modeChoice;

        if (modeChoice == 'r') {
           
            cout << yesOrNo << endl;
           

            
            int randomNumber = 0;
            int seed = time(NULL);
            //cout << "The seed is: " << seed << endl;
            srand(seed);
            
            do {
            
                //cout << "Je pense que le nombre est compris entre: " << infValue << " et " << supValue << " (inclus)" << endl;
            
                //code to generate a random number between supValue exclusive and infValue inclusive
                randomNumber = rand() % (supValue - infValue) + infValue;

                cout << "Is your number smaller or equal to " << randomNumber << "?" << endl;

                if (guessNumber <= randomNumber) {
                cout << "y" << endl;
                supValue = randomNumber;
            } else if (guessNumber > randomNumber) {
                cout << "n" << endl;
                infValue = randomNumber + 1;
            } else {
                cout << "Error, choose 'y' or 'n'" << endl;
                }
            }
            while (infValue != supValue);
            
            cout << "Your number is: " << infValue << endl;
             
        } else if (modeChoice == 'm') {
            //in the middle mode code here
        } else {
            cout << "Wrong letter, please choose between 'r' and 'm'." << endl;
        }

        
/*
        do {
            int guess = (supValue + infValue) / 2;
            cout << "Is your number smaller or equal to " << guess << "?" << endl;
            cin >> userChoice;

            if (guessNumber > guess) {
                userChoice == 'y';
                infValue = guess;
            } else if (guessNumber < guess) {
                   userChoice == 'n';
                   supValue = guess + 1;
                 }
        } while (infValue != supValue );

        cout << "Your number is: " << infValue << endl;
*/
    } else {
        cout << "Error!" << endl;
    }

    return 0;
}
