# DNA Sequence Analyzer (C++)

A lightweight tool for DNA sequence analysis with core bioinformatics functions.

### Features
- Load sequences from text files
- Nucleotide composition analysis
- Motif search with position tracking
- Complementary strand generation
- DNA-to-RNA transcription

### Technical Highlights
- `DNASequence` class with validation
- RAII file handling
- Case-insensitive input processing
- Error-resistant design

### Input Format
Plain text files containing:
- A/T/C/G characters (case-insensitive)
- Single-line sequences
- Example: `ATGCGTACGTAGCTAGCTAGC...`

### Build & Run
1. Compile with C++17
2. Execute and provide sequence file
3. Select analysis options
