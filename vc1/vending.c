//���α׷���: C���� ���Ǳ� ���α׷� �����ϱ� 
#include <stdio.h>
#pragma warning (disable:4996)
int main(void)
{
	int start, choice, num, money, pay_money, remainder;// ���� ���Կ� ���Ǵ� ������ 
	int manage_choice, manage_num, count; // ������ �޴��� ���Ǵ� ������ 
	int pw, key; // �ʱ� ������ ��й�ȣ 
	int C_cnt = 100;
	int S_cnt = 100;
	int W_cnt = 100;
	int Co_cnt = 100; // ��� ������ ������ 100���� �ʱ�ȭ 
	char new_name[10];

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
				printf("���� �ݾ��� �Է��ϼ���: ");
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
					printf("�Ž����� %d���� ��ȯ�˴ϴ�.\n", remainder);
					C_cnt -= num;
					printf("���� ���� %d���Դϴ�.\n", C_cnt);
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
					printf("�Ž����� %d���� ��ȯ�˴ϴ�.\n", remainder);
					S_cnt -= num;
					printf("���� ���� %d���Դϴ�.\n", S_cnt);
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
					printf("�Ž����� %d���� ��ȯ�˴ϴ�.\n", remainder);
					W_cnt -= num;
					printf("���� ���� %d���Դϴ�.\n", W_cnt);
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
					printf("�Ž����� %d���� ��ȯ�˴ϴ�.\n", remainder);
					Co_cnt -= num;
					printf("���� ���� %d���Դϴ�.\n", Co_cnt);
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
				printf("|1.�޴� ����  3.����Ȯ�� 4.��й�ȣ ����|\n");
				printf("------------------------------------------------------\n");
				printf("����: ");
				scanf("%d", &start);

				if (start == 1)
				{
					printf("������ ��� ǰ���� �����ϼ���.\n");
					printf("1. �ݶ� 2. ���̴� 3. �� 4. Ŀ��\n");
					printf("����: ");
					scanf("%d", &manage_num);
					printf("������ �޴����� �Է��ϼ���: \n");
					scanf("%s", new_name);
					printf("�޴��� ����Ǿ����ϴ�.\n");   



				}
			}
			else
			{
				printf("��й�ȣ�� Ʋ���ϴ�.\n");
				break;
			}
		}

		else if (start == 3) // ���Ǳ����α׷� �����ϱ� 
		{
		printf("������ �� �̿����ֽʽÿ�.\n");
		continue; // while�ݺ����� �ʱ�� �̵���. 
        }
	}
}