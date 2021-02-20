void result(int winner){
    printf("\n");
    switch(winner){
      	   case DRAW:   printf("引き分け\t");    break;
           case MARU:   printf("'O' の勝ち\t");  break;
           case BATSU:  printf("'X' の勝ち\t");  break;
    }
    printf("またね！\n");
}
