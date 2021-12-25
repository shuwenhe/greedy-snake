#include <ncurses.h>
#include <stdlib.h>
#include <time.h>

typedef struct spart{
    int x; // 节点的x坐标
    int y; // 节点的y坐标
}snakePart;

enum direction
{
    UP, // 蛇头向上移动
    DOWN, // 蛇头向下移动
    RIGHT,// 蛇头向右移动
    LEFT// 蛇头向左移动
};
WINDOW *snakeys_world;// 定义贪吃蛇窗口
int SnakeLength = 2;// 蛇的长度，初始化为1
int Score = 0;// 成绩分数
snakePart snake[120];// 设置蛇坐标-没用链表
snakePart food; // 食物
snakePart tem;
int direction = UP; // 蛇的方向
int ch;// 获取输入内容
int speed = 600; // 

// 初始化函数
void Initialization(void); // 初始化函数
void WaitGame(void);// 等待游戏
void Game(void);// 游戏
void GameOver(void);// 游戏结束
void CreateSnake(void);// 创建蛇
void RandomFood(void);// 随机食物

int main(){
    Initialization();
    WaitGame();
    Game();
    return 0;
}

// 初始化屏幕
void Initialization(void){
    initscr();
    noecho();
    cbreak();
    timeout(speed);
    keypad(speed);
    keypad(stdscr,TRUE);
    int offsetx = (COLS - WORLD_WIDTH) / 2;
    int offsety = (LINES - WORLD_HEIGHT) / 2;
    snakeys_world = newwin(WORLD_HEIGHT,WORLD_WIDTH,offsety,offsetx);
}

