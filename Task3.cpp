#include <iostream>
#include <vector>

using namespace std;


void display(const vector<vector<char>>& board) {
    cout << "-------------" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "| ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j] << " | ";
        }
        cout << endl << "-------------" << endl;
    }
}


bool check(const vector<vector<char>>& board, char player) {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return 1; 
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return 1;
        }
    }

    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return 1; 
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return 1; 
    }

    return 0;
}

bool isBoardFull(const vector<vector<char>>& board) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ')
                return 0; 
        }
    }
    return 1;
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' '));
    char currentPlayer = 'X';

    cout << "Welcome to Tic-Tac-Toe!" << endl;

    while (1) {
        display(board);

        int r, c;
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> r >> c;

        if (r< 0 || r >= 3 || c < 0 || c >= 3 || board[r][c] != ' ') {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        board[r][c] = currentPlayer;

        if (check(board, currentPlayer)) {
            display(board);
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }

        if (isBoardFull(board)) {
            display(board);
            cout << "It's a draw!" << endl;
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
