#include <iostream>
#include <vector>
using namespace std;

struct Character{
    string name;
    int HP , Armor , Damage ;

    Character(const string &name, int hp, int armor, int damage) : name(name), HP(hp), Armor(armor), Damage(damage) {

    }
     Character(){}

    void defense_routine( const Character& player2 ){

        HP = HP - (player2.Damage - Armor);
    }

    int effective_dagame(const Character& player2){

        return  player2.Damage - Armor;
    }
};

void menu(){

    Character player;
    vector<Character> personajes ;
    player.name = "Firebat" ;
    player.HP = 50;
    player.Armor =1;
    player.Damage = 16;
    personajes.push_back(player);
    player.name = "Ghost" ;
    player.HP = 45;
    player.Armor =0;
    player.Damage = 10;
    personajes.push_back(player);
    player.name = "Goliath" ;
    player.HP = 125;
    player.Armor =1;
    player.Damage = 12;
    personajes.push_back(player);
    player.name = "Marine" ;
    player.HP = 40;
    player.Armor =0;
    player.Damage = 6;
    personajes.push_back(player);
    player.name = "Samir Duran" ;
    player.HP = 200;
    player.Armor =2;
    player.Damage = 25;
    personajes.push_back(player);
    player.name = "SCV" ;
    player.HP = 60;
    player.Armor =0;
    player.Damage = 5;
    personajes.push_back(player);
    player.name = "Siege Tank" ;
    player.HP = 150;
    player.Armor =1;
    player.Damage = 70;
    personajes.push_back(player);
    player.name = "Vulture" ;
    player.HP = 80;
    player.Armor =0;
    player.Damage = 20;
    personajes.push_back(player);
    cout<<" SELECT A CHARACTER ATTACK: "
          "1-->Firebat , 2-->Ghost ... " <<endl;
    int op;
    cin>>op;
    cout<<endl;
    cout<<" SELECT A CHARACTER DEFENSE: "
          "1-->Firebat , 2-->Ghost ... " <<endl;
    int op2;
    cin>>op2;
    cout<<endl;

    cout<<"ATTACKER NAME     :"<<personajes[op-1].name<<endl;
    cout<<"DEFENSOR NAME     :"<<personajes[op2-1].name<<endl;
    cout<<"ATK DAMAGE POINTS :"<<personajes[op-1].Damage<<endl;
    cout<<"DFS INITIAL HP    :"<<personajes[op2-1].HP<<endl;
    cout<<"DFS ARMOR         :"<<personajes[op2-1].Armor<<endl;
    cout<<"EFFECTIVE DAMAGE  :"<<personajes[op2-1].effective_dagame(personajes[op-1])<<endl;
    personajes[op2-1].defense_routine(personajes[op-1]);
    cout<<"DFS HP LEFT       :"<<personajes[op2-1].HP<<endl;



    }

int main(){
   menu();
    return 0;
}