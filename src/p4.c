void printBoard(){
    char bd[9];
    int i;
    for(i=0; i<9; i++){
        if(board[i]==MARU)        bd[i]='O';
        else if(board[i]==BATSU)  bd[i]='X';
        else                      bd[i]='0' + i;
    }
    printf("\n/---|---|---\\\n");
    printf("| %c | %c | %c |\n", bd[0],bd[1],bd[2]);
    printf("|---|---|---|\n");
    printf("| %c | %c | %c |\n", bd[3],bd[4],bd[5]);
    printf("|---|---|---|\n");
    printf("| %c | %c | %c |\n", bd[6],bd[7],bd[8]);
    printf("\\---|---|---/\n");
}
