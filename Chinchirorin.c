#include <stdio.h>

int money1, money2;
char com[5];

int main(void) {

	do {

		help();

		if (com == "help") {

			printf("-----�`���`���R�}���h�ꗗ-----\n");
			printf("help / ���̃y�[�W��\�����܂�\n");
			printf("rule / ���[���̈ꗗ��\�����܂�\n");
			printf("new / �V�����Q�[�����J�n���܂�\n");
			printf("stop / �Q�[�����I�����܂�\n");

		}

		else if (com == "rule") {

			printf("====================\n");
			printf("���ꗗ: [1:1:1 jackpot�`�����X] [����ȊO�̎O���� �]����]\n");
			printf("[�o�ڍ��v10 man10] [1�E2�E3 �C�`�E�j�E�T���E�ް!!] [�o�ڍ��v5 dan5]\n");
			printf("���ꗗ: [�������Ďc�肪�E�E ���̐���������]\n\n");
			printf("�z����: �w�T�C�R�[!!:4�{��(�e�̂�)�x\n");
			printf("�z����: �w�C�`�E�j�E�T���E�ް!! 2.5�{���x �w�]����:3�{���x\n");
			printf("�wman10:2�{���x�wdan5:2�{���x �ʏ�:1�{��/��\n");

		}

	} while (com == "stop");

	return 0;

}

int help() {

	com[0] = '\0';
	printf("�`���`�������ւ悤����:)\n");
	printf("help�Ɠ��͂���ƃR�}���h�ꗗ������܂��I\n");
	printf("command:");
	scanf("%s", com);

}