#include <bits/stdc++.h>
using namespace std;

bool reDefine(vector<vector<char>> &board,int size) {
    bool **visited = new bool*[size];
    for(int i=0;i<size;i++) {
        visited[i] = new bool[size];
        for(int j=0;j<size;j++) {
            visited[i][j] = false;
        }
    }
    bool flag = false;
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++) {
            bool Down=true,Right=true;
            if (i != size-1) {
                if (board[i][j] != board[i+1][j]) {
                    Down = false;
                }
            } else Down = false;
            if (j != size-1) {
                if (board[i][j] != board[i][j+1]) {
                    Right = false;
                }
            } else Right = false;
            if (Down||Right) {
                visited[i][j] = true;
                continue;
            } else {
                bool Up=true,Left=true;
                if (i != 0) {
                    if (board[i][j] != board[i-1][j]) {
                        flag = true;
                        board[i][j] = board[i-1][j];
                        visited[i][j] = true;
                        continue;
                    }
                } else Up = false;
                if (j != 0) {
                    if (board[i][j] != board[i][j-1]) {
                        flag = true;
                        board[i][j] = board[i][j-1];
                        visited[i][j] = true;
                        continue;
                    }
                } else Left = false;
                if (!Up&&!Left) {
                    flag = true;
                    board[i][j] = board[i+1][j];
                    visited[i][j] = true;
                }
            }
        }
    }
    cout << "After: " << endl;
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    return flag;
}

int getWinner (char * path) {
    ifstream file(path);
    if (!file.is_open()) {
        cout << "File not found" << endl;
        return -1;
    }
    int n;
    vector<vector<char>> board;
    file >> n;
    for (int i = 0; i < n; i++) {
        vector<char> row;
        for (int j = 0; j < n; j++) {
            char c;
            file >> c;
            if (file && c != ' ') row.push_back(c);
        }
        board.push_back(row);
    }
    file.close();
    for (bool flag = false; !flag;) {
        flag = !reDefine(board,n);
    }
    int BlackArea = 0, WhiteArea = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 'X') {
                BlackArea++;
            } else if (board[i][j] == 'O') {
                WhiteArea++;
            }
        }
    }
    cout << "Black Area: " << BlackArea << endl;
    cout << "White Area: " << WhiteArea << endl;
    if (BlackArea > WhiteArea) {
        return -1;
    } else if (BlackArea < WhiteArea) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    cout << getWinner("data/1.txt") << endl;
}