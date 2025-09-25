#include<iostream>
using namespace std;

// Function to check if a move is safe
bool isSafe(char maze[][3], int row, int col, int newX, int newY, bool visited[][3]) {
    if(newX >= 0 && newX < row && newY >= 0 && newY < col && maze[newX][newY] == '.' && !visited[newX][newY]) {
        return true;
    } 
    return false;
}

// Recursive function to find all paths from src to dest
void solve(char maze[][3], int row, int col, int srcX, int srcY, string output, int destX, int destY, bool visited[][3]) {
    if(srcX == destX && srcY == destY) {
        cout << output << endl;
        return;
    }

    // Mark current cell as visited
    visited[srcX][srcY] = true;

    // Move Up
    int newX = srcX - 1;
    int newY = srcY;
    if(isSafe(maze, row, col, newX, newY, visited)) {
        solve(maze, row, col, newX, newY, output + 'U', destX, destY, visited);
    }

    // Move Down
    newX = srcX + 1;
    newY = srcY;
    if(isSafe(maze, row, col, newX, newY, visited)) {
        solve(maze, row, col, newX, newY, output + 'D', destX, destY, visited);
    }

    // Move Left
    newX = srcX;
    newY = srcY - 1;
    if(isSafe(maze, row, col, newX, newY, visited)) {
        solve(maze, row, col, newX, newY, output + 'L', destX, destY, visited);
    }

    // Move Right
    newX = srcX;
    newY = srcY + 1;
    if(isSafe(maze, row, col, newX, newY, visited)) {
        solve(maze, row, col, newX, newY, output + 'R', destX, destY, visited);
    }

    // Backtrack
    visited[srcX][srcY] = false;
}

int main() {
    char maze[3][3] = {
        {'.', '.', '.'},
        {'.', '-', '-'},
        {'.', '.', '.'}
    };

    int row = 3;
    int col = 3;
    int srcX = 0;
    int srcY = 0;
    int destX = 2;
    int destY = 2;
    string output = "";
    bool visited[3][3] = { {false, false, false},
                           {false, false, false},
                           {false, false, false} };

    solve(maze, row, col, srcX, srcY, output, destX, destY, visited);

    return 0;
}
