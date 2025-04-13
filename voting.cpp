#include "voting.h"
#include <iostream>
using namespace std;

void VotingSystem::addCandidate(const string& candidateName) {
    Candidate newCandidate;
    newCandidate.name = candidateName;
    newCandidate.voteCount = 0;
    candidates.push_back(newCandidate);
}

void VotingSystem::castVote(const string& voterID, const string& candidateName) {
    if (hasVoted(voterID)) {
        cout << "Error: Voter ID '" << voterID << "' has already voted!" << endl;
        return;
    }

    Candidate* candidate = findCandidate(candidateName);
    if (candidate == nullptr) {
        cout << "Error: Candidate '" << candidateName << "' not found!" << endl;
        return;
    }

    voterRegistry[voterID] = true;
    candidate->voteCount++;
    cout << "Vote cast successfully for '" << candidateName << "'." << endl;
}

void VotingSystem::displayResults() const {
    cout << "\nVoting Results:" << endl;
    for (const auto& candidate : candidates) {
        cout << candidate.name << ": " << candidate.voteCount << " votes" << endl;
    }
}

bool VotingSystem::hasVoted(const string& voterID) const {
    return voterRegistry.find(voterID) != voterRegistry.end();
}

VotingSystem::Candidate* VotingSystem::findCandidate(const string& candidateName) {
    for (auto& candidate : candidates) {
        if (candidate.name == candidateName) {
            return &candidate;
        }
    }
    return nullptr;
}
