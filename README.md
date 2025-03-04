# TIC_TAC_TOE-GAME
The Tic Tac Toe Game is a simple, classic two-player game where players take turns marking spaces on a 3x3 grid, with the goal of being the first to get three of their marks in a row—either horizontally, vertically, or diagonally. 

## Overview
The Tic Tac Toe Game is a simple, classic two-player game where players take turns marking spaces on a 3x3 grid, with the goal of being the first to get three of their marks in a row—either horizontally, vertically, or diagonally. This project allows users to play the game either via a command-line interface (CLI) or a graphical user interface (GUI), depending on the implementation.

## Features
* Two-player Mode: Play with a friend or family member on the same device.
* AI Opponent: (Optional) A basic AI can be implemented to allow the user to play against the computer.
* Game Board Display: A visual representation of the game board, showing the current state of the game.
* Winner Detection: Automatically detects when a player has won or if the game results in a draw.
* Input Validation: Ensures that players only select available spots on the board.

## Requirements
Requirements
* C++ Compiler (e.g., g++, clang++)
* Operating System: This game can run on any operating system with a C++ compiler (Linux, Windows, macOS).

## Installation
1. Clone the repository: https://github.com/Nithikvijay/TIC_TAC_TOE-GAME.git
2. To compile the game, use a C++ compiler (e.g., g++): `g++ -o tic_tac_toe tic_tac_toe.cpp`
3. The game continues until one of the players wins or all spaces on the board are filled (resulting in a draw).
4. The winner (or a draw) will be displayed at the end of the game.
5. After the game ends, you can play again by restarting the program.

## Key Functions
 `displayBoard()`: Displays the current state of the game board.
 `checkWinner()`: Checks if a player has won the game based on the current board.
 `isBoardFull()`: Checks if the board is full and if the game ended in a draw.
 `makeMove()`: Allows players to make their move and updates the board.

## Contributing
If you'd like to improve the game or add new features, feel free to fork the repository and create a pull request. 
Some ideas for improvements include:
* Adding an AI opponent to play against the computer.
* Implementing a more advanced graphical user interface (GUI) using a C++ GUI library like SFML or Qt.
* Enhancing the game with additional features like score tracking.
