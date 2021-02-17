#include <iostream>
#include <string>

using namespace std;

const int N = 3; //size of array

//1 is O in tic tac toe
//2 is X, and 0 means the board is empty


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
            arr[i][j] = 0;
        }
    }
    return arr;
}

int* GetPlayerChoice(int **arr){
    cout << "Where on the board would you like to go to?" << endl;
    cout << "First choose the row (0,1,2): ";
    string i;
    cin >> i;
    int i1 = stoi(i);
    cout << "Now choose the colum (0,1,2): ";
    string j;
    cin >> j;
    int j1 = stoi(j);
    int* location;
    location = &(arr[i1][j1]);
    return location;
}

void PlaceMarker(int* location, const int marker) {
    *(location) = marker;
}

int main(){
    int **arr;
    arr = CreateBoard();
    DisplayBoard(arr);
    cout << "Let's Play Tic-Tac-Toe!" << endl;
    int turns = 0;
    int* loc;
    /*DisplayBoard(arr);
    loc = GetPlayerChoice(arr);
    *(loc) = 1;
    DisplayBoard(arr);*/

    while(turns < 9){
        //first player 
        loc = GetPlayerChoice(arr);
        PlaceMarker(loc, 1);
        DisplayBoard(arr);
        turns++;
        //second player
        loc = GetPlayerChoice(arr);
        PlaceMarker(loc, 2);
        DisplayBoard(arr);
        turns++;
    }
    return 0;
}

//helpful resources: https://www.youtube.com/watch?v=g1Bu4FiJVyQ