#include <stdio.h>

typedef struct snake{
    int x; // 节点的x坐标
    int y; // 节点的y坐标
    struct snake *next; // 蛇身的下一个节点
}snake;

int score = 0, add = 0; // 总得分与每次吃食物的得分
int HightScore = 1000; // 最高分
int status,sleepTime = 200; // 蛇前进状态，每次运行的时间间隔

int main(){
    printf("hello\n");
    printf("score = %d\n",score);
    printf("add = %d\n",add);
    printf("HightScore = %d\n",HightScore);
}