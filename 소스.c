#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	int whichgame;

	int cnt1 = 0;//1번게임(카운트)

	int com;
	int user;
	int result[3] = { 0, };  //2번게임 (컴퓨터, 유저, 결과)

	int in, co, cnt2 = 0;
	int n1, n2; //3번게임(컴퓨터, 인간, 변수1, 변수2, 카운트)

	int computerBall[3]; // 컴퓨터의 볼을 저장할 int형 배열 
	int i, j; // 반복을 위한 변수 
	int temp; // 난수 중복 체크를 위한 변수 
	int userBall[3]; // 사용자의 볼을 저장할 int형 배열 
	int count = 1; // 회차를 확인할 변수 9회까지 가능 
	int strike; // 스트라이크의 수를 세기 위한 변수 
	int ball; // 볼의 수를 세기 위한 변수 

	printf("플레이할 게임을 골라주세요");
	printf("\n1. 숫자맞추기 게임");
	printf("\n2. 가위바위보 게임");
	printf("\n3. 배스킨라빈스 게임");
	printf("\n4. 숫자야구 게임");
	printf("\n0. 게임 종료\n");
	scanf("%d", &whichgame);
	switch (whichgame) {
	case 1:
		printf("         ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ \n");
		printf("         ■                                                                          ■\n");
		printf("         ■        ■          ■ ■ ■    ■      ■ ■ ■ ■   ■       ■     ■ ■ ■ ■   ■    ■\n");
		printf("         ■      ■   ■          ■      ■ ■    ■     ■   ■ ■   ■ ■ ■        ■    ■    ■\n");
		printf("         ■     ■     ■        ■ ■     ■      ■     ■   ■       ■         ■     ■    ■\n");
		printf("         ■    ■ ■ ■ ■ ■      ■   ■    ■      ■ ■ ■ ■   ■     ■   ■     ■       ■    ■\n");
		printf("         ■        ■                              ■ ■ ■     ■ ■ ■ ■ ■                ■\n");
		printf("         ■        ■                                ■           ■                    ■\n");
		printf("         ■      ■   ■                            ■   ■         ■                    ■\n");
		printf("         ■    ■       ■                        ■       ■       ■                    ■\n");
		printf("         ■                                                                          ■\n");
		printf("         ■                                                                          ■\n");
		printf("         ■      ■ ■ ■ ■             ■ ■ ■          ■ ■     ■ ■     ■ ■ ■ ■ ■ ■      ■\n");
		printf("         ■    ■                    ■     ■         ■  ■   ■  ■     ■                ■\n");
		printf("         ■   ■                    ■       ■        ■   ■ ■   ■     ■                ■\n");
		printf("         ■  ■      ■ ■ ■ ■       ■ ■ ■ ■ ■ ■       ■    ■    ■     ■ ■ ■ ■ ■ ■      ■\n");
		printf("         ■   ■     ■    ■       ■           ■      ■         ■     ■                ■\n");
		printf("         ■    ■        ■       ■             ■     ■         ■     ■                ■\n");
		printf("         ■      ■ ■ ■ ■       ■               ■    ■         ■     ■ ■ ■ ■ ■ ■      ■\n");
		printf("         ■                                                                          ■\n");
		printf("         ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ \n\n");


		srand(time(NULL));
		int num = rand() % 100 + 1;
		int answer = 0, chance = 5;
		//printf("숫자 : %d\n", num);
		while (1) {
			printf("남은 기회 %d번 \n", chance--);
			printf("숫자를 맞혀보세요 (1~100) : ");
			scanf("%d", &answer);
			if (answer > num) {
				printf("DOWN ↓ \n\n");
			}
			else if (answer < num) {
				printf("UP ↑ \n\n");
			}
			else if (answer == num) {
				printf("정답입니다 !\n\n");
				break;
			}
			else {
				printf("알 수 없는 오류가 발생했어요\n\n");
			}
			if (chance == 0) {
				printf("모든 기회를 사용하였습니다. 다음기회에~!\n\n");
				break;
			}

		}
		break;

	case 2:
		printf("         ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ \n");
		printf("         ■                                                                          ■\n");
		printf("         ■    ■ ■ ■ ■  ■        ■     ■    ■     ■  ■         ■     ■    ■     ■    ■\n");
		printf("         ■         ■   ■ ■   ■     ■  ■    ■     ■  ■ ■    ■     ■  ■    ■ ■ ■ ■    ■\n");
		printf("         ■        ■    ■        ■     ■    ■ ■ ■ ■  ■         ■     ■    ■     ■    ■\n");
		printf("         ■      ■      ■    ■ ■ ■ ■ ■ ■    ■     ■  ■     ■ ■ ■ ■ ■ ■    ■ ■ ■ ■    ■\n");
		printf("         ■    ■        ■        ■     ■    ■ ■ ■ ■  ■         ■     ■       ■       ■\n");
		printf("         ■             ■        ■     ■             ■         ■     ■   ■ ■ ■ ■ ■   ■\n");
		printf("         ■                                                                          ■\n");
		printf("         ■                                                                          ■\n");
		printf("         ■                                                                          ■\n");
		printf("         ■                                                                          ■\n");
		printf("         ■      ■ ■ ■ ■             ■ ■ ■          ■ ■     ■ ■     ■ ■ ■ ■ ■ ■      ■\n");
		printf("         ■    ■                    ■     ■         ■  ■   ■  ■     ■                ■\n");
		printf("         ■   ■                    ■       ■        ■   ■ ■   ■     ■                ■\n");
		printf("         ■  ■      ■ ■ ■ ■       ■ ■ ■ ■ ■ ■       ■    ■    ■     ■ ■ ■ ■ ■ ■      ■\n");
		printf("         ■   ■     ■    ■       ■           ■      ■         ■     ■                ■\n");
		printf("         ■    ■        ■       ■             ■     ■         ■     ■                ■\n");
		printf("         ■      ■ ■ ■ ■       ■               ■    ■         ■     ■ ■ ■ ■ ■ ■      ■\n");
		printf("         ■                                                                          ■\n");
		printf("         ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ \n\n");

		srand((unsigned)time(NULL));
		while (1) {
			com = rand() % 3 + 1;
			printf("         **************** 가위 바위 보 게임 ****************\n");
			printf("(1. 가위 _ 2. 바위 _ 3. 보 _ 0. 종료)\n\n");
			printf("입력해주세요 : ");
			scanf("%d", &user);
			if (user > 0 && user < 4) {
				cnt1++;
				printf("\n컴퓨터 : %s\n", (com == 1 ? "가위" : com == 2 ? "바위" : "보"));
				printf("사용자 : %s\n\n", (user == 1 ? "가위" : user == 2 ? "바위" : "보"));
				if (com == user) {
					printf("(/ω＼) 비겼습니다. \n\n");
					result[1]++;
				}
				else if (((com == 1) && (user == 3)) || ((com == 2) && (user == 1)) || ((com == 3) && (user == 2))) {
					printf("(┬┬_┬┬) 졌습니다.\n\n");
					result[2]++;
				}
				else {
					printf("(￣3￣)r 이겼습니다.\n\n");
					result[0]++;
				}
				printf("%d전 %d승 %d무 %d패\n\n", cnt1, result[0], result[1], result[2]);
			}
			else {
				if (user == 0) {
					printf("게임을 종료합니다.\n");
					break;
				}
				printf("숫자를 제대로 입력해주세요\n\n");
			}
			system("pause");
			system("cls");
		}
		break;

	case 3:
		printf("         ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ \n");
		printf("         ■                                                                          ■\n");
		printf("         ■   ■   ■  ■   ■      ■      ■ ■ ■  ■  ■ ■ ■ ■  ■    ■   ■  ■      ■       ■\n");
		printf("         ■   ■ ■ ■  ■   ■    ■   ■        ■  ■        ■  ■    ■ ■ ■  ■    ■   ■     ■\n");
		printf("         ■   ■   ■  ■ ■ ■  ■       ■   ■ ■   ■  ■ ■ ■ ■  ■ ■  ■   ■  ■  ■       ■   ■\n");
		printf("         ■   ■ ■ ■  ■   ■               ■    ■  ■        ■    ■ ■ ■  ■              ■\n");
		printf("         ■          ■   ■  ■ ■ ■ ■ ■   ■        ■ ■ ■ ■  ■     ■        ■ ■ ■ ■ ■   ■\n");
		printf("         ■          ■   ■              ■ ■ ■ ■           ■     ■ ■ ■ ■              ■\n");
		printf("         ■                                                                          ■\n");
		printf("         ■                                                                          ■\n");
		printf("         ■                                                                          ■\n");
		printf("         ■                                                                          ■\n");
		printf("         ■      ■ ■ ■ ■             ■ ■ ■          ■ ■     ■ ■     ■ ■ ■ ■ ■ ■      ■\n");
		printf("         ■    ■                    ■     ■         ■  ■   ■  ■     ■                ■\n");
		printf("         ■   ■                    ■       ■        ■   ■ ■   ■     ■                ■\n");
		printf("         ■  ■      ■ ■ ■ ■       ■ ■ ■ ■ ■ ■       ■    ■    ■     ■ ■ ■ ■ ■ ■      ■\n");
		printf("         ■   ■     ■    ■       ■           ■      ■         ■     ■                ■\n");
		printf("         ■    ■        ■       ■             ■     ■         ■     ■                ■\n");
		printf("         ■      ■ ■ ■ ■       ■               ■    ■         ■     ■ ■ ■ ■ ■ ■      ■\n");
		printf("         ■                                                                          ■\n");
		printf("         ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ \n\n");
		while (1) {
			if (cnt2 >= 31)
				break;
			else {
				printf("1부터 3까지의 숫자중 하나를 입력 : ");
				scanf("%d", &n1);
				co = cnt2;
				for (in = co + 1; in <= (n1 + co); in++) {
					printf("%d ", in);
					cnt2++;
				}
				printf("\n");

				if (cnt2 == 31) {
					printf("당신이 이겼습니다.");
					break;
				}
				co = cnt2;
				srand(time(NULL));
				n2 = rand() % 3 + 1; //1부터 3까지 난수
				printf("컴퓨터 : %d\n", n2);

				for (in = co + 1; in <= (n2 + co); in++) {
					printf("%d ", in);
					cnt2++;
				}
				printf("\n");

				if (cnt2 == 31) {
					printf("컴퓨터가 이겼습니다.");
					break;
				}
			}
		}
		break;

	case 4:
		printf("         ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ \n");
		printf("         ■                                                                          ■\n");
		printf("         ■        ■         ■ ■ ■ ■ ■   ■        ■ ■ ■     ■        ■ ■ ■ ■ ■       ■\n");
		printf("         ■      ■   ■           ■       ■ ■    ■       ■   ■ ■ 	            ■       ■\n");
		printf("         ■    ■       ■       ■   ■     ■     ■	        ■  ■                ■       ■\n");
		printf("         ■   ■ ■ ■ ■ ■ ■    ■       ■   ■      ■       ■   ■ ■     ■ ■ ■ ■ ■ ■ ■    ■\n");
		printf("         ■        ■                     ■        ■ ■ ■     ■             ■          ■\n");
		printf("         ■        ■                     ■                  ■             ■          ■\n");
		printf("         ■      ■   ■                                                               ■\n");
		printf("         ■    ■       ■                                                             ■\n");
		printf("         ■                                                                          ■\n");
		printf("         ■                                                                          ■\n");
		printf("         ■      ■ ■ ■ ■             ■ ■ ■          ■ ■     ■ ■     ■ ■ ■ ■ ■ ■      ■\n");
		printf("         ■    ■                    ■     ■         ■  ■   ■  ■     ■                ■\n");
		printf("         ■   ■                    ■       ■        ■   ■ ■   ■     ■                ■\n");
		printf("         ■  ■      ■ ■ ■ ■       ■ ■ ■ ■ ■ ■       ■    ■    ■     ■ ■ ■ ■ ■ ■      ■\n");
		printf("         ■   ■     ■    ■       ■           ■      ■         ■     ■                ■\n");
		printf("         ■    ■        ■       ■             ■     ■         ■     ■                ■\n");
		printf("         ■      ■ ■ ■ ■       ■               ■    ■         ■     ■ ■ ■ ■ ■ ■      ■\n");
		printf("         ■                                                                          ■\n");
		printf("         ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ ■ \n\n");

		srand((unsigned)time(NULL)); // 난수 생성 및 중복 체크
		for (i = 0; i < 3; i++) {
			temp = (rand() % 9) + 1;
			computerBall[i] = temp;
			for (j = 0; j < i; j++)
				if (temp == computerBall[j] && i != j)
					i--;
		}
		while (1) {
			printf("[%d회차 숫자야구]\n", count);
			while (1) {
				printf("1부터 9까지의 숫자를 입력하세요 : ");
				scanf("%d %d %d", &userBall[0], &userBall[1], &userBall[2]);
				if (userBall[0] < 1 || userBall[0] > 9 || userBall[1] < 1 || userBall[1] > 9 || userBall[2] < 1 || userBall[2] > 9) { // 입력한 숫자가 1 ~ 9 숫자가 아니면 다시 입력
					printf("범위 외의 숫자를 입력하시면 안됩니다.\n");
					continue;
				}
				else if (userBall[0] == userBall[1] || userBall[0] == userBall[2] || userBall[1] == userBall[2]) { // 입력한 숫자 중에 중복 있을시 재입력
					printf("중복된 숫자를 입력하시면 안됩니다.\n");
					continue;
				}
				break; // 아무 문제 없을 경우 반복 종료 
			}
			ball = 0;
			strike = 0;
			for (i = 0; i < 3; i++)
				for (j = 0; j < 3; j++)
					if (computerBall[i] == userBall[j]) // computerBall과 userBall의 값이 같다면 
						if (i == j) // 같은 위치일 경우 
							strike++; // 스트라이크 개수 증가         
						else // 다른 위치일 경우 
							ball++; // 볼 개수 증가 

			printf("[결과]스트라이크 : %d, 볼 : %d\n\n", strike, ball);
			if (strike == 3) // 만약 스트라이크 개수가 3개 -> 승리 
			{
				printf("***** 승리했습니다. *****\n\n");
				break;
			}
			else if (count == 9) // 만약 9회차인데도 승리하지 못하면 패배 
			{
				printf("***** 패배했습니다.. 정답 : %d %d %d *****\n\n", computerBall[0], computerBall[1], computerBall[2]);
				break;
			}
			count++;
		}
	case 0:
		printf("게임을 종료합니다.\n");
		break;

	default: printf("숫자를 제대로 입력해주세요\n\n");
	}
}