#define NORMAL_1_FPS " _/=_  |#^/  /*%|   /|  "
#define RUN_1_FPS "!@#$"
#define RUN_2_FPS "!@#!"
#define RUN_3_FPS ""
#define RUN_4_FPS ""
#define RUN_5_FPS ""
//先来这么多
using namespace std;
typedef struct _WIN_struct
    {
	int startx, starty;
	int height, width;
    }WIN;
class Player
{
private:
    WINDOW* PLAYER_LOCAL_WIN;
    WIN WIN_IMFOR;
    //记录玩家窗口位置
    unsigned int atk;
    int health;
    enum
    {
        P_UP = 0,
        P_DOWN = 1,
        P_LEFT = 2,
        P_RIGHT = 3
    };
public:
    Player(unsigned int attack,int hel);
    Player();
    ~Player();
    int health_up(int i);
    int atk_up(int i);
    bool Player_move_f(int to);
};