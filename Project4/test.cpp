#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"




void meun() {
	printf("***************\n");
	printf("****1.play*****\n");
	printf("****0.exit*****\n");
	printf("***************\n");


}
void game() {
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(mine,ROW,COL);
	DisplayBoard(show, ROW, COL);
	SetMine(mine,ROW,COL);
	DisplayBoard(mine, ROW, COL);
	FindMine(mine,show, ROW, COL);

	printf("ɨ??\n");

}

void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		meun();
		printf("??ѡ??");

		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("?˳???Ϸ\n");
			break;
		default:
			printf("??????ѡ??\n");

			break;
		}
		
	} while (input);
	

}




int main() {
	test();
	return 0;
	
}