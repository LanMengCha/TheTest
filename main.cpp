#include "header.h"
using namespace std;
int main()
{
    int *row;row = new int;int *col;col = new int;//行数和列数
    initscr();//初始化
    start_color();//开启颜色功能
    noecho();//终端字符不回显
    getmaxyx(stdscr,*row,*col);//获取长宽的函数，stdscr是默认窗口名
    if (*row < 32 || *col < 16)
    {
        char mesg [] = "your terminal is too small to open the game";//string
        mvprintw(*row/2,*col/2,"%s",mesg); 
        delete row,col;
        getch();
        endwin();
        return 0;
    }
    else
    {
        wborder(stdscr,'.','.','.','.','+','+','+','+');
        mvprintw(2,2,"loading...");
        getch();
        printw("\b\b\b\b\b\b\b\b\b\b");
    }
    move(11,5);
    WINDOW *notice = init_window(1,1,34,32);
    wborder(notice, ' ', '|', '-', '-', '+', '+', '+', '+');
    string *i = new string; *i = "Welcome!_Process\n S to start the game:\n\n F1 to exit the game:\n\n C to set up the game:\n\n $>>:_\n---------------------------------";
    //12line
    print_win(notice,1,1,i);
    *i = "";
    print_win(notice,12,1,i);
    wrefresh(notice);
    delete i;
    refresh();
    getch();
    destroy_win(notice);
    endwin();//释放内存
    return 0;
}

