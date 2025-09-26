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
	printf("당신의 나이를 입력해 주세요 : ");
	std::cin >> age;


	printf("당신의 나이는 %d살입니다\n", age);








	int radius = 0;

	float InputRadius = 0.0f;

	printf("원의 반지름을 입력하시오\n");
	std::cin >> InputRadius;
	float Extent = Radius(InputRadius);

	printf("원의 넓이는 %f입니다\n", Extent);*/



	/*int InputNumber = 0;
	printf("숫자를 입력하시오\n");
	std::cin >> InputNumber;
	if (Number(InputNumber) == true)
	{
		printf("홀수입니다\n");
	}
	else
	{
		printf("짝수입니다\n");
	}*/


	/*int score = 0;
	printf("당신의 성적을 입력하시오 : ");
	std::cin >> score;
	if (Score(score) == A)
	{
		printf("당신의 성적은 A입니다\n");
	}
	else if(Score(score) == B)
	{
		printf("당신의 성적은 B입니다\n");
	}
	else if(Score(score) == C)
	{
		printf("당신의 성적은 C입니다\n");
	}
	else if(Score(score) == D)
	{
		printf("당신의 성적은 D입니다\n");
	}
	else if(Score(score) == E)
	{
		printf("당신의 성적은 E입니다\n");
	}
	else if(Score(score) == F)
	{
		printf("당신의 성적은 F입니다\n");
	}*/








	//1.3개의 파라메터를 받아 평균값을 리턴하는 함수 만들기
	//2.정가와 할인율 입력 받아 할인가 구하는 함수 만들기
	//3.주사위를 굴린 결과를 리턴하는 함수 만들기
	//4.점수를 주면 성적(A~F)를 주는 함수 만들기
	//5.템플릿 함수로 Clamp 함수 구현하기
	
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
	//	printf("정가를 입력하세요 : \n");
	//	std::cin >> RegularPrice;
	//	printf("할인율을 입력하세요 : \n");
	//	std::cin >> DiscountRate;

	//	printf("할인가는 %d입니다\n", DiscountPrice(RegularPrice, DiscountRate));



	//	 printf("%d",Dice());





	//	int Score = 0;
	//	printf("성적을 입력하세요 : \n");
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


			1 자리수 분리하기(입력은 자리 수 제한 없음)
				각 자리의 수를 합해서 출력하기




			2 재귀 함수를 이용하여 10진수를 입력받아 2진수로 출력하는 함수 만들기



			3 슬롯 머신 게임 만들기
				시작 금액 10000
				한판에 무조건  최소 100 배팅해야 함. 만약 소지금액이 100 이하일 경우 게임 종료.
				같은 숫자 3개가 나오면 50배로 돌려 받는다.
				만약 777이면 10000배 받음



			4 플레이어와 적의 턴제 전투 만들기
				HP는 100으로 시작
				공격을 할 때 상대방에게 5~15의 데미지를 준다.
				10%의 확률로 크리티컬이 발생해 2배의 데미지를 준다.
				상대방의 HP가 0 이하가 되면 승리한다.




			5 도둑 잡기 만들기
				시작 금액 10000
				한판에 무조건 최소 100 배팅해야 함. 만약 소지금액이 100 이하일 경우 게임 종료.
				딜러는 A~K까지의 트럼프 카드 중 2장을 중복없이 선택하고 조커 카드가 추가된다.
				플레이어는 딜러의 카드 중 한장을 선택한다.
				만약 플레이어가 조커를 뽑있다면 플레이어의 승리. 배팅 금액의 2배를 받는다.
				플레이어가 조커를 뽑지 못했다면 다음 게임을 시작하거나 배팅 금액의 2배를 추가로 지불하고 한번 더 선택할 수 있다.

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
//	printf("카드를 선택하세요 (0-2) : ");
//	int PlayerInput = 0;
//	std::cin >> PlayerInput;
//
//	printf("플레이어는 %d를 선택했습니다.\n", PlayerInput);
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









