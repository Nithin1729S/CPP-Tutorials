#include<bits/stdc++.h>
using namespace std;
class Player
{
    private:
        string name;
        int health;
        int xp;
    public:
        string get_name() const
        {
            return name;
        }
        void set_name(string name_val)
        {
            this->name=name_val;
        }
        Player();
        Player(string name_val);
        Player(string name_val,int health_val,int xp_val);
};

Player::Player(string name_val,int health_val,int xp_val):name(name_val),health(health_val),xp(xp_val)
{

}

Player::Player():Player("None",0,0)
{

}
Player::Player(string name_val):Player(name_val,0,0)
{

}

void display_player_name(const Player&p)
{
    cout<<p.get_name()<<endl;
}

int main()
{
    const Player villain{"Villian",100,44};
    Player hero{"Hero",100,33};
    display_player_name(villain);
    return 0;
}