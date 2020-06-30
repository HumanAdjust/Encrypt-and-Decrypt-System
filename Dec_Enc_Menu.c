#include <stdio.h>
#include <windows.h>
#include <string.h>

void title();

int main() {
	int input_menu;
	system("title Decrypt and Encrypt System");
	system("cls");
	title();
	Sleep(2000);
	system("cls");

re_input:
	printf("원하시는 옵션을 선택하세요.\n");
	printf("(1)암호화 (2)복호화 (3)종료-->");
	scanf("%d", &input_menu);

	if (input_menu == 1) {
		Sleep(1000);
		WinExec("Enc_System.exe", SW_SHOW);
	}
	else if (input_menu == 2) {
		Sleep(1000);
		WinExec("Dec_System.exe", SW_SHOW);
	}
	else if (input_menu == 3) {
		printf("시스템을 종료중입니다...");
		Sleep(2000);
		system("cls");
		WinExec("Net_Start.exe", SW_SHOW);
	}
	else {
		printf("값을 잘못 입력하셨습니다.\n");
		Sleep(2000);
		system("cls");
		goto re_input;
	}
}

void title() {
	printf("--------------------------------------------------------------------\n");
	printf("\n\t\t\t암호화/복호화 시스템\n\n");
	printf("--------------------------------------------------------------------\n");
	printf("\n\t\t  ⓒBy EnSec Security Solution™\n\n");
}