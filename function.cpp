#include "header.h"
//using namespace std;
void std_window(void);
//函数原型（我为什么还要写这玩意）
void std_window(void)
{
    initscr();
    raw();
}
//窗口生成函数（构造？）
WINDOW *init_window(int start_y,int start_x,int height,int width)
{
    WINDOW *l_win = newwin(height,width,start_y,start_x);//创建窗口
    box(l_win,0,0);//给出默认字符，垂直和水平行
    wrefresh(l_win);//显示窗口
    return l_win;
}
void print_win(WINDOW *l_win,string game_string)
{
    addstr(l_win,game_string);
    wrefresh();
}

