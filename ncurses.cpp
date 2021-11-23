#include<ncurses.h>
using namespace std;

int main(){
	initscr();
	
	mvprintw(13,47,"Naufal Elliando Fatahillah");
	
	refresh();
	
	getch();
	
	endwin();
}
