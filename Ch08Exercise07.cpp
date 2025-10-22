// Charles Edge
// CS310-T301
// M7: Assignment
// Source CH8, Exercise 7

#include <iostream>
#include <string>
using namespace std;

int main() {
    const int NUM_CAND = 5;
    string cand[NUM_CAND];
    int votes[NUM_CAND];
    int totalVotes = 0;

 // User enters candidates last name and number of votes
    for (int i = 0; i < NUM_CAND; ++i) {
        cout << "Enter the last name of candidate #" << i + 1 << ": ";
        cin >> cand[i];
        cout << "Enter the number of votes received by " << cand[i] << ": ";
        cin >> votes[i];
        totalVotes += votes[i];
    }

 // Display results
    cout << "\nElection Results:\n";
    cout << "Candidate Name\tVotes\tPercentage\n";

    for (int i = 0; i < NUM_CAND; ++i) {
        double percentage = (static_cast<double>(votes[i]) / totalVotes) * 100.00;
        cout << cand[i] << "\t\t" << votes[i] << "\t" << percentage << "%\n";
    }

 // Determine the winner
    int maxVotes = votes[0];
    int winnerIndex = 0;
    for (int i = 1; i < NUM_CAND; ++i) {
        if (votes[i] > maxVotes) {
            maxVotes = votes[i];
            winnerIndex = i;
        }
    }

// Outputs the winner to screen
    cout << "\nCongrats, " << cand[winnerIndex] << "! You are the winner of the election." << endl;


    return 0;
}
