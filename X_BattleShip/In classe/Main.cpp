/*
** main.cpp-Il programma che gioca a Battaglia Navale
** Vignali Nicolò
*/

#include <iostream>
#include "BattleShip.cpp"
using namespace std;

int main(){
    cout<<"Gioco della Battaglia Navale-Buon divertimento"<<endl;
    BattleShip gioco;
    gioco.play();
    cout<<"GAME OVER"<<endl;
}