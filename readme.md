# How to run C++ Programs
--------------------------------------
## 1. Cd in to the correct directory

## 2. run this in your terminal: 
'''
$ g++ program-name.cpp -o program-name
'''

--------------------------------------

## Explainations:
### These are simple game programs in C++.
#### Rock Paper Scissor
  ![image](https://user-images.githubusercontent.com/49017322/222418732-86726323-520c-44d8-93e2-3844f43424d0.png)

 
**Description** : Rock paper scissors is a hand game usually played between two people, in which each player simultaneously forms one of three shapes with an outstretched hand. These shapes are "rock", "paper", and "scissors". This C++ Program [Mini Project] is aimed at automating one of the player called as Computerized Player and the taking rock, paper or scissor as an input from the used.

**Development** : This C++ game is distinctive in its way. The game is played between the computer and the player. Each participant has to choose one of the three options (rock, paper, or scissors) to beat. The computer will generate a random option. 

#### Tic Tac Toe game:
   ![image](https://user-images.githubusercontent.com/49017322/222418569-3a4a6b53-04f9-4bb3-a527-5630135f0b7e.png)
  
  
**Description** :    
The game is played on a grid that's 3 squares by 3 squares.
You are X, your friend (or the computer in this case) is O. Players take turns putting their marks in empty squares.
The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner.
When all 9 squares are full, the game is over.

**Development** : Using an array function and true and false conditions in the C++ language, we can allow players to play this C++ game.

#### Simple card game:
  ![image](https://user-images.githubusercontent.com/49017322/222418992-764a09af-e24d-4727-a8e6-b777813637c5.png)

  
**Description** : This game will only automatically shuffle cards for 2 players.

**Development**: Using array function to store distinct data types & random function to generate random shuffle for these cards in C++ language we can let player play this C++ game .

### Simple Casino Games
  ![image](https://user-images.githubusercontent.com/49017322/222419173-f49755b0-45c1-4908-8a33-6af66051aff3.png)

  
**Description**: This is a simple casino game that allows the player to play as a guest. The program will take the first deposit and wait for the player to increase their bet or not. The program ends when you lose all your money.

**Development**:
This game has 3 files: "Cards.hpp" & "Player.hpp" & "main.cpp"
"main.cpp" will inherit from "Cards.hpp" & "Player.hpp"
"Cards.hpp" is used to create cards
"Player.hpp" is used to store the player name, initial balance or current balance after each turn.
"main.cpp" is the main class that includes: Calculating, asking for the player's name, giving the player options to play, giving the final feedback to the player.

**You can run this casino game with**:

'''
g++ main.cpp -o main
'''


------------------------------THE END-------------------------------------------------------------------------------
