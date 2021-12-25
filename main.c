#include <stdio.h>

typedef struct snake{
    int x; // 节点的x坐标
    int y; // 节点的y坐标
    struct snake *next; // 蛇身的下一个节点
}snake;

int score = 0, add = 0; // 总得分与每次吃食物的得分
int HightScore = 1000; // 最高分
int status,sleepTime = 200; // 蛇前进状态，每次运行的时间间隔
snake *head,*food; // 蛇头指针，食物指针
snake *p; // 遍历蛇时用到的指针
int endGamesStatus = 0;// 游戏结束的情况：撞到墙，咬到自己，主动退出游戏

int main(){
    printf("hello\n");
    printf("score = %d\n",score);
    printf("add = %d\n",add);
    printf("HightScore = %d\n",HightScore);
    printf("head = %p\n",head);
    printf("food = %p\n",food);
}

// 函数声明
void gotoxy(int x,int y);// 设置光标位置
int color(int c);// 更改文字颜色
void printSnake; // // 字符画蛇
