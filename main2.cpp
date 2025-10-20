```cpp
/*
Author: Durgesh Mahajan
Date: 2023-10-15 14:30
Project: Tic-Tac-Toe Game for Two Players
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Constants for the game
const int BOARD_SIZE = 3;
const char PLAYER_X = 'X';
const char PLAYER_O = 'O';
const char EMPTY = ' ';

// Function prototypes
void printBoard(const vector<vector<char>>& board);
bool checkWin(const vector<vector<char>>& board, char player);
bool checkDraw(const vector<vector<char>>& board);
void switchPlayer(char& currentPlayer);

int main() {
    // Initialize the board
    vector<vector<char>> board(BOARD_SIZE, vector<char>(BOARD_SIZE, EMPTY));
    char currentPlayer = PLAYER_X;
    bool gameWon = false;
    bool gameDraw = false;
    int row, col;

    cout << "Welcome to Tic-Tac-Toe!" << endl;

    // Main game loop
    while (!gameWon && !gameDraw) {
        printBoard(board);
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        // Input validation
        while (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE || board[row][col] != EMPTY) {
            cout << "Invalid move. Try again." << endl;
            cout << "Player " << currentPlayer << ", enter your move (row and column): ";
            cin >> row >> col;
        }

        // Place the player's mark on the board
        board[row][col] = currentPlayer;

        // Check for win or draw
        gameWon = checkWin(board, currentPlayer);
        if (!gameWon) {
            gameDraw = checkDraw(board);
        }

        // Switch players if game is not won or drawn
        if (!gameWon && !gameDraw) {
            switchPlayer(currentPlayer);
        }
    }

    // Print the final board
    printBoard(board);

    // Announce the result
    if (gameWon) {
        cout << "Congratulations! Player " << currentPlayer << " wins!" << endl;
    } else {
        cout << "It's a draw!" << endl;
    }

    return 0;
}

// Function to print the board
void printBoard(const vector<vector<char>>& board) {
    cout << "  0 1 2" << endl;
    for (int i = 0; i < BOARD_SIZE; ++i) {
        cout << i << " ";
        for (int j = 0; j < BOARD_SIZE; ++j) {
            cout << board[i][j];
            if (j < BOARD_SIZE - 1) {
                cout << "|";
            }
        }
        cout << endl;
        if (i < BOARD_SIZE - 1) {
            cout << "  -----" << endl;
        }
    }
}

// Function to check for a win
bool checkWin(const vector<vector<char>>& board, char player) {
    // Check rows and columns
    for (int i = 0; i < BOARD_SIZE; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }
    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    }
    return false;
}

// Function to check for a draw
bool checkDraw(const vector<vector<char>>& board) {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            if (board[i][j] == EMPTY) {
                return false;
            }
        }
    }
    return true;
}

// Function to switch players
void switchPlayer(char& currentPlayer) {
    currentPlayer = (currentPlayer == PLAYER_X) ? PLAYER_O : PLAYER_X;
}
```

### Description:

- **Main Function**: Initializes the game board, handles the game loop, and prints the final result.
- **printBoard Function**: Displays the current state of the board in a user-friendly format.
- **checkWin Function**: Checks if the current player has won by examining rows, columns, and diagonals.
- **checkDraw Function**: Determines if the game is a draw by checking if there are no empty spaces left.
- **switchPlayer Function**: Alternates between `PLAYER_X` and `PLAYER_O` after each move.

### User Interface:
- The board is displayed with row and column numbers for easy reference.
- Players are prompted to enter their moves, and input validation ensures valid moves are made.
- The game announces the winner or a draw when the game ends.

### Notes:
- This is a console-based game, ensuring simplicity and ease of use.
- The program is self-contained within a single file and requires no external dependencies.
- Comments are minimal but provide clarity on the functionality of key parts of the code.