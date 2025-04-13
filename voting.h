#ifndef VOTING_H
#define VOTING_H

#include <string>
#include <vector>
#include <map>

using namespace std;

struct Candidate {
    string name;
    int votes;
};

class VotingSystem {
public:
    VotingSystem();
    void addCandidate(const string& candidateName);
    void castVote(const string& voterID, const string& candidateName);
    void displayResults() const;

private:
    vector<Candidate> candidates;
    vector<string> voters; // List of voter IDs who already voted

    bool hasVoted(const string& voterID) const;
};

#endif // VOTING_H