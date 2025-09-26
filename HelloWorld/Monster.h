#pragma once
#include <string>

class Monster
{
public:
	Monster() = default;
	Monster(const char* InName , int InHealth, float InAttackPower)
		: Name(InName) , Health(InHealth), AttackPower(InAttackPower)
	{

	}
	

	void Attack();

protected:

	std::string Name;
	int Health = 0;
	float AttackPower = 0.0f;

	const std::string& GetName() const { return Name; }
	const int GetHealth() const { return Health; }
	const float GetAttackPower() const { return AttackPower; }


};

class Goblin : public Monster
{
	void DubbleAttack();
};

class Orc : public Monster
{
	void HugeAttack();
};

class Zombie : public Monster
{
	void Bite();
};

class Skeleton : public Monster
{
	void SpinAttack();
};