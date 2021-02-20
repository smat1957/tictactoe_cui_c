int main(int argc, char *argv[]) {
    /* 先手後手を決定 */
    int turn=BATSU;
    if(1<argc){
        if( !strcmp(argv[1], "-r") ) turn = MARU;
    }
    printf("スタート！ [Tic Tac Toe]\n");
    int winner;
    do{
        /* ①盤面の表示 */
        printBoard();
        /* ②手を入力 */
        int num = slotNum(turn);
        /* ③手を盤面に配置 */
        board[num] = turn;
        /* ④手番の交代 */
        turn = switchTurn(turn);
        /* ⑤勝敗の判定 */
        winner=checkWinner();
    }while(winner==NEXT);
    /* 対戦結果の表示 */
    printBoard();
    result(winner);
    return 0;
}
