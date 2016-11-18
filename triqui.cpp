# include "triqui.h"

Triqui::Triqui(){
	
	this->player = new int;
	*this->player = 1;

	this->board = new int ** [DIM];
	for(int i=0;i<DIM;i++){
		this->board[i] = new int * [DIM];
		for(int j=0;j<DIM;j++){
			this->board[i][j] = new int;
			*this->board[i][j] = 0;
		}
	}
	
}

Triqui::~Triqui(){
	for(int i=0;i<DIM;i++){
		for(int j=0;j<DIM;j++){
			delete this->board[i][j];
		}
		delete [] this->board[i];
	}
	delete [] this->board;
}

void Triqui::printState(){
	for(int i=0;i<DIM;i++){
		for(int j=0;j<DIM;j++){
			printf("%d ",*this->board[i][j]);
		}
		printf("\n");
	}
}

int Triqui::checkVerticals(){
	int count = 0;
	for(int i=0;i<DIM;i++){
		for(int j=0;j<DIM;j++){
			count += *this->board[j][i];
			if(count == 3 || count == 6)
				return count;
		}
		count = 0;
	}
	return 0;
}

int Triqui::checkHorizontals(){
	int count = 0;
	for(int i=0;i<DIM;i++){
		for(int j=0;j<DIM;j++){
			count += *this->board[i][j];
			if(count == 3 || count == 6)
				return count;
		}
		count = 0;
	}
	return 0;
}

int Triqui::checkLeftDiagonal(){
	int count = 0;
	count += *this->board[0][0];
	count += *this->board[1][1];
	count += *this->board[2][2];

	if(count == 3 || count == 6)
		return count;
	return 0;
}

int Triqui::checkRightDiagonal(){
	int count = 0;
	count += *this->board[0][2];
	count += *this->board[1][1];
	count += *this->board[2][0];

	if(count == 3 || count == 6)
		return count;
	return 0;
}

bool Triqui::put(int i,int j){
	if(*this->board[i][j] == 0){
		*this->board[i][j] = this->getPlayer();
		this->switchPlayer();
		return true;
	}
	return false;
}

int Triqui::getPlayer(){
	return *this->player;
}

void Triqui::switchPlayer(){
	if(*this->player == 1){
		*this->player = 2;
	}else{
		*this->player = 1;
	}
}
