# DNA Sequence Analyzer (C++)

A console-based program to analyze DNA sequences with file input, motif searching, nucleotide counting, complementary strand generation, and transcription to RNA.

## Features

- **Comprehensive DNA Sequence Analysis**
  - Load DNA sequences from text files
  - Search for motifs (subsequences) within DNA
  - Count occurrences of each nucleotide (A, T, C, G)
  - Generate complementary DNA strands (A↔T, C↔G)
  - Transcribe DNA sequences into RNA sequences (T → U)

- **Robust and Flexible**
  - Input validation and exception handling for file and sequence errors
  - Case-insensitive motif searching
  - Uses standard C++ STL containers and algorithms

- **User-Friendly Interface**
  - Simple console prompts for loading files and entering motifs
  - Clear output of counts, complementary sequences, and motif positions

## System Design

- **Object-Oriented Structure**
  - `DNASequence` class encapsulates sequence data and analysis methods
  - Separate header and implementation files for clarity

- **File Operations**
  - Reads DNA sequences from plain text files
  - Validates sequences to contain only valid DNA characters (A, T, C, G)

- **Core Components**
  - `DNASequence.h` / `DNASequence.cpp`: DNA data model and analysis methods
  - `main.cpp`: User interaction and program flow

## Getting Started

### Prerequisites

- A C++ compiler supporting C++11 or later (e.g., g++, clang++)
- Basic knowledge of running C++ programs from the command line

### Compilation

```bash
g++ main.cpp DNASequence.cpp -o DNAAnalyzer
