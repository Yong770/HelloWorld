#include "Day0909.h"
#include <iostream>	
#include <stdio.h>


void PointerParameter(int* pNumber)
{
	(*pNumber) = (*pNumber) * 2;	// 입력받은 주소에 있는 int값을 2배로 만들기
}

void Pointer(int* Number1, float* Number2)
{
	(*Number1) += 3;
	(*Number2) *= 0.5f;	//	*과 /중에 선택을 할 수 있는 상황이면 *가 성능상 유리하다.

}






void Day0909()
{
	//간단 실습
	// Number라는 변수를 하나 선언하고 포인터 변수 p에 Number의 주소를 저장하기
	// p를 이용해서 Number의 값을 변경시키기

	float Number = 123.01f;
	int Number2 = 10;
	float* p = nullptr;	// p는 완전히 비어있다.
	p = &Number;	// p에 Number의 주소를 저장했다.
	//p = &Number2;	//타입이 다르기 때문에 안된다.

	(*p) = 100.0f;

	PointerParameter(&Number2);

	//간단실습
	// int*와 float*를 파라메터로 받은 함수 만들기
	// int*로 받은 값은 3 더하기, float*로 받은 값은 절반으로 만들기

	float* test = p;
	test++;

	int i = 0;



}

void Day0909_2()
{
	//배열과 포인터(기본적으로 같다)
	int Array[5] = { 10,20,30,40,50 };
	int* pArray = Array;	//	배열의 이름은 배열의 첫번째 요소의 주소와 같다
	int* pArray2 = &Array[0];	//	Array=&Array[0] 두개는 같은 의미

	//pArray를 이용해서 Array[2]를 300으로 수정하기
	*(pArray + 2) = 300;

	for (int data : Array)	// range-for : Array안의 요소들을 순차적으로 하나씩 data에 넣어 처리
	{
		printf("%d ", data);

	}
	printf("\n");

}

void Day0909_DynamicAllocation()
{
	// C 스타일 메모리 할당 및 해제
	int Size = 5;
	int* Array = nullptr;
	Array = (int*)malloc(sizeof(int) * Size);	//	int 5개짜리 메모리 블럭 할당 받기

	Array[2] = 20;

	free(Array);	//	Array를 해제. malloc을 했으면 무조건 free부터 만들고 작업할것
	Array = nullptr;	//	댕글링 포인터 방지


	//C++ 스타일 메모리 할당 및 해제

	



}

void Day0909_Example()
{
	//간단실습
	//1.int 배열 할당받기(첫 할당은 3개만)
	//2.숫자를 입력받을 때마다 배열에 추가하기

	const int StartSize = 3;
	int* Array = new int[StartSize];
	const int ExitInput = -1;	//	입력 종료값 or 빈칸 표현값
	for (int i = 0; i < StartSize; i++)
	{
		Array[i] = ExitInput;
	}



	int CurrentIndex = 0;
	int CurrentSize = StartSize;

	int InputNumber = 0;
	while (InputNumber != ExitInput)
	{
		printf("배열의 넣을 숫자를 입력하세요 : ");
		std::cin >> InputNumber;

		Array[CurrentIndex] = InputNumber;
		CurrentIndex++;

		if (CurrentIndex >= CurrentSize)
		{
			int* newArray = new int[CurrentSize + 1];
			for (int i = 0; i < CurrentSize; i++)
			{
				newArray[i] = Array[i];
			}

			newArray[CurrentSize] = ExitInput;
			delete[] Array;
			Array = newArray;
			CurrentSize++;

		}

		for (int i = 0; i<CurrentSize;i++)
		{
			printf("%d", Array[i]);
		}
		printf("\n");
	}

	delete[] Array;
	Array = nullptr;

}

//int RollDice(int FaceNumber)
//{
//	return rand() % FaceNumber + 1;
//}






//void Day0908_Practice1()
//{
//	//6면체 주사위를 100만번 던져서 각 눈의 수가 몇번 나왔는지 카운팅하기
//	//6면체 주사위를 돌리는 함수 만들기
//
//	const int TestCount = 1000000;
//	int Counters[6] = { 0 };
//	for (int i = 0; i < TestCount; i++)
//	{
//		
//	}
//	printf("최종 결과 : ");
//	for (auto count : Counters)
//	{
//		printf("%d", count);
//	}
//	printf("\n");
//}

void Day0908_Practice2()
{
	//1. 가로 세로를 입력받아 배열을 생성하고 배열의 안을 0부터 1씩 증가하는 값으로 채우기


	int Width = 0;
	int Length = 0;
	printf("가로의 길이를 입력하시오 : ");
	std::cin >> Width;
	printf("세로의 길이를 입력하시오 : ");
	std::cin >> Length;

	int* Array = new int[Length * Width];
	for (int i = 0; i < Length; i++)
	{
		
		for (int j = 0; j < Width; j++)
		{
			int Index = i * Width + j;
			Array[Index] = Index;

			printf("%d ", Array[Index]);
		}
		printf("\n");
	}
	
	delete[] Array;
	Array = nullptr;

}

void Day0908_Practice3()
{
}

void Day0908_MazeEscape()
{
}



//2. 하이로우 수정하기
//	게임이 종료되었을 때 이때까지 플레이어가 입력한 모든 수를 출력해서 보여주기

//3.미로 탈출 게임 수정하기
// - 이동했을 때 일정확률(20%)로 전투가 발생한다.
// - 이동했을 때 일정확률(10%)로 플레이어 HP가 회복된다
// 두 이벤트는 중복으로 발생하지 않는다.


 
