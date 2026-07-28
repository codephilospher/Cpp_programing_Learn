# C++ Learning Journey Repository

Welcome to my C++ practice repository! This project is a collection of small but meaningful programs that helped me build a strong foundation in programming logic, problem-solving, and console-based application development.

## Author
Shiv Raj Sharma

## What This Repository Shows
This repository reflects my learning progression from basic C++ concepts to more advanced pattern-based programming. It includes beginner-friendly programs that focus on:
- Input and output handling
- Decision-making and control flow
- Loops and repetition
- Functions and modular code
- Pattern generation using nested loops

## Repository Files

### 1. [FIrst_program.cpp](FIrst_program.cpp)
This is my first interactive C++ program. It introduces a simple menu-driven console application where the user can:
- Enter their name
- Use a basic calculator
- Find the factorial of a number
- Exit the program

This file helped me understand the basics of user interaction, conditional statements, loops, and program flow.

### 2. [patterns.cpp](patterns.cpp)
This is the main pattern project in the repository. It contains a menu-based program that displays several pattern designs using C++ loops and functions.

#### Patterns Included
- Square pattern
- Triangular pattern
- Reverse triangular pattern
- Floyd's triangle
- Inverted triangle pattern
- Pyramid pattern
- Diamond pattern

This file helped me practice nested loops, spacing control, function design, and creating visual output in the console.

### 3. [practice.cpp](practice.cpp)
`practice.cpp` is an advanced pattern-practice program that helped me strengthen C++ logic, nested loops, and function-based design. It implements a variety of console patterns — each separated into its own function for clarity and reuse.

Functions included (brief):
- `print1(n)`: Descending star triangle (rows of `*` decreasing from `n` to 1).
- `print2(n)`: Number-based triangle that prints ascending numbers across each row (with decreasing row length).
- `pyramid(n)`: Centered pyramid of stars (increasing row width centered with spaces).
- `reversePyramid(n)`: Centered reverse pyramid (mirror of `pyramid`).
- `diamond(n)`: Combination of `pyramid` and `reversePyramid` to form a diamond shape.
- `print4(n)`: Symmetric vertical star pattern that grows to a midpoint then shrinks.
- `print5(n)`: Alternating binary-style triangle printing `1` and `0` (row-dependent start).
- `print6(n)`: Mirrored number pyramid with `*` separators (numbers 1..i, filler, then i..1).
- `print7(n)`: Consecutive-number triangle (Floyd's triangle style).
- `print8(n)`: Alphabet triangle where each row prints letters starting from `A` across the row.
- `print9(n)`: Row-wise decreasing alphabet sequences starting from `A`.
- `print10(n)`: Each row prints the same alphabet character, which advances each row (`A`, `B`, `C`, ...).
- `print11(n)`: Centered alphabet pyramid that increases then decreases across the row (palindromic letters).
- `print12(n)`: Letter-range triangles (rows printing from a decreasing start letter up to `E`).
- `print13(n)`: Symmetric double-star blocks separated by spaces (top and bottom halves mirror each other).

The `main()` in this file reads input values and demonstrates using these functions — for example it reads multiple integers and calls `print13()` for each input value, making it useful for testing different pattern sizes.

## Concepts I Learned
Throughout this repository, I practiced and improved my understanding of:
- Variables and data types
- `cout` and `cin` for input/output
- `if`, `else`, and `switch` statements
- `for` and `while` loops
- Functions for organizing code
- Pattern logic with nested loops
- Handling user input and basic validation

## Skills Developed
- Problem-solving through step-by-step logic
- Writing cleaner and more structured programs
- Building interactive console applications
- Creating visual patterns using code
- Improving code readability and organization

## How to Run the Programs
You can compile and run the files using any C++ compiler such as g++ or an IDE like VS Code.

Example:
```bash
g++ FIrst_program.cpp -o first_program
./first_program
```

Similarly, you can run the other files by replacing the file name.

## Learning Summary
This repository is more than just a collection of C++ files. It represents my early learning journey in programming, showing how I moved from simple beginner concepts to pattern-based problem solving with confidence.

## Final Note
Each file in this repository reflects a small step in my growth as a C++ learner. I continue to improve my coding skills by practicing logic, structure, and creativity in every program.

