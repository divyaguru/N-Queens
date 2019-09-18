#include <iostream>
using namespace std;
int **board;


void creatBoard(int n) {
    board = new int*[n];
    for(int i=0; i<n; i++){
        board[i] = new int [n];
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            ;
        }
    }
}

int isDangerous(int p, int q){
    for(int i=0; i<n; i++){
        if(i==p){
            for(int k=0; k<n; k++){
                if(board[i][k] == 1) return 1;
            }
        }
        if(board[i][q] == 1) return 1;
        
        for(int j=0; j<n; j++){
            if((p+q == i+j) && board[i][j]==1){
                return 1;
            }
            if((p-q == i-j) && board[i][j]==1){
                return 1;
            }
        }
    }
    return 0;
}

int nqueens(int n){
    if(n==0){
        return 1;
    }
    
    for(int i=0; i<n; i++){
        for(int=0; j<n; j++){
            
        }
    }
    
    return 0;
}

int main()
{
    int n;
    cin>>n;
    
    createBoard(n);
    
    nqueens(n);
    
    //nqueens(n)

    return 0;
}