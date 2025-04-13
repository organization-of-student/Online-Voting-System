# Online Voting System

## Description
The Online Voting System is a simple C++ project that allows users to add candidates, cast votes securely, and display the results. It ensures that voters cannot vote more than once and provides real-time results.

## Features
- Add candidates to the election.
- Cast votes with unique voter IDs.
- Display real-time voting results.
- Prevent duplicate voting.

## File Structure
- `voting.h`: Contains the declaration of the `VotingSystem` class and supporting structures.
- `voting.cpp`: Implements the methods for adding candidates, casting votes, and displaying results.
- `main.cpp`: Contains the main function to interact with the voting system.

## How to Use
1. Clone the repository.
2. Compile the code using a C++ compiler (e.g., g++):
   ```
   g++ main.cpp voting.cpp -o voting_system
   ```
3. Run the compiled program:
   ```
   ./voting_system
   ```

## Example Output
```
Welcome to the Online Voting System!
Available candidates: Alice, Bob, Charlie
Vote successfully cast for Alice.
Vote successfully cast for Bob.
Vote successfully cast for Charlie.
Error: Voter with ID Voter1 has already voted.

Voting Results:
Alice: 1 votes
Bob: 1 votes
Charlie: 1 votes
```