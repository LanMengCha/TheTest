#include "header.h"
//using namespace std;
WINDOW *init_window(int start_y,int start_x,int height,int width);//产生窗口函数
void print_win(WINDOW *l_win,string game_string);
int main()
{
    int row,col;//行数和列数
    initscr();//初始化
    start_color();//开启颜色功能
    noecho();//终端字符不回显
    getmaxyx(stdscr,row,col);//获取长宽的函数，stdscr是默认窗口名
     

    
    endwin();//释放内存
    return 0;
}
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

