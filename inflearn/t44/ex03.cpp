// enum

#include <stdio.h>

enum EGAMEState {
	GAMESTATE_MAINMENU = 0, // �߰��� ������ ���ص� 
	GAMESTATE_PLAYING = 1, // �ڵ����� ��� ����
	GAMESTATE_PAUSED,
	GAMESTATE_GAMEOVER = 3
};

/*
const int GAMESTATE_MAINMENU = 0;
const int GAMESTATE_PLAYING = 1;
const int GAMESTATE_PAUSED = 2;
const int GAMESTATE_GAMEOVER = 3;
*/


int main() {
	int currState = GAMESTATE_MAINMENU;

	while (true) {
		switch (currState)
		{
		case GAMESTATE_MAINMENU:
			break;
		case GAMESTATE_PLAYING:
			break;
		case GAMESTATE_PAUSED:
			break;
		case GAMESTATE_GAMEOVER:
			break;
		}
	}
}