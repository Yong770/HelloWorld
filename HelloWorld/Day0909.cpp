#include "Day0909.h"
#include <iostream>	
#include <stdio.h>


void PointerParameter(int* pNumber)
{
	(*pNumber) = (*pNumber) * 2;	// �Է¹��� �ּҿ� �ִ� int���� 2��� �����
}

void Pointer(int* Number1, float* Number2)
{
	(*Number1) += 3;
	(*Number2) *= 0.5f;	//	*�� /�߿� ������ �� �� �ִ� ��Ȳ�̸� *�� ���ɻ� �����ϴ�.

}






void Day0909()
{
	//���� �ǽ�
	// Number��� ������ �ϳ� �����ϰ� ������ ���� p�� Number�� �ּҸ� �����ϱ�
	// p�� �̿��ؼ� Number�� ���� �����Ű��

	float Number = 123.01f;
	int Number2 = 10;
	float* p = nullptr;	// p�� ������ ����ִ�.
	p = &Number;	// p�� Number�� �ּҸ� �����ߴ�.
	//p = &Number2;	//Ÿ���� �ٸ��� ������ �ȵȴ�.

	(*p) = 100.0f;

	PointerParameter(&Number2);

	//���ܽǽ�
	// int*�� float*�� �Ķ���ͷ� ���� �Լ� �����
	// int*�� ���� ���� 3 ���ϱ�, float*�� ���� ���� �������� �����

	float* test = p;
	test++;

	int i = 0;



}

void Day0909_2()
{
	//�迭�� ������(�⺻������ ����)
	int Array[5] = { 10,20,30,40,50 };
	int* pArray = Array;	//	�迭�� �̸��� �迭�� ù��° ����� �ּҿ� ����
	int* pArray2 = &Array[0];	//	Array=&Array[0] �ΰ��� ���� �ǹ�

	//pArray�� �̿��ؼ� Array[2]�� 300���� �����ϱ�
	*(pArray + 2) = 300;

	for (int data : Array)	// range-for : Array���� ��ҵ��� ���������� �ϳ��� data�� �־� ó��
	{
		printf("%d ", data);

	}
	printf("\n");

}

void Day0909_DynamicAllocation()
{
	// C ��Ÿ�� �޸� �Ҵ� �� ����
	int Size = 5;
	int* Array = nullptr;
	Array = (int*)malloc(sizeof(int) * Size);	//	int 5��¥�� �޸� �� �Ҵ� �ޱ�

	Array[2] = 20;

	free(Array);	//	Array�� ����. malloc�� ������ ������ free���� ����� �۾��Ұ�
	Array = nullptr;	//	��۸� ������ ����


	//C++ ��Ÿ�� �޸� �Ҵ� �� ����

	



}

void Day0909_Example()
{
	//���ܽǽ�
	//1.int �迭 �Ҵ�ޱ�(ù �Ҵ��� 3����)
	//2.���ڸ� �Է¹��� ������ �迭�� �߰��ϱ�

	const int StartSize = 3;
	int* Array = new int[StartSize];
	const int ExitInput = -1;	//	�Է� ���ᰪ or ��ĭ ǥ����
	for (int i = 0; i < StartSize; i++)
	{
		Array[i] = ExitInput;
	}



	int CurrentIndex = 0;
	int CurrentSize = StartSize;

	int InputNumber = 0;
	while (InputNumber != ExitInput)
	{
		printf("�迭�� ���� ���ڸ� �Է��ϼ��� : ");
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
//	//6��ü �ֻ����� 100���� ������ �� ���� ���� ��� ���Դ��� ī�����ϱ�
//	//6��ü �ֻ����� ������ �Լ� �����
//
//	const int TestCount = 1000000;
//	int Counters[6] = { 0 };
//	for (int i = 0; i < TestCount; i++)
//	{
//		
//	}
//	printf("���� ��� : ");
//	for (auto count : Counters)
//	{
//		printf("%d", count);
//	}
//	printf("\n");
//}

void Day0908_Practice2()
{
	//1. ���� ���θ� �Է¹޾� �迭�� �����ϰ� �迭�� ���� 0���� 1�� �����ϴ� ������ ä���


	int Width = 0;
	int Length = 0;
	printf("������ ���̸� �Է��Ͻÿ� : ");
	std::cin >> Width;
	printf("������ ���̸� �Է��Ͻÿ� : ");
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



//2. ���̷ο� �����ϱ�
//	������ ����Ǿ��� �� �̶����� �÷��̾ �Է��� ��� ���� ����ؼ� �����ֱ�

//3.�̷� Ż�� ���� �����ϱ�
// - �̵����� �� ����Ȯ��(20%)�� ������ �߻��Ѵ�.
// - �̵����� �� ����Ȯ��(10%)�� �÷��̾� HP�� ȸ���ȴ�
// �� �̺�Ʈ�� �ߺ����� �߻����� �ʴ´�.


 
