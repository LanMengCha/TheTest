#include <ncurses.h>
#include <string>//字符串库
#include <vector>//向量模板
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>//产生随机数
#include <unistd.h>//Linux睡眠
#include "Player.h"
using std::string;
//const int
//const int
//const int
//unsigned const int
WINDOW* init_window(int start_x,int start_y,int width,int height);
WINDOW* init_window(WIN l_win_i);
WINDOW* init_subwin(WINDOW *local_win,int start_x,int start_y,int width,int height);
WINDOW* init_subwin(WINDOW *local_win,WIN INFO);
void destroy_win(WINDOW *local_win);
//窗口打印函数重载：
void print_win(WINDOW *local_win,int start_x,int start_y,string *message);
void print_win(WINDOW *local_win,int start_x,int start_y,const char * message);
