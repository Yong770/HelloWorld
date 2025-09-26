#include "TestMath.h"
#include <stdio.h>


void PrintHelloWorld()
{
    printf("Hello World\n");
}

int Sum(int Test1, int Test2) // int Sum(int, int); 이 선언을 정의했다.
{
    return Test1 + Test2;
}

int Multiply(int Number1, int Number2)
{
    return Number1 * Number2;
}

int Minus(int Test1, int Test2)
{
    return Test1 - Test2;
}

int divide(int Test1, int Test2)
{
    return Test1 / Test2;
}

float Sum(float Test1, float Test2)
{
	return Test1 + Test2;
}



template <typename T>
T Add(T A, T B)
{
	return A + B;
}



int TestRecurcive(int Number)
{
	if (Number < 2)
	{
		return 1;
	}
	printf("TestRecurcive : %d", Number);
	return TestRecurcive(Number - 1);
}