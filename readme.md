# Simple Tic-Tac-Toe Game in C++

## Short Description
This project is a simple console-based Tic-Tac-Toe game for two players. It's a fun way to practice C++ and get familiar with basic game logic and console input/output. Players take turns to place their marks (X or O) on a 3x3 grid, and the first player to align three marks in a row, column, or diagonal wins the game.

## Features
- Simple 3x3 grid drawn in text.
- Two-player gameplay.
- Players take turns entering their moves.
- Checks for a winner after each move.
- Declares a draw if the grid is filled without a winner.

## Usage Instructions
1. **Download the Source Code:**
   - Get the source code by copying the provided C++ code or downloading the project files from the repository.

2. **Compile the Program:**
   - Open a terminal or command prompt.
   - Navigate to the directory where the source code is located.
   - Use a C++ compiler to compile the code, for example:
     ```bash
     g++ -o TicTacToe TicTacToe.cpp
     ```

3. **Run the Program:**
   - After compiling, run the program by typing the following command in the terminal:
     ```bash
     ./TicTacToe
     ```
   - For Windows, the command would be:
     ```bash
     TicTacToe.exe
     ```

4. **Play the Game:**
   - The game will display a 3x3 grid and prompt players to enter their moves.
   - Players enter the position (1-9) where they want to place their mark.
   - The game will alternate between Player 1 (X) and Player 2 (O) turns.
   - The game checks for a winner or a draw after each move.

## Dependencies
- C++ Compiler (e.g., g++)

## Example/Preview
Here’s what the game might look like during a session:

```
Tic-Tac-Toe Game

 1 | 2 | 3 
-----------
 4 | 5 | 6 
-----------
 7 | 8 | 9 

Player 1 (X), enter your move (1-9): 5

Tic-Tac-Toe Game

 1 | 2 | 3 
-----------
 4 | X | 6 
-----------
 7 | 8 | 9 

Player 2 (O), enter your move (1-9): 1

Tic-Tac-Toe Game

 O | 2 | 3 
-----------
 4 | X | 6 
-----------
 7 | 8 | 9 

Player 1 (X), enter your move (1-9): 9

Tic-Tac-Toe Game

 O | 2 | 3 
-----------
 4 | X | 6 
-----------
 7 | 8 | X 

Player 1 (X) wins!
```

## Contact / Author
- **Name:** [Your Name]
- **Contact:** [Your Email or GitHub Profile]

Feel free to reach out if you have any questions or need further assistance! Enjoy playing!