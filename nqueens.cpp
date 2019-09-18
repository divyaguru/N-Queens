#include <iostream>
using namespace std;

int **board;
    
void createBoard(int n) {
    board = new int*[n];
    for(int i=0; i<n; i++){
        board[i] = new int [n];
    }
    /*
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            ;
        }
    }*/
}

int isDangerous(int p, int q, int n){
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
    cout<<"\nn="<<n;
    if(n==0) return 1;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(isDangerous(i,j,n) == 1) continue;
            else{
                board[i][j] = 1;
                cout<<"board n-1 "<<n-1<<"\n";
                if(nqueens(n-1)==1){ //that means we have arrived to a solution
                    return 1;
                }
            }
            
            board[i][j]==0; //undo-ing all changes that do not lead to a solution
            
            cout<<"j="<<j;
        }
        cout<<"\ni="<<i;
    }
    
    return 0;
}


void printBoard(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void deleteBoard(int n){
    for(int i=0; i<n; i++){
        delete[] board[i];
    }
    delete[] board;
}

int main(){
    int n;
    cin>>n;

    createBoard(n);
    
    int x = nqueens(n);
    
    if(x==1) cout<<"YES\n";
    else cout<<"NO\n";
    
    printBoard(n);
    deleteBoard(n);

    return 0;
}

