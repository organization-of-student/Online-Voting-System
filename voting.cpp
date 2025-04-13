#include "voting.h"
#include <iostream>
#include <algorithm>

VotingSystem::VotingSystem() {
    candidates.clear();
    voters.clear();
}

void VotingSystem::addCandidate(const string& candidateName) {
    candidates.push_back({candidateName, 0});
}

bool VotingSystem::hasVoted(const string& voterID) const {
    return find(voters.begin(), voters.end(), voterID) != voters.end();
}

void VotingSystem::castVote(const string& voterID, const string& candidateName) {
    if (hasVoted(voterID)) {
        std::cout << "Error: Voter with ID " << voterID << " has already voted." << std::endl;
        return;
    }

    auto it = find_if(candidates.begin(), candidates.end(), [&](const Candidate& c) {
        return c.name == candidateName;
    });

    if (it != candidates.end()) {
        it->votes++;
        voters.push_back(voterID); // Mark voter as voted
        std::cout << "Vote successfully cast for " << candidateName << "." << std::endl;
    } else {
        std::cout << "Error: Candidate " << candidateName << " not found." << std::endl;
    }
}

void VotingSystem::displayResults() const {
    std::cout << "Voting Results:" << std::endl;
    for (const auto& candidate : candidates) {
        std::cout << candidate.name << ": " << candidate.votes << " votes" << std::endl;
    }
}