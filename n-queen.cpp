// Recursion and Backtracking
// N-Queens Problem
#include <bits/stdc++.h>
#define N 4
using namespace std;

void printTheSolution(int  board[N][N]){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++)
            printf(" %d ", board[i][j]);
        printf("\n");
    }
}

bool isSafe(int board[N][N] , int row , int col){
    int i , j ;
    //check for row
    for(int i = 0 ; i < col ; i++)
        if(board[row][i])
            return false;

    // check for upper diagonal on left side
    for(int i = row , j = col ; i >= 0 && j >= 0 ; i-- , j--)
        if(board[i][j])
            return false;

    //check for lower diagonal on left side
    for(int i = row , j = col ; j >= 0 && i < N ; i++ , j--)
        if(board[i][j])
            return false;
    
    return true;
}

bool solveNQUntil(int board[][] , int col){
    
}

bool solveNQ(){
    int board[N][N] = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };
    if(solveNQUntil(board , 0) == false){
        cout << "Solution Does Not Exist ! ";
        return false;
    }

    printTheSolution(board);
    return true;
}

int main(){
    solveNQ();
    return 0;
}