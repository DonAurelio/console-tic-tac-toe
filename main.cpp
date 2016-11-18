#include "triqui.h"
#include <iostream>

using namespace std;
int main(){
	Triqui * game = new Triqui();
	game->printState();
	cout << "Verticals " << game->checkVerticals() << endl;
	cout << "Horizontals " << game->checkHorizontals() << endl;
	cout << "Lef Diagonal " << game->checkLeftDiagonal() << endl;
	cout << "Righ Diagonal " << game->checkRightDiagonal() << endl;
	cout << "Player " << game->getPlayer() << endl;
	cout << "Put in 1,1 " << game->put(1,1) << endl;
	game->printState();
	cout << "Player " << game->getPlayer() << endl;
	cout << "Put in 1,1 " << game->put(1,1) << endl;
	game->printState();
	cout << "Player " << game->getPlayer() << endl;
	cout << "Put in 1,2 " << game->put(1,2) << endl;
	game->printState();
	cout << "Player " << game->getPlayer() << endl;
	cout << "Put in 0,0 " << game->put(0,0) << endl;
	game->printState();
	cout << "Player " << game->getPlayer() << endl;
	cout << "Put in 2,0 " << game->put(2,0) << endl;
	game->printState();
	cout << "Player " << game->getPlayer() << endl;
	cout << "Put in 2,0 " << game->put(2,2) << endl;
	game->printState();
	
	delete game;
	return 0;
}