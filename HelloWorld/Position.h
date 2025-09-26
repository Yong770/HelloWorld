#pragma once

struct Position
{
	int x = 0;
	int y = 0;


	//�򰥸� �� �ִ� ��Ȳ�̸� ��������� �̾߱� ���ִ� ���� ����.
	Position() = default;	//	�ڵ����� �����Ǵ� �⺻�����ڿ� ����.
	

	Position(int InX, int InY)
		: x(InX), y(InY)
	{
		//�߰� ����� �ʿ��� ���. ���ʿ� ���� �����ϱ�.
	}

	Position& operator-=(const Position& other)
	{
		
	}

	
};

//���׿����ڴ� ����ü �ۿ� ���� ���� �Ϲ����̴�.
Position operator+(const Position& a, const Position& b)
{
	return Position(a.x + b.x, a.y + b.y);
}

Position operator-(const Position& a, const Position& b)
{
	return Position(a.x - b.x, a.y - b.y);
}

bool operator==(const Position& a, const Position& b)
{
	return (a.x == b.x) && (a.y == b.y);
}

bool operator!=(const Position& a, const Position b)
{
	//return (a.x != b.x) || (a.y != b.y);
	return !(a == b);
}