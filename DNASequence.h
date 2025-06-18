#ifndef DNASEQUENCE_H
#define DNASEQUENCE_H

#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <exception>

using namespace std;

class DNASequence {
private:
    string sequence;

public:
    DNASequence() = default;
    DNASequence(const string& seq);

    void loadFromFile(const string& filename);
    void setSequence(const string& seq);
    string getSequence() const;

    map<char, int> countNucleotides() const;
    vector<int> findMotif(const string& motif) const;
    string getComplementary() const;
    string transcribeToRNA() const;

    void print() const;
};

#endif
