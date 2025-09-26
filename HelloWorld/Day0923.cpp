#include "Day0923.h"
#include <cstdio>
#include <vector>
#include "Coordinate.h"

void Day0923::TestTemplateClass()
{
	Coordinate<int> PositionInt(1, 3);
	Coordinate<float> PositionFloat(0.05f, 5.7f);

	printf("PositionInt : %d, %d\n", PositionInt.x, PositionInt.y);
	printf("PositionFloat : %f, %f\n", PositionFloat.x, PositionFloat.y);

	PositionInt.Print();
	PositionFloat.Print();

	Coordinate<std::string> PositionString("A", "B");
	PositionString.Print();

}

void Day0923::TestVector()
{
	// #unclude <vector> �ʼ�
	std::vector<int> Scores;	//	int�迭 scores�� ����
	Scores.reserve(5); // ���� ����� ������ ����Ǵ� �ִ� ũ�⸦ ���� ���� ����

	Scores.push_back(10);	//	vector�� �ڿ� �߰�
	Scores.push_back(20);
	Scores.push_back(30);

	// Ư�� ������ �ʱ�ȭ �� vector�� ����� ���� �� (3���� "����"���� �ʱ�ȭ�� vector)
	std::vector<std::string> Name(3, "����");

	printf("ù��° ���� : %d\n", Scores[0]);	//	�迭 ����ϵ��� ���. �ٸ� ������ ����� ������.

	printf("�ι�° ���� : %d\n", Scores.at(1));	//	�ι�° ��ҿ� ����
	// printf("�׹�° ���� : %d\n", Scores.at(3));	//	�׹�° ��ҿ� ����(= ���ܸ� �߻�)
	printf("����° ���� : %d\n", Scores.back());	//	������ ��ҿ� ����
	printf("ù��° ���� : %d\n", Scores.front());	//	ù��° ��ҿ� ����

	//�Ϲ����� ���
	printf("��� ���� : ");
	for (int i = 0; i < Scores.size(); i++)
	{
		printf("%d ", Scores[i]);
	}
	printf("\n");

	//�ݺ��ڸ� ���� ��ȸ ���
	//for (std::vector<int>::iterator iter = Scores.begin(); iter != Scores.end(); iter++)
	for (auto iter = Scores.begin(); iter != Scores.end(); iter++)
	{
		printf("%d", *iter);	//	���� iter��ġ�� �ִ� ���� ���
	}
	printf("\n");

	// �뷮 Ȯ��(Size, Capacity)
	// Size : ���� vector���� ���� ���Ǵ� ���� ����ִ� ����
	// Capacity : ���� vector�� �Ҵ�� �޸� ����(���� ������� ���� �͵� ����)
	printf("���� ���� ����(Size) : %u\n", Scores.size());
	printf("�Ҵ�� �޸�(Capacity) : %u\n", Scores.capacity());

	//�����ϱ� : �ڿ��� �����ϴ� ���� ����.
	Scores.pop_back(); // ������ ���� �ϳ� ����

	Scores.clear(); // ��� ���� ����(Size�� 0, Capacity�� �״��)

	Scores.empty();	//	������� �Ⱥ������ Ȯ��

	// �߰��� �߰� �����ϴ� �Լ�. ( �������ϸ� ���� ���� )
	//Scores.insert();
	//Scores.erase();	

	//���� �� ��
	// - ������ ���ҵ��� ������ �߿����� ���� �� ��밡��
	// - �߰��� �ִ� ���Ҹ� ������ �� �������� �ִ� ���ҿ� ���� ��ȯ�ϰ� pop_back���� �����ϴ� ����
	std::vector<int> Numbers = { 10,20,30,40,50 };
	int DeleteNumber = 20;

std:std::vector<int>::iterator FindIter = std::find(Numbers.begin(), Numbers.end(), DeleteNumber);
	if (FindIter != Numbers.end())
	{
		//ã�Ҵ�
		*FindIter = Numbers.back(); // ã�� ��ġ�� ������ ���� �־��.
		Numbers.pop_back();	//	������ ��� ����
	}
	else
	{
		//����.
	}

	int i = 0;

}

void Day0923::TestVectorPractice()
{
	//std::vector �����ϱ�
	/*
		1. ���� �Է¹ް� ����ϱ�
		2. �ִ�, �ּ� ���ϱ�
		3. �����ϱ� (std::sort)
		4. Ư�� �� ã�� (std::find����)
		5. �ߺ� �����ϱ�
		6. ���� �ΰ� ��ġ��
		7. ���ڿ� ����� ����ϱ�
		8. ��� ��� ���ϱ�
	*/
	
	//1.
	 std::vector<int> Numbers = { 10, 20, 30 };
		printf("%d", Numbers.front());
	
	//2



}
