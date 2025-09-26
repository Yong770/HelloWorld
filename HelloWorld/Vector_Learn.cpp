#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
#include <stdexcept>
#include <iostream>

namespace Day0923
{
	//�н� ����Ʈ�� �ܰ躰�� �����ִ� �Լ�
	void TestVector()
	{
		// 1) ���� + �뷮 ����
		// - reserve(n) : "�뷮(capacity)��" �̸� Ȯ�� (size�� 0 ����)
		// -push_back() �� �߰��� �Ŷ�� reserve�� ���� (realloc/���� ��� ��)
		std::vector<int> Scores;	//	int �����迭
		Scores.reserve(5);	//	���� �ִ�ġ ����(���� �ְ� ��� ����)

		// 2) �߰�(push_back) - �ڿ� ���̱�
		Scores.push_back(10);
		Scores.push_back(20);
		Scores.push_back(30);

		// 3) Ư�� ������ �ʱ�ȭ�� vector �����
		// - �Ʒ��� "3���� '����'���� ä����" ���� (size == 3)
		std::vector<std::string> Name(3, "����");

		// 4) ���� ���� : [], at(), front(), back()
		// - [] : ���� üũ ����( �������� ����) -> ���� ����� UB(���� �� ����)
		// - at() : ���� üũ 0 -> ���� ����� ����(std::out_of_range)
		std::printf("ù��° ����( [] ): %d\n", Scores[0]);
		std::printf("�ι�° ����( at ): %d\n", Scores.at(1));
		// try
		// {
		//		std::printf("�׹�° ����( at ): %d\n", Scores.at(3));// ���� �߻� ����
		// }	catch(const std::out_of_range& e)	{
		//		std::printf("���� : %s\n", e.what());
		// }
		std::printf("������ ����( back ) : %d\n", Scores.back());
		std::printf("ù��° ����( front ) : %d\n", Scores.front());

		// 5) ��ȸ : �ε��� for, ���ͷ�����, ���� ��� for
		std::printf("��� ����(�ε��� for): ");
		for (size_t i = 0; i < Scores.size(); ++i)
		{
			std::printf("%d ", Scores[i]);
		}
		std::printf("\n");

		std::printf("��� ����(���ͷ�����): ");
		for (auto it = Scores.begin(); it != Scores.end(); ++it)
		{
			std::printf("%d ", *it);	//	*it: ���� ���� ��
		}
		std::printf("\n");

		std::printf("��� ����(���� ��� for): ");
		for (int v : Scores)
		{
			std::printf("%d ", v);
		}
		std::printf("\n");
		

		// 6) ũ��� �뷮
		// - size(): ���� ���� ����
		// - capacity() : ���� �Ҵ�� �޸� ũ�� (���� ���� �ƴ�)
		// - %zu : size_t ��� ����
		std::printf("Size : %zu\n", Scores.size());
		std::printf("Capac.:%zu\n", Scores.capacity());

		// 7) ����
		// - pop_back() : �� �� �ϳ� ���� (0(1)) -> ���� ����/����
		Scores.pop_back();	//	10, 20, (30 ����)
		std::printf("pop_back �� Size: %zu, back() : %d\n", Scores.size(), Scores.back());

		// - clear(): ��� ���� ����. capacity�� �״�� (�޸𸮴� ����)
		Scores.clear();
		std::printf("clear �� Size : %zu, Capacity(�״��): %zu\n", Scores.size(), Scores.capacity());

		// -empty() : ������� Ȯ��
		std::printf("empty()? %s\n", Scores.empty() ? "true" : "false");

		// 8) ���� ��) ����-��-�� : �߰� ���Ҹ� 0(1)�� ����� ���� ��
		// - "������ �߿����� ���� ����" ��� ����
		// - ���̵�� : ���� ��ġ�� '������ ����'�� ����� pop_back()
		std::vector<int> Numbers = {10, 20, 30, 40, 50};
		int DeleteNumber = 20;

		auto findIt = std::find(Numbers.begin(), Numbers.end(), DeleteNumber);
		if (findIt != Numbers.end())
		{
			*findIt = Numbers.back();	//	���� �ڸ� <- ������ �� ����
			Numbers.pop_back();
		}
		std::printf("����-��-�� ���: ");
		for (int v : Numbers) std::printf("%d ", v);
		std::printf("\n");

		//9) (����) ����� �Է����� push_back �ǽ�
		//	- reserve vs resize ���� ü�� : resize(n)�� size�� n�� ��( ������ + �⺻�� ä��)
		//	- reserve�� �뷮��, resize�� ũ����� ����
		std::vector<int> Inputs;
		Inputs.reserve(4);	//	�Է� 4�� ���� ���� �����̶�� ����
		std::printf("���� 4���� �Է��ϼ��� : ");
		for (int k = 0; k < 4; ++k)
		{
			int x;
			std::cin >> x;
			Inputs.push_back(x);
		}
		std::printf("�Է� ���� : ");
		for (int v : Inputs) std::printf("%d ", v);
		std::printf("\n");

		// 10) (����) capacity �޸� ȸ���ϰ� �ʹٸ�
		// - clear�� �޸𸮸� �� �ٿ��� �Ѵٸ� "shrink_to_fit()" �Ǵ� �� ���Ϳ� swap
		std::vector<int> Temp = { 1,2,3,4,5 };
		Temp.reserve(1000);
		Temp.clear();
		std::printf("clear�� �� ��� Capacity : %zu\n", Temp.capacity());
		Temp.shrink_to_fit();
		std::printf("shrink_to_fit �� Capacity : %zu\n", Temp.capacity());
	}	
}

int main()
{
	Day0923::TestVector();
	return 0;
}
