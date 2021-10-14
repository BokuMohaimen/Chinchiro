#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int money1, money2;

int i, ii, iii;

char com[5];

int main(void) {

	do {

		srand((unsigned int)time(NULL));

		printf("\n\n  %d  %d  %d\n\n", 1 + rand() % 6, 1 + rand() % 6, 1 + rand() % 6);

		help();

		if (com == "help") {

			printf("=======コマンド一覧=======\n");
			printf("help / このページを表示します\n");
			printf("rule / ルールの一覧を表示します\n");
			printf("new / 新しくゲームを開始します\n");
			printf("stop / ゲームを終了します\n");

		}

		else if (com == "rule") {

			printf("=======チンチロリン=======\n");
			printf("役一覧: [1:1:1 jackpotチャンス] [それ以外の三つ揃い ゾロメ]\n");
			printf("[出目合計10 man10] [1・2・3 イチ・ニ・サン・ﾀﾞｰ!!] [出目合計5 dan5]\n");
			printf("役一覧: [二つそろって残りが・・ その数字が強さ]\n\n");
			printf("配当率: 『サイコー!!:4倍勝(親のみ)』\n");
			printf("配当率: 『イチ・ニ・サン・ﾀﾞｰ!! 2.5倍勝』 『ゾロメ:3倍勝』\n");
			printf("『man10:2倍勝』『dan5:2倍負』 通常:1倍負/勝\n");

		}

	} while (com == "stop");

	return 0;

}

int help() {

	com[0] = '\0';
	printf("チンチロリンへようこそ:)\n");
	printf("helpと入力するとコマンド一覧が見れます！\n");
	printf("command:");
	scanf("%s", com);

}
