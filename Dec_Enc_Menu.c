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
	printf("���Ͻô� �ɼ��� �����ϼ���.\n");
	printf("(1)��ȣȭ (2)��ȣȭ (3)����-->");
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
		printf("�ý����� �������Դϴ�...");
		Sleep(2000);
		system("cls");
		WinExec("Net_Start.exe", SW_SHOW);
	}
	else {
		printf("���� �߸� �Է��ϼ̽��ϴ�.\n");
		Sleep(2000);
		system("cls");
		goto re_input;
	}
}

void title() {
	printf("--------------------------------------------------------------------\n");
	printf("\n\t\t\t��ȣȭ/��ȣȭ �ý���\n\n");
	printf("--------------------------------------------------------------------\n");
	printf("\n\t\t  ��By EnSec Security Solution��\n\n");
}