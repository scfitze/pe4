#include <iostream>
#include <string>

using namespace std;

const int N = 3; //size of array

//0 is O in tic tac toe
//1 is X, and 2 means the board is empty


void DisplayBoard(int** arr){
    for(int i = 0; i <N; ++i){
        for(int j= 0; j<N; ++j){
            cout << arr[i][j];
        }
        cout << endl;
    }
}

int** CreateBoard(){
    int** arr = new int*[N];
    for(int i =0; i < N; ++i){
        arr[i] = new int[N];
        for(int j = 0; j<N; ++j){
            arr[i][j] = 2;
        }
    }
    return arr;
}

int GetPlayerChoice(int **arr){
    cout << "Where on the board would you like to go to?" << endl;
    cout << "First choose the row";
    string i;
    cin >> i;
    int i1 = stoi(i);
    cout << "Now choose the colum";
    string j;
    cin >> j;
    int j1 = stoi(j);
    return arr[i1][j1];
}

int main(){
    int **arr;
    arr = CreateBoard();
    DisplayBoard(arr);
    cout << "Let's Play Tic-Tac-Toe!" << endl;
    int turns = 0;
    bool whoTurn = true; //true if player 1, false for player 2
    while(turns <= 9){
        //whoTurn = true;
        GetPlayerChoice(arr);
        //whoTurn = false; 
        turns++;
        DisplayBoard(arr);
    }
    return 0;
}

//helpful resources: https://www.youtube.com/watch?v=g1Bu4FiJVyQ