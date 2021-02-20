int lineSum(int n1, int n2, int n3){
    return board[n1] + board[n2] + board[n3];
}

int checkWinner(){
   int i, line=0;
   for(i=0; i<8; i++){
       switch(i){
          case 0: line=lineSum(0, 1, 2); break;
          case 1: line=lineSum(3, 4, 5); break;
          case 2: line=lineSum(6, 7, 8); break;
          case 3: line=lineSum(0, 3, 6); break;
          case 4: line=lineSum(1, 4, 7); break;
          case 5: line=lineSum(2, 5, 8); break;
          case 6: line=lineSum(0, 4, 8); break;
          case 7: line=lineSum(2, 4, 6); break;
       }
       if(line==3*MARU)		return MARU;
       else if(line==3*BATSU)	return BATSU;
   }
   for(i=0; i<9; i++){
      if(0<=board[i] && board[i]<9)return NEXT;
   }
   return DRAW;
}
