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

int main(){
    int **arr;
    arr = CreateBoard();
    DisplayBoard(arr);
    return 0;
}
