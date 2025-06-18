#include "DNASequence.h"

DNASequence::DNASequence(const string& seq) {
    setSequence(seq);
}

// Load sequence from a file (expects a single line of sequence)
void DNASequence::loadFromFile(const string& filename) {
    ifstream fin(filename);
    if (!fin) {
        throw runtime_error("Cannot open file: " + filename);
    }

    string line;
    getline(fin, line);
    fin.close();

    setSequence(line);
}

// Set the sequence with validation
void DNASequence::setSequence(const string& seq) {
    // Validate sequence: only A, T, C, G (uppercase or lowercase)
    for (char c : seq) {
        char uc = toupper(c);
        if (uc != 'A' && uc != 'T' && uc != 'C' && uc != 'G') {
            throw invalid_argument("Invalid DNA sequence: contains non-ATCG characters");
        }
    }
    sequence = "";
    for (char c : seq) sequence += toupper(c);
}

// Get the sequence
string DNASequence::getSequence() const {
    return sequence;
}

// Count nucleotides using map
map<char, int> DNASequence::countNucleotides() const {
    map<char, int> counts = { {'A', 0}, {'T', 0}, {'C', 0}, {'G', 0} };
    for (char c : sequence) {
        counts[c]++;
    }
    return counts;
}

// Find all starting indices of motif in sequence
vector<int> DNASequence::findMotif(const string& motif) const {
    vector<int> positions;
    if (motif.empty()) return positions;

    string motifUpper = motif;
    transform(motifUpper.begin(), motifUpper.end(), motifUpper.begin(), ::toupper);

    size_t pos = sequence.find(motifUpper, 0);
    while (pos != string::npos) {
        positions.push_back(static_cast<int>(pos));
        pos = sequence.find(motifUpper, pos + 1);
    }

    return positions;
}

// Get complementary sequence: A <-> T, C <-> G
string DNASequence::getComplementary() const {
    string comp = sequence;
    for (char& c : comp) {
        switch (c) {
        case 'A': c = 'T'; break;
        case 'T': c = 'A'; break;
        case 'C': c = 'G'; break;
        case 'G': c = 'C'; break;
        }
    }
    return comp;
}

// Transcribe DNA to RNA: replace T with U
string DNASequence::transcribeToRNA() const {
    string rna = sequence;
    replace(rna.begin(), rna.end(), 'T', 'U');
    return rna;
}

// Print sequence info summary
void DNASequence::print() const {
    cout << "DNA Sequence: " << sequence << endl;

    map<char, int> counts = countNucleotides();
    cout << "Nucleotide counts:" << endl;
    for (auto& p : counts) {
        cout << "  " << p.first << ": " << p.second << endl;
    }
}
