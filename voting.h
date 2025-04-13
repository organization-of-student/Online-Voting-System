#ifndef VOTING_H
#define VOTING_H

#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class VotingSystem {
public:
    void addCandidate(const string& candidateName);
    void castVote(const string& voterID, const string& candidateName);
    void displayResults() const;

private:
    struct Candidate {
        string name;
        int voteCount;
    };

    vector<Candidate> candidates;
    unordered_map<string, bool> voterRegistry;

    bool hasVoted(const string& voterID) const;
    Candidate* findCandidate(const string& candidateName);
};

#endif
