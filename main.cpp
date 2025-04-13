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

    votingSystem.castVote("Voter1", "Alice");
    votingSystem.castVote("Voter2", "Bob");
    votingSystem.castVote("Voter3", "Charlie");
    votingSystem.castVote("Voter1", "Bob"); // Duplicate vote attempt

    votingSystem.displayResults();

    return 0;
}