//
//  main.c
//  date7.14
//
//  Created by 空谷幽兰 on 16/7/14.
//  Copyright © 2016年 kgbb. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int compute,player,out=1;
    char quit;
    //把游戏做成一个循环,想退出的时候可以退出
    //电脑出拳
    compute=arc4random_uniform(3);
    //    玩家出拳
    while(1== out){
        player=0;
        printf("请出拳:1-剪刀,2-石头,3-布\n");
        fflush(stdin);
        scanf("%d",&player);
        printf("player=%d\n",player);
        if(player<1|| player>3){
            printf("你要退出游戏吗?y-是\n");
//  fflush(stdin)在Xcode里不能清除键盘缓冲区.
            rewind(stdin);
            scanf("%c",&quit);
            printf("quit=%c\n",quit);
            
            if(quit=='y'){
                printf("游戏结束!\n");
                out= 0;
                return 0;
            }else{
                printf("游戏继续!\n");
                //scanf("%d",&player);
            }
        }else if((compute==1 && player==2)||
                 (compute==2 && player== 3 ) ||
                 (compute==3 && player==1 )   )
        {
            printf("你赢了!\n");
        }else if((compute==1 && player==3 )||
                 (compute==2 && player==1 ) ||
                 (compute==3 && player== 2  ) ){
            printf("你输了!\n");
            
        }else{
            printf("平局\n");
        }
        
    }
    return 0;
}
