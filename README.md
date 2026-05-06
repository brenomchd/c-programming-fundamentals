# C Programming Fundamentals

Repository with C programming exercises, exam solutions, and a small phonebook project developed while studying programming fundamentals.

## About

This repository documents my practice with the C language, starting from basic input/output and conditionals and progressing through loops, arrays, strings, structs, pointers, dynamic memory, and modular programs split across `.c` and `.h` files.

The code is organized into three main areas:

- `problem-sets/`: practice lists with standalone exercises.
- `exams/`: exam questions renamed using the pattern `exam_<exam-number>_q<question-number>.c`.
- `phonebook/`: a small modular phonebook application.

## Repository Structure

```text
.
├── exams/
│   ├── exam_1_q1.c
│   ├── exam_1_q2.c
│   ├── exam_1_q3.c
│   └── ...
├── phonebook/
│   ├── contact.c
│   ├── contact.h
│   ├── main.c
│   ├── phonebook.c
│   └── phonebook.h
└── problem-sets/
    ├── problem-set-1/
    ├── problem-set-2/
    ├── problem-set-3/
    └── ...
```

## Contents

### Problem Sets

The `problem-sets/` directory contains 138 standalone C exercises divided into numbered lists.

These exercises cover:

- Basic syntax and arithmetic operations
- Input and output with `scanf` and `printf`
- Conditional statements
- Loops
- Functions
- Arrays and matrices
- Strings
- Structs
- Pointers and dynamic memory

Each file can be compiled and executed independently.

Example:

```bash
gcc problem-sets/problem-set-1/exercise_01.c -o exercise_01
./exercise_01
```

### Exams

The `exams/` directory contains 12 refactored exam question files.

Naming pattern:

```text
exam_<exam-number>_q<question-number>.c
```

Example:

```bash
gcc exams/exam_1_q2.c -o exam_1_q2
./exam_1_q2
```

### Phonebook Project

The `phonebook/` directory contains a small menu-driven contact manager built with multiple source and header files.

Features:

- Add contacts
- Remove contacts by name
- Search contacts by name
- List all contacts
- Store up to 100 contacts

Compile it with:

```bash
gcc phonebook/main.c phonebook/phonebook.c phonebook/contact.c -o phonebook_app
./phonebook_app
```

## Requirements

- C compiler, such as `gcc` or `clang`
- Terminal or command-line environment

## Compile All Files

To check all standalone exercises and exam files:

```bash
for file in problem-sets/**/*.c exams/*.c; do
  gcc -Wall -Wextra -pedantic "$file" -o /tmp/program
done
```

To compile the phonebook project:

```bash
gcc -Wall -Wextra -pedantic phonebook/main.c phonebook/phonebook.c phonebook/contact.c -o phonebook_app
```

## Notes

These programs were developed as part of my learning process in C. Many exercises are intentionally small and focused on practicing one concept at a time.

## Author

Breno Machado Barros
