#include <stdlib.h>
#include "Practice.h"
#include <iostream>
#include <stdio.h>



//int Practice0905_01(int Min, int Max)
//{
//	int RandomNumber = (rand() % (Max - Min + 1)) + Min;
//
//	return RandomNumber;
//}
//
//
//int Age(int age)
//{
//	return age;
//}
//
//float Radius(float InputRadius)
//{
//	
//	float Pi = 3.14;
//	float extent = InputRadius * InputRadius * Pi;
//	return extent;
//	
//}
//
//int Number(int InputNumber)
//{
//	return InputNumber;
//}

//bool Number(int InputNumber)
//{
//	
//	if (InputNumber % 2 == 0)
//	{
//		printf("false");
//		return false;
//	}
//	else
//	{
//		printf("true");
//		return true;
//	}
//}
//enum Key
//{
//	A,
//	B,
//	C,
//	D,
//	E,
//	F
//};
//
//
//int Score(int score)
//{
//	if (score < 50)
//	{
//		
//		return F;
//	}
//	else if(score < 60)
//	{
//		
//		return E;
//	}
//	else if(score < 70)
//	{
//		
//		return D;
//	}
//	else if(score < 80)
//	{
//		
//		return C;
//	}
//	else if(score < 90)
//	{
//		
//		return B;
//	}
//	else 
//	{
//		
//		return A;
//	}
//
//}

//int ItemSetting(int Inventory, int Flag)
//{
//	int Result = 0;
//	// Inven	= 0b0011
//	// Flag		= 0b0001
//	// Result	= 0b0011
//
//	// Inven	= 0b0010
//	// Flag		= 0b0001
//	// Result	= 0b0011
//
//	return Result;
//}
//int ItemUnlock()
//{
//
//}
//int ItemToggle()
//{
//
//}
//
//
//int Pyramid(int Floor)
//{
//	while (Floor < 2)
//	{
//
//	}
//	
//}



