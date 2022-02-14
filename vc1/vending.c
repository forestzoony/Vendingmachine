//프로그램명: C언어로 자판기 프로그램 구현하기 
#include <stdio.h>
#pragma warning (disable:4996)
/*void menuchange(int num, char name)
{
	int num;
	char name[10];

	printf("변경하실 품목의 번호를 선택하세요\n");
	printf("1. 콜라 2. 사이다 3. 물 4. 커피\n");
	printf("선택: ");
	scanf("%d", &num);
	printf("새로운 이름을 입력하세요: ");
	scanf("%s", name);
	printf("기존의 품목명이 %s로 변경되었습니다.\n", name);
}*/
int main(void)
{
	int start, choice, num, money, pay_money, remainder;// 음료 구입에 사용되는 변수들 
	int manage_choice, manage_num, count; // 관리자 메뉴에 사용되는 변수들 
	int pw, key; // 초기 설정된 비밀번호 
	int C_cnt = 50;
	int S_cnt = 50;
	int W_cnt = 50;
	int Co_cnt = 50; // 모든 음료의 개수를 100개로 초기화 
	char name[10];
	int how, coin, paper;

	key = 123456;

	while (1)
	{
		printf("----------------------------------------\n");
		printf("|   안녕하세요. 윤자네 자판기입니다.   |\n");
		printf("|    원하시는 기능을 선택하세요.       |\n");
		printf("|1.음료 구매  2.관리자 메뉴  3.종료하기|\n");
		printf("----------------------------------------\n");
		printf("선택: ");
		scanf("%d", &start);

		if (start == 1)
		{
			printf("\n원하시는 메뉴를 선택하세요. \n");
			printf("1. 콜라(200)  2. 사이다(100) 3. 물(300)  4. 커피(400)\n");
			printf("-----------------------------------------------------\n");
			printf("선택: ");
			scanf("%d", &choice);

			if (choice == 1) // 콜라 구입 
			{
				printf("현재 재고는 %d개 입니다.\n", C_cnt);
				printf("수량을 입력하세요: ");
				scanf("%d", &num);
				printf("투입 금액을 입력하세요(최대 10000원): ");
				scanf("%d", &money);

				pay_money = num * 200;
				remainder = money - pay_money;

				
				if (money < pay_money)
				{
					printf("돈이 부족합니다.구매하실 수 없습니다.\n");
				}
				else if (money == pay_money)
				{
					printf("상품을 구입하셨습니다.잠시만 기다려주십시오.\n");
					C_cnt -= num;
					printf("남은 재고는 %d개입니다.\n", C_cnt);
				}
				else if (money > pay_money)
				{
					printf("거스름돈 반환방법을 선택하세요 (1.지폐반환 2.동전반환): \n");
					printf("선택: ");
					scanf("%d", &how);

					if (how == 1)
					{
						paper = remainder / 1000;
						coin = remainder - (paper * 1000);

						printf("천원 지폐 %d장, 동전 %d원으로 반환됩니다.\n", paper, coin);
						C_cnt -= num;
						printf("남은 재고는 %d개입니다.\n", C_cnt);
					}
					else
					{
						printf("거스름돈 %d원이 반환됩니다.\n", remainder);
						C_cnt -= num;
						printf("남은 재고는 %d개입니다.\n", C_cnt);
					}
				}
				
			}

			else if (choice == 2) // 사이다 구입 

			{
				printf("현재 재고는 %d개 입니다.\n", S_cnt);
				printf("수량을 입력하세요: ");
				scanf("%d", &num);
				printf("투입 금액을 입력하세요: ");
				scanf("%d", &money);

				pay_money = num * 100;
				remainder = money - pay_money;

				if (money < pay_money)
				{
					printf("돈이 부족합니다.구매하실 수 없습니다.\n");
				}
				else if (money == pay_money)
				{
					printf("상품을 구입하셨습니다.잠시만 기다려주십시오.\n");
					S_cnt -= num;
					printf("남은 재고는 %d개입니다.\n", S_cnt);
				}
				else if (money > pay_money)
				{
					printf("거스름돈 반환방법을 선택하세요 (1.지폐반환 2.동전반환): \n");
					printf("선택: ");
					scanf("%d", &how);

					if (how == 1)
					{
						paper = remainder / 1000;
						coin = remainder - (paper * 1000);

						printf("천원 지폐 %d장, 동전 %d원으로 반환됩니다.\n", paper, coin);
						C_cnt -= num;
						printf("남은 재고는 %d개입니다.\n", C_cnt);
					}
					else
					{
						printf("거스름돈 %d원이 반환됩니다.\n", remainder);
						C_cnt -= num;
						printf("남은 재고는 %d개입니다.\n", C_cnt);
					}
				}
			}

			else if (choice == 3) // 물 구입 

			{
				printf("현재 재고는 %d개 입니다.\n", W_cnt);
				printf("수량을 입력하세요: ");
				scanf("%d", &num);
				printf("투입 금액을 입력하세요: ");
				scanf("%d", &money);

				pay_money = num * 300;
				remainder = money - pay_money;
				if (money < pay_money)
				{
					printf("돈이 부족합니다.구매하실 수 없습니다.\n");
				}
				else if (money == pay_money)
				{
					printf("상품을 구입하셨습니다.잠시만 기다려주십시오.\n");
					W_cnt -= num;
					printf("남은 재고는 %d개입니다.\n", W_cnt);
				}
				else
				{
					{
						printf("거스름돈 반환방법을 선택하세요 (1.지폐반환 2.동전반환): \n");
						printf("선택: ");
						scanf("%d", &how);

						if (how == 1)
						{
							paper = remainder / 1000;
							coin = remainder - (paper * 1000);

							printf("천원 지폐 %d장, 동전 %d원으로 반환됩니다.\n", paper, coin);
							C_cnt -= num;
							printf("남은 재고는 %d개입니다.\n", C_cnt);
						}
						else
						{
							printf("거스름돈 %d원이 반환됩니다.\n", remainder);
							C_cnt -= num;
							printf("남은 재고는 %d개입니다.\n", C_cnt);
						}
					}
				}
			}

			else  // 커피 구입 

			{
				printf("현재 재고는 %d개 입니다.\n", Co_cnt);
				printf("수량을 입력하세요: ");
				scanf("%d", &num);
				printf("투입 금액을 입력하세요: ");
				scanf("%d", &money);

				pay_money = num * 400;
				remainder = money - pay_money;
				if (money < pay_money)
				{
					printf("돈이 부족합니다.구매하실 수 없습니다.\n");
				}
				else if (money == pay_money)
				{
					printf("상품을 구입하셨습니다.잠시만 기다려주십시오.\n");
					Co_cnt -= num;
					printf("남은 재고는 %d개입니다.\n", Co_cnt);
				}
				else
				{
					{
						printf("거스름돈 반환방법을 선택하세요 (1.지폐반환 2.동전반환): \n");
						printf("선택: ");
						scanf("%d", &how);

						if (how == 1)
						{
							paper = remainder / 1000;
							coin = remainder - (paper * 1000);

							printf("천원 지폐 %d장, 동전 %d원으로 반환됩니다.\n", paper, coin);
							C_cnt -= num;
							printf("남은 재고는 %d개입니다.\n", C_cnt);
						}
						else
						{
							printf("거스름돈 %d원이 반환됩니다.\n", remainder);
							C_cnt -= num;
							printf("남은 재고는 %d개입니다.\n", C_cnt);
						}
					}
				}
			}

		}

		else if (start == 2) // 관리자 메뉴 
		{

			printf("비밀번호를 입력하세요(숫자 6자리): ");
			scanf("%d", &pw);

			if (pw == key)
			{
				printf("------------------------------------------------------\n");
				printf("|          관리자 메뉴로 이동하였습니다.             |\n");
				printf("|           원하시는 기능을 선택하세요.              |\n");
				printf("|   1.수익확인 2. 메뉴변경 3. 암호변경 4. 종료하기   |\n");
				printf("------------------------------------------------------\n");
				printf("선택: ");
				scanf("%d", &start);

				if (start == 1)
				{
					printf("총 수익은 %d원입니다.\n", );
				}
			}
			else
			{
				printf("비밀번호가 틀립니다.\n");
				break;
			}
		}

		else if (start == 4) // 자판기프로그램 종료하기 
		{
		printf("다음에 또 이용해주십시오.\n");
		continue; // while반복문의 초기로 이동함. 
        }
	}
}