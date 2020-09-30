#include "header.h"
using namespace std;
//窗口生成函数（构造？）
WINDOW* init_window(int start_x,int start_y,int width,int height)
{
    WINDOW *l_win = newwin(height,width,start_y,start_x);//创建窗口
    box(l_win,0,0);//给出默认字符，垂直和水平行
    wrefresh(l_win);//显示窗口
    return l_win;
}

WINDOW* init_subwin(WINDOW *local_win,int start_x,int start_y,int width,int height)
{
	WINDOW *b_win =subwin(local_win,width,height,start_y,start_x);
	box(b_win,0,0);
	wrefresh(b_win);
	return b_win;
}
void destroy_win(WINDOW *local_win)
{	
	/* delete window
	 */
	wborder(local_win, ' ', ' ', ' ',' ',' ',' ',' ',' ');
	/* The parameters taken are 
	 * 1. win: the window on which to operate
	 * 2. ls: character to be used for the left side of the window 
	 * 3. rs: character to be used for the right side of the window 
	 * 4. ts: character to be used for the top side of the window 
	 * 5. bs: character to be used for the bottom side of the window 
	 * 6. tl: character to be used for the top left corner of the window 
	 * 7. tr: character to be used for the top right corner of the window 
	 * 8. bl: character to be used for the bottom left corner of the window 
	 * 9. br: character to be used for the bottom right corner of the window
	 */
	wrefresh(local_win);
	delwin(local_win);
}
//窗口打印函数
void print_win(WINDOW *local_win,int start_x,int start_y,string *message)
{
    wmove(local_win,start_y,start_x);
    wprintw(local_win,"%s",message->c_str());
    wrefresh(local_win);
}

void print_win(WINDOW *local_win,int start_x,int start_y,const char * message)
{
    wmove(local_win,start_y,start_x);
    wprintw(local_win,"%s",message);
    wrefresh(local_win);
}
