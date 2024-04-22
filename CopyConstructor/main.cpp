// #include<iostream> 
// #include<cstring>  //for cstyle string funcitons
// #include<cctype>  //for character based functions
#include<bits/stdc++.h>
using namespace std;
class Player
{
    private:
        string name;
        int health;
        int xp;
    public:
        string get_name(){return name;}
        int get_health(){return health;}
        int get_xp(){return xp;}
        Player(string name_val="None",int health_val=0,int xp_val=0);

        //Copy constructor
        Player(const Player & source);

        ~Player(){cout<<"destructor called for:"<<name<<endl;}

};

Player::Player(string name_val,int health_val,int xp_val):name(name_val),health(health_val),xp(xp_val)
{
    cout << "Three args constructor for " << name << endl;
}

Player::Player(const Player&source):name(source.name),health(source.health),xp(source.xp)
{
    cout<<"Copy COnstructor - made copy of: "<<source.name<<endl;
}

void displayPlayer(Player p)
{
    cout<<"Name: "<<p.get_name()<<endl;
    cout<<"Health: "<<p.get_health()<<endl;
    cout<<"XP: "<<p.get_xp()<<endl;
}
int main()
{
    Player empty{"XXX",100,29};
    Player my_new_obj{empty};
    displayPlayer(empty);
    Player frank("Frank");
    Player hero("Hero",100);
    Player villian("Villian",100,44);
    return 0;
}