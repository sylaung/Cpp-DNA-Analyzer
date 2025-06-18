#include "DNASequence.h"

int main() {
    try {
        DNASequence dna;
        string filename;

        cout << "Enter DNA sequence filename: ";
        getline(cin, filename);

        dna.loadFromFile(filename);
        dna.print();

        cout << endl << "Complementary Sequence: " << dna.getComplementary() << endl;
        cout << "Transcribed RNA Sequence: " << dna.transcribeToRNA() << endl;

        cout << endl << "Enter motif to search for: ";
        string motif;
        getline(cin, motif);

        vector<int> positions = dna.findMotif(motif);
        if (positions.empty()) {
            cout << "Motif '" << motif << "' not found in the sequence." << endl;
        }
        else {
            cout << "Motif '" << motif << "' found at positions (0-based): ";
            for (int pos : positions) cout << pos << " ";
            cout << endl;
        }
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
