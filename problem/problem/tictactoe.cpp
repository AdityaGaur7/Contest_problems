#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
      
      char a[3][3];
      bool flag = true;
      for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){
              cin>>a[i][j];
          }
      }
      
      for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){
             if(a[i][j]==a[i][j+1] && a[i][j+1]==a[i][j+2]){
                 cout<<a[i][j]<<"a"<<endl;
                 break;
             } if(a[i][j]==a[i+1][j] && a[i+1][j]==a[i+1][j]){
                 cout<<a[i][j]<<"b"<<endl;
                   break;
             }if(a[0][0]==a[1][1] && a[1][1]==a[2][2]){
                 cout<<a[0][0]<<"c"<<endl;
                   break;
             }if(a[0][1]==a[1][1] && a[1][1]== a[2][0]){
                 cout<<a[1][1]<<"d"<<endl;
                   break;
             }else{
                //  cout<<"draw"<<endl;
                   break;
             }
             
             
             
          }
      }
       
  }
    return 0;
}


// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;


// char checkWinner(vector<string>& board) {
 
//     for (int i = 0; i < 3; i++) {
//         if (board[i][0] != '.' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
//             return board[i][0];
//         }
//     }

  
//     for (int j = 0; j < 3; j++) {
//         if (board[0][j] != '.' && board[0][j] == board[1][j] && board[1][j] == board[2][j]) {
//             return board[0][j];
//         }
//     }

 
//     if (board[0][0] != '.' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
//         return board[0][0];
//     }

//     if (board[0][2] != '.' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
//         return board[0][2];
//     }

//     return '.';
// }


// void solveTestCase() {
//     vector<string> board(3);
//     for (int i = 0; i < 3; i++) {
//         cin >> board[i];
//     }

//     char winner = checkWinner(board);

//     if (winner == 'X') {
//         cout << "X" << endl;
//     } else if (winner == 'O') {
//         cout << "O" << endl;
//     } else if (winner == '+') {
//         cout << "+" << endl;
//     } else {
//         cout << "DRAW" << endl;
//     }
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         solveTestCase();
//     }

//     return 0;
// }
