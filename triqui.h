# ifndef TRIQUI_H
# define TRIQUI_H

# define DIM 3

# include "stdio.h"

class Triqui {

	public:
		Triqui();
		~Triqui();
		void printState();
		bool put(int i,int j);
		int * get();

		int *** board;

	//private:
		int * player;
		int getPlayer();
		void switchPlayer();
		int checkVerticals();
		int checkHorizontals();
		int checkLeftDiagonal();
		int checkRightDiagonal();
};

# endif