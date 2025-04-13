#include "voting.h"
#include <iostream>
using namespace std;

int main() {
    VotingSystem votingSystem;

    votingSystem.addCandidate("Alice");
    votingSystem.addCandidate("Bob");
    votingSystem.addCandidate("Charlie");

    cout << "Welcome to the Online Voting System!" << endl;
    cout << "Available candidates: Alice, Bob, Charlie" << endl;
    cout << "To exit voting, type 'exit' as the voter ID." << endl;

    while (true) {
        string voterID, candidateName;

        cout << "Enter Voter ID: ";
        cin >> voterID;

        if (voterID == "exit") {
            break;
        }

        cout << "Enter Candidate Name: ";
        cin >> candidateName;

        votingSystem.castVote(voterID, candidateName);
    }

    votingSystem.displayResults();

    return 0;
}
