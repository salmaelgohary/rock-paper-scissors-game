#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int computer_score = 0, user_score = 0, winning_score = 3;
    string computer_choice, user_choice;
    string computer_choice_1 = "rock", computer_choice_2 = "paper", computer_choice_3 = "scissors";

    // Seed for random number generation
    srand(time(0));

    // Game loop continues until one player reaches 3 wins
    while (computer_score < winning_score && user_score < winning_score) {
        // Computer randomly selects rock, paper, or scissors
        int random = rand() % 3;
        if (random == 0)
            computer_choice = computer_choice_1;
        else if (random == 1)
            computer_choice = computer_choice_2;
        else
            computer_choice = computer_choice_3;

        // User input
        cout << "\nChoose rock, paper, or scissors: ";
        cin >> user_choice;


        // Show choices
        cout << "User picked " << user_choice << " and computer picked " << computer_choice << endl;

        // Determine the winner of the round using if else conditions
        if ((user_choice == "rock" && computer_choice == "paper") || (user_choice == "scissors" && computer_choice == "rock") || (user_choice == "paper" && computer_choice == "scissors")){
            cout << "The computer has won this round!" << endl;
            computer_score++;
        }
        else if ((computer_choice == "rock" && user_choice == "paper") || (computer_choice == "scissors" && user_choice == "rock") || (computer_choice == "paper" && user_choice == "scissors")){
            cout << "The user has won this round!" << endl;
            user_score++;
        }
        else if ((user_choice == "rock" && computer_choice == "rock") || (user_choice == "scissors" && computer_choice == "scissors") || (user_choice == "paper" && computer_choice == "paper")){
            cout << "Its a tie! Try again." << endl;
        }

        // make sure invalid input has not been given to game
        else if (user_choice != "rock" || user_choice != "scissors" || user_choice != "paper"){
            cout << "Invalid input! Try again" << endl;
        }
     

        // Display current scores
        cout << "User score: " << user_score << endl;
        cout << "Computer score: " << computer_score << endl;
     
    }

    // Final result
    cout << "The final scores are: \n";
    cout << "User score: " << user_score << endl;
    cout << "Computer score: " << computer_score << endl; 
    
    if (computer_score == winning_score){
        cout << "Congratulations, the computer has won! Better luck next time" << endl;
    }
    else if (user_score == winning_score){
        cout << "congratulations, the user has won!" << endl;
    }

    return 0;
}
