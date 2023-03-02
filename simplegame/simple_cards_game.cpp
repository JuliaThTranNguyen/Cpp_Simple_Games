#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

int main()
{
    // Initialize the deck of cards
    vector<string> deck;
    string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            deck.push_back(ranks[j] + " of " + suits[i]);
        }
    }

    // Shuffle the deck
    srand(time(0));
    random_shuffle(deck.begin(), deck.end());

    // Deal the cards to two players
    vector<string> player1, player2;
    for (int i = 0; i < 26; i++)
    {
        player1.push_back(deck[i]);
    }
    for (int i = 26; i < 52; i++)
    {
        player2.push_back(deck[i]);
    }

    // Print the players' hands
    cout << "Player 1's hand:\n";
    for (int i = 0; i < 26; i++)
    {
        cout << player1[i] << endl;
    }
    cout << "\nPlayer 2's hand:\n";
    for (int i = 0; i < 26; i++)
    {
        cout << player2[i] << endl;
    }

    return 0;
}
