# DNA Sequence Analyzer (C++)

A simple console-based tool for analyzing DNA sequences using modern C++.

## Features

- Load DNA from file (single-line format)
- Validate DNA (A/T/C/G only)
- Count nucleotide frequencies
- Search for motifs (substring matches)
- Generate complementary strand
- Transcribe DNA to RNA

## Design

- **OOP Structure**: `DNASequence` class encapsulates logic
- **File I/O**: Reads input file, exception-safe
- **Utilities**: Uses STL containers, string algorithms, maps

## File Structure

- `DNASequence.h/cpp`: Core sequence logic
- `main.cpp`: CLI interface
