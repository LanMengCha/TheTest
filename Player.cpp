#include "header.h"

Player::Player(unsigned int attack,int hel)
{
    WIN_IMFOR.startx = 1;
    WIN_IMFOR.starty = 1;
    WIN_IMFOR.width = 6;
    WIN_IMFOR.height = 4;
    PLAYER_LOCAL_WIN = init_window(WIN_IMFOR);
    atk = attack;
    health = hel;
    print_win(PLAYER_LOCAL_WIN,0,0,NORMAL_1_FPS);

}

Player::~Player()
{
    destroy_win(PLAYER_LOCAL_WIN);
}

//构造函数，析构函数

int Player::health_up(int i)
{
    if (i == 0)
    {
        return -1;
    }
    else
    {
        health += i;
    }
    
    return health;
    
}
int Player::atk_up(int i)
{
    int j = atk;
    j += i;

    if (j < 0)
    {
        return -1;
    }
    else
    {
        atk += i;
        return atk;
    }

}
bool Player::Player_move_f(int to)
{
    if (to == P_UP)
    {
        WIN_IMFOR.starty -= 1;
        mvwin(PLAYER_LOCAL_WIN,WIN_IMFOR.startx,WIN_IMFOR.starty);
    }
    else if (to == P_DOWN)
    {
        WIN_IMFOR.starty += 1;
        mvwin(PLAYER_LOCAL_WIN,WIN_IMFOR.startx,WIN_IMFOR.starty);
    }
    else if (to == P_LEFT)
    {
        WIN_IMFOR.startx -= 1;
        mvwin(PLAYER_LOCAL_WIN,WIN_IMFOR.startx,WIN_IMFOR.starty);
    }
    else if (to == P_RIGHT)
    {
        WIN_IMFOR.startx += 1;
        mvwin(PLAYER_LOCAL_WIN,WIN_IMFOR.startx,WIN_IMFOR.starty);
    }
    else
    {
        /*以后使用弹出窗口报告错误*/
        return 1;
    }
}
