#include "Day0919.h"
#include "FixedStack.h"
#include "stdio.h"

void Day0919::TestStack()
{
	FixedStack Stack;
	Stack.IsEmpty();

	if (Stack.IsEmpty())
	{
		printf("스택이 비었는지 확인( 스택이 존재함 = 0, 스택이 비었음 = 1) : %d\n", Stack.IsEmpty());
	}

	Stack.GetSize();
	printf("스택크기 : %d\n", Stack.GetSize());

	Stack.Push(10);

	printf(" Top 위치에 있는 값 : %d\n", Stack.Top());
	printf("스택크기 : %d\n", Stack.GetSize());

	Stack.Push(20);

	printf(" Top 위치에 있는 값 : %d\n", Stack.Top());
	printf("스택크기 : %d\n", Stack.GetSize());

	Stack.Push(30);

	printf(" Top 위치에 있는 값 : %d\n", Stack.Top());
	printf("스택크기 : %d\n", Stack.GetSize());

	Stack.Pop();

	printf(" Top 위치에 있는 값 : %d\n", Stack.Top());
	printf("스택크기 : %d\n", Stack.GetSize());
	
	Stack.Pop(); 
	Stack.Pop();

	printf("스택크기 : %d\n", Stack.GetSize());
	for (int i = 0; i < 10; i++)
	{
		Stack.Push(i * 10);
	}
	printf("스택크기 : %d\n", Stack.GetSize());
	Stack.Push(100);
	
	for (int i = 0; i < 10; i++)
	{
		Stack.Pop();
	}

	printf("스택크기 : %d\n", Stack.GetSize());
	Stack.Pop();
	

	
	// 1.초기 상태 테스트
	//	스택이 비었는지 확인해보기
	// (IsEmpty와 
	// GetSize 사용하고 
	// printf로 출력하기)
	// 
	// 2. Push 테스트
	//	데이터(10) 넣고 Top 위치에 있는 값과 스택 크기 출력해보기
	//	데이터(20) 넣고 Top 위치에 있는 값과 스택 크기 출력해보기
	//	데이터(30) 넣고 Top 위치에 있는 값과 스택 크기 출력해보기
	// 3. Pop 테스트
	//	데이터 하나 빼고 뺀 값 출력해보기, 스택에 남은 Top 위치값과 스택 크기 출력해보기
	// 4. 스택 오버플로우 테스트
	//	스택 가득 채우고 한번 더 넣어 보기
	// 5. 스택 언더플로우 테스트
	//	스택 다 비우고 한번 더 빼보기







}

void Day0919::TestQueue()
{
	



	//1. 테스트용 메뉴 만들기
		// 1.Enqueue
		// 2.Dequeue
		// 3.Peek
		// 4.TestPrintQueue
		// 5.종료
	//2. Circular Queue2 만들기
	//		생성자에서 파라메터를 받아 크기를 조절 가능하게 만들기
	// 
	// 
	// 
	// 
	// 
	// 
	// 
	//
}

