//���α׷���: C���� ���Ǳ� ���α׷� �����ϱ� 
#include <stdio.h>
#pragma warning (disable:4996)
/*void menuchange(int num, char name)
{
	int num;
	char name[10];

	printf("�����Ͻ� ǰ���� ��ȣ�� �����ϼ���\n");
	printf("1. �ݶ� 2. ���̴� 3. �� 4. Ŀ��\n");
	printf("����: ");
	scanf("%d", &num);
	printf("���ο� �̸��� �Է��ϼ���: ");
	scanf("%s", name);
	printf("������ ǰ����� %s�� ����Ǿ����ϴ�.\n", name);
}*/
int main(void)
{
	int start, choice, num, money, pay_money, remainder;// ���� ���Կ� ���Ǵ� ������ 
	int manage_choice, manage_num, count; // ������ �޴��� ���Ǵ� ������ 
	int pw, key; // �ʱ� ������ ��й�ȣ 
	int C_cnt = 50;
	int S_cnt = 50;
	int W_cnt = 50;
	int Co_cnt = 50; // ��� ������ ������ 100���� �ʱ�ȭ 
	char name[10];
	int how, coin, paper;

	key = 123456;

	while (1)
	{
		printf("----------------------------------------\n");
		printf("|   �ȳ��ϼ���. ���ڳ� ���Ǳ��Դϴ�.   |\n");
		printf("|    ���Ͻô� ����� �����ϼ���.       |\n");
		printf("|1.���� ����  2.������ �޴�  3.�����ϱ�|\n");
		printf("----------------------------------------\n");
		printf("����: ");
		scanf("%d", &start);

		if (start == 1)
		{
			printf("\n���Ͻô� �޴��� �����ϼ���. \n");
			printf("1. �ݶ�(200)  2. ���̴�(100) 3. ��(300)  4. Ŀ��(400)\n");
			printf("-----------------------------------------------------\n");
			printf("����: ");
			scanf("%d", &choice);

			if (choice == 1) // �ݶ� ���� 
			{
				printf("���� ���� %d�� �Դϴ�.\n", C_cnt);
				printf("������ �Է��ϼ���: ");
				scanf("%d", &num);
				printf("���� �ݾ��� �Է��ϼ���(�ִ� 10000��): ");
				scanf("%d", &money);

				pay_money = num * 200;
				remainder = money - pay_money;

				
				if (money < pay_money)
				{
					printf("���� �����մϴ�.�����Ͻ� �� �����ϴ�.\n");
				}
				else if (money == pay_money)
				{
					printf("��ǰ�� �����ϼ̽��ϴ�.��ø� ��ٷ��ֽʽÿ�.\n");
					C_cnt -= num;
					printf("���� ���� %d���Դϴ�.\n", C_cnt);
				}
				else if (money > pay_money)
				{
					printf("�Ž����� ��ȯ����� �����ϼ��� (1.�����ȯ 2.������ȯ): \n");
					printf("����: ");
					scanf("%d", &how);

					if (how == 1)
					{
						paper = remainder / 1000;
						coin = remainder - (paper * 1000);

						printf("õ�� ���� %d��, ���� %d������ ��ȯ�˴ϴ�.\n", paper, coin);
						C_cnt -= num;
						printf("���� ���� %d���Դϴ�.\n", C_cnt);
					}
					else
					{
						printf("�Ž����� %d���� ��ȯ�˴ϴ�.\n", remainder);
						C_cnt -= num;
						printf("���� ���� %d���Դϴ�.\n", C_cnt);
					}
				}
				
			}

			else if (choice == 2) // ���̴� ���� 

			{
				printf("���� ���� %d�� �Դϴ�.\n", S_cnt);
				printf("������ �Է��ϼ���: ");
				scanf("%d", &num);
				printf("���� �ݾ��� �Է��ϼ���: ");
				scanf("%d", &money);

				pay_money = num * 100;
				remainder = money - pay_money;

				if (money < pay_money)
				{
					printf("���� �����մϴ�.�����Ͻ� �� �����ϴ�.\n");
				}
				else if (money == pay_money)
				{
					printf("��ǰ�� �����ϼ̽��ϴ�.��ø� ��ٷ��ֽʽÿ�.\n");
					S_cnt -= num;
					printf("���� ���� %d���Դϴ�.\n", S_cnt);
				}
				else if (money > pay_money)
				{
					printf("�Ž����� ��ȯ����� �����ϼ��� (1.�����ȯ 2.������ȯ): \n");
					printf("����: ");
					scanf("%d", &how);

					if (how == 1)
					{
						paper = remainder / 1000;
						coin = remainder - (paper * 1000);

						printf("õ�� ���� %d��, ���� %d������ ��ȯ�˴ϴ�.\n", paper, coin);
						C_cnt -= num;
						printf("���� ���� %d���Դϴ�.\n", C_cnt);
					}
					else
					{
						printf("�Ž����� %d���� ��ȯ�˴ϴ�.\n", remainder);
						C_cnt -= num;
						printf("���� ���� %d���Դϴ�.\n", C_cnt);
					}
				}
			}

			else if (choice == 3) // �� ���� 

			{
				printf("���� ���� %d�� �Դϴ�.\n", W_cnt);
				printf("������ �Է��ϼ���: ");
				scanf("%d", &num);
				printf("���� �ݾ��� �Է��ϼ���: ");
				scanf("%d", &money);

				pay_money = num * 300;
				remainder = money - pay_money;
				if (money < pay_money)
				{
					printf("���� �����մϴ�.�����Ͻ� �� �����ϴ�.\n");
				}
				else if (money == pay_money)
				{
					printf("��ǰ�� �����ϼ̽��ϴ�.��ø� ��ٷ��ֽʽÿ�.\n");
					W_cnt -= num;
					printf("���� ���� %d���Դϴ�.\n", W_cnt);
				}
				else
				{
					{
						printf("�Ž����� ��ȯ����� �����ϼ��� (1.�����ȯ 2.������ȯ): \n");
						printf("����: ");
						scanf("%d", &how);

						if (how == 1)
						{
							paper = remainder / 1000;
							coin = remainder - (paper * 1000);

							printf("õ�� ���� %d��, ���� %d������ ��ȯ�˴ϴ�.\n", paper, coin);
							C_cnt -= num;
							printf("���� ���� %d���Դϴ�.\n", C_cnt);
						}
						else
						{
							printf("�Ž����� %d���� ��ȯ�˴ϴ�.\n", remainder);
							C_cnt -= num;
							printf("���� ���� %d���Դϴ�.\n", C_cnt);
						}
					}
				}
			}

			else  // Ŀ�� ���� 

			{
				printf("���� ���� %d�� �Դϴ�.\n", Co_cnt);
				printf("������ �Է��ϼ���: ");
				scanf("%d", &num);
				printf("���� �ݾ��� �Է��ϼ���: ");
				scanf("%d", &money);

				pay_money = num * 400;
				remainder = money - pay_money;
				if (money < pay_money)
				{
					printf("���� �����մϴ�.�����Ͻ� �� �����ϴ�.\n");
				}
				else if (money == pay_money)
				{
					printf("��ǰ�� �����ϼ̽��ϴ�.��ø� ��ٷ��ֽʽÿ�.\n");
					Co_cnt -= num;
					printf("���� ���� %d���Դϴ�.\n", Co_cnt);
				}
				else
				{
					{
						printf("�Ž����� ��ȯ����� �����ϼ��� (1.�����ȯ 2.������ȯ): \n");
						printf("����: ");
						scanf("%d", &how);

						if (how == 1)
						{
							paper = remainder / 1000;
							coin = remainder - (paper * 1000);

							printf("õ�� ���� %d��, ���� %d������ ��ȯ�˴ϴ�.\n", paper, coin);
							C_cnt -= num;
							printf("���� ���� %d���Դϴ�.\n", C_cnt);
						}
						else
						{
							printf("�Ž����� %d���� ��ȯ�˴ϴ�.\n", remainder);
							C_cnt -= num;
							printf("���� ���� %d���Դϴ�.\n", C_cnt);
						}
					}
				}
			}

		}

		else if (start == 2) // ������ �޴� 
		{

			printf("��й�ȣ�� �Է��ϼ���(���� 6�ڸ�): ");
			scanf("%d", &pw);

			if (pw == key)
			{
				printf("------------------------------------------------------\n");
				printf("|          ������ �޴��� �̵��Ͽ����ϴ�.             |\n");
				printf("|           ���Ͻô� ����� �����ϼ���.              |\n");
				printf("|   1.����Ȯ�� 2. �޴����� 3. ��ȣ���� 4. �����ϱ�   |\n");
				printf("------------------------------------------------------\n");
				printf("����: ");
				scanf("%d", &start);

				if (start == 1)
				{
					printf("�� ������ %d���Դϴ�.\n", );
				}
			}
			else
			{
				printf("��й�ȣ�� Ʋ���ϴ�.\n");
				break;
			}
		}

		else if (start == 4) // ���Ǳ����α׷� �����ϱ� 
		{
		printf("������ �� �̿����ֽʽÿ�.\n");
		continue; // while�ݺ����� �ʱ�� �̵���. 
        }
	}
}