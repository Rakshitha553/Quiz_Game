# Quiz Game

A command-line based quiz game developed in C that tests users with general programming and logic questions across three difficulty levels: Easy, Medium, and Hard. Players can earn or lose points based on their answers and receive a final score with a rating at the end.

## Features

- Interactive menu system
- Three levels of difficulty: Easy, Medium, and Hard
- 5 multiple-choice questions per level
- Real-time score calculation
- Rating system based on performance
- Clear instructions for players

## Getting Started

### Prerequisites

To compile and run the game, you need:

- A C compiler (e.g., GCC)
- Windows terminal (for system("cls") and system("color") to work properly)

### Compilation

Use the following command to compile the code:

```bash
gcc quiz\ game.c -o quiz_game

### How to Play
Launch the game and enter 1 to access the main menu.

Choose to start the game or read the instructions.

When starting, enter your name and select a difficulty level.

Answer 5 multiple-choice questions.

Each correct answer awards 10 points, and each incorrect answer deducts 2 points.

Your final score and rating will be displayed at the end.

Scoring and Rating

Correct answer: +10 points

Wrong answer: -2 points

Rating:

0–9: ★☆☆☆☆

10–19: ★★☆☆☆

20–29: ★★★☆☆

30–39: ★★★★☆

40–50: ★★★★★
