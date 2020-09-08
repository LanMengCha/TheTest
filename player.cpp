#include "header.h"
//玩家类
class player
{
    public:
	player(int hp,unsigned int atk);//构造函数
	~player();
	
    private:
        int health;
	unsigned int attack;
}
//类函数定义：
player::player(int hp,unsigned int atk)
{
    health = hp;
    attack = atk;
}//构造函数函数体
player::~player()
{
    printw("GAME_OVER");
    return 0;
}