//int main()
//{
	/*int age = 0;
	printf("����� ���̸� �Է��� �ּ��� : ");
	std::cin >> age;


	printf("����� ���̴� %d���Դϴ�\n", age);








	int radius = 0;

	float InputRadius = 0.0f;

	printf("���� �������� �Է��Ͻÿ�\n");
	std::cin >> InputRadius;
	float Extent = Radius(InputRadius);

	printf("���� ���̴� %f�Դϴ�\n", Extent);*/



	/*int InputNumber = 0;
	printf("���ڸ� �Է��Ͻÿ�\n");
	std::cin >> InputNumber;
	if (Number(InputNumber) == true)
	{
		printf("Ȧ���Դϴ�\n");
	}
	else
	{
		printf("¦���Դϴ�\n");
	}*/


	/*int score = 0;
	printf("����� ������ �Է��Ͻÿ� : ");
	std::cin >> score;
	if (Score(score) == A)
	{
		printf("����� ������ A�Դϴ�\n");
	}
	else if(Score(score) == B)
	{
		printf("����� ������ B�Դϴ�\n");
	}
	else if(Score(score) == C)
	{
		printf("����� ������ C�Դϴ�\n");
	}
	else if(Score(score) == D)
	{
		printf("����� ������ D�Դϴ�\n");
	}
	else if(Score(score) == E)
	{
		printf("����� ������ E�Դϴ�\n");
	}
	else if(Score(score) == F)
	{
		printf("����� ������ F�Դϴ�\n");
	}*/








	//1.3���� �Ķ���͸� �޾� ��հ��� �����ϴ� �Լ� �����
	//2.������ ������ �Է� �޾� ���ΰ� ���ϴ� �Լ� �����
	//3.�ֻ����� ���� ����� �����ϴ� �Լ� �����
	//4.������ �ָ� ����(A~F)�� �ִ� �Լ� �����
	//5.���ø� �Լ��� Clamp �Լ� �����ϱ�
	
	//int Average(int A, int B, int C)
	//{
	//    return ((A + B + C) / 3);
	//}
	//
	//int DiscountPrice(int RegularPrice, int DiscountRate)
	//{
	//    return RegularPrice - (RegularPrice * DiscountRate / 100);
	//}
	//
	//int Dice()
	//{
	//
	//    return rand() % 6 + 1;
	//
	//}






	//int Achievement(int Score)
	//{
	//
	//    if (Score < 50)
	//    {
	//        return 0;
	//    }
	//    else if (Score < 60)
	//    {
	//        return 1;
	//    }
	//    else if (Score < 70)
	//    {
	//        return 2;
	//    }
	//    else if (Score < 80)
	//    {
	//        return 3;
	//    }
	//    else if (Score < 90)
	//    {
	//        return 4;
	//    }
	//    else
	//    {
	//        return 5;
	//    }
	//
	//}


	////template <typename T>
	////T Clamp(T Value, T Min, T Max)
	////{
	////    if (Value < Min)
	////        return Min;
	////    else if (Value > Max)
	////        return Max;
	////    else
	////        return Value;
	////}
	////
	//
	//int main()
	//{
	//    srand(time(0));

	//	int RegularPrice = 0;
	//	int DiscountRate = 0;
	//	printf("������ �Է��ϼ��� : \n");
	//	std::cin >> RegularPrice;
	//	printf("�������� �Է��ϼ��� : \n");
	//	std::cin >> DiscountRate;

	//	printf("���ΰ��� %d�Դϴ�\n", DiscountPrice(RegularPrice, DiscountRate));



	//	 printf("%d",Dice());





	//	int Score = 0;
	//	printf("������ �Է��ϼ��� : \n");
	//	std::cin >> Score;

	//	if (Achievement(Score) == 0)
	//	{
	//		printf("F\n");
	//	}
	//	else if (Achievement(Score) == 1)
	//	{
	//		printf("E\n");
	//	}
	//	else if (Achievement(Score) == 2)
	//	{
	//		printf("D\n");
	//	}
	//	else if (Achievement(Score) == 3)
	//	{
	//		printf("C\n");
	//	}
	//	else if (Achievement(Score) == 4)
	//	{
	//		printf("B\n");
	//	}
	//	else
	//	{
	//		printf("A\n");
	//	}


	//	printf("%d\n", Clamp(10, 4, 12));


		/*


		*/










		/*
		*
		*


			1 �ڸ��� �и��ϱ�(�Է��� �ڸ� �� ���� ����)
				�� �ڸ��� ���� ���ؼ� ����ϱ�




			2 ��� �Լ��� �̿��Ͽ� 10������ �Է¹޾� 2������ ����ϴ� �Լ� �����



			3 ���� �ӽ� ���� �����
				���� �ݾ� 10000
				���ǿ� ������  �ּ� 100 �����ؾ� ��. ���� �����ݾ��� 100 ������ ��� ���� ����.
				���� ���� 3���� ������ 50��� ���� �޴´�.
				���� 777�̸� 10000�� ����



			4 �÷��̾�� ���� ���� ���� �����
				HP�� 100���� ����
				������ �� �� ���濡�� 5~15�� �������� �ش�.
				10%�� Ȯ���� ũ��Ƽ���� �߻��� 2���� �������� �ش�.
				������ HP�� 0 ���ϰ� �Ǹ� �¸��Ѵ�.




			5 ���� ��� �����
				���� �ݾ� 10000
				���ǿ� ������ �ּ� 100 �����ؾ� ��. ���� �����ݾ��� 100 ������ ��� ���� ����.
				������ A~K������ Ʈ���� ī�� �� 2���� �ߺ����� �����ϰ� ��Ŀ ī�尡 �߰��ȴ�.
				�÷��̾�� ������ ī�� �� ������ �����Ѵ�.
				���� �÷��̾ ��Ŀ�� ���ִٸ� �÷��̾��� �¸�. ���� �ݾ��� 2�踦 �޴´�.
				�÷��̾ ��Ŀ�� ���� ���ߴٸ� ���� ������ �����ϰų� ���� �ݾ��� 2�踦 �߰��� �����ϰ� �ѹ� �� ������ �� �ִ�.

				*/


//enum Card
//{
//	CardA = 0,
//	Card2,
//	Card3,
//	Card4,
//	Card5,
//	Card6,
//	Card7,
//	Card8,
//	Card9,
//	Card10,
//	CardJ,
//	CardQ,
//	CardK,
//	CardJoker,
//	NumOfCards
//};
//
//	int Money = 10000;
//	const int MinimumBet = 100;
//
//	int dealer1 = rand() % CardJoker;
//	int dealer2 = -1;
//
//	while (dealer2 != dealer1)
//	{
//		dealer2 = rand() % CardJoker;
//	}
//
//	int dealer3 = -1;
//	while (dealer3 != dealer1 && dealer3 != dealer2)
//	{
//		dealer3 = rand() % CardJoker;
//	}
//
//	int JokerIndex = rand() % 3;
//	switch (JokerIndex)
//	{
//		case 0;
//			dealer1 = CardJoker;
//			break;
//		case 0;
//			dealer2 = CardJoker;
//			break;
//		case 0;
//			dealer3 = CardJoker;
//			break;
//		default;
//
//		break;
//
//
//
//
//	}
//
//
//
//	printf("ī�带 �����ϼ��� (0-2) : ");
//	int PlayerInput = 0;
//	std::cin >> PlayerInput;
//
//	printf("�÷��̾�� %d�� �����߽��ϴ�.\n", PlayerInput);
//
//	switch (PlayerInput)
//	{
//		case 0;
//			if (dealer1 == CardJoker)
//			{
//
//			}
//			else
//			{
//
//			}
//			break;
//			case 1;
//				if (dealer2 == CardJoker)
//				{
//
//				}
//				else
//				{
//
//				}
//				break;
//				case 2;
//					if (dealer3 == CardJoker)
//					{
//
//					}
//					else
//					{
//
//					}
//					break;
//					default;
//
//					break;
//	}


//}









