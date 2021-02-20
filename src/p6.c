int slotNum(int turn){
    char* fig="";
    if(turn==MARU)		fig="'O'";
    else if(turn==BATSU)	fig="'X'";
    int num;
    do{
        printf("\n %s さんのturnです\n石を置く場所 0 〜 8 を指定して下さい：", fig);
        /* while( getchar() != '\n' );  *//* 標準入力バッファのクリア */
        scanf("%d", &num);
        if(!(0<=num && num<9)){
            printf("再指定：0 〜 8 を指定して下さい");
            continue;
        }
        if(board[num]!=num){
            printf("再指定：そこには既に石が置かれています\n");
            continue;
        }
        break;
    }while( 1 );
    return num;
}
