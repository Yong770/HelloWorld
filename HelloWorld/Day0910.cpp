#include "Day0910.h"
#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <direct.h>
#include <fstream>
#include <string>






void Day0910_String()
{

	/*char HelloString[] = "Hello World!\n";

	printf("%s", HelloString);*/	//	���ڿ� ����ϱ�


	//���� �ǽ�
	// HelloString ���� 'e'�� ���°�� �ִ��� ����غ���
	
	/*int Index = 0;
	char Target = 'e';
	bool IsFind = false;
	while (HelloString[Index] != '\0')
	{
		if (HelloString[Index] == Target)
		{
			IsFind = true;
			break;
		}
		Index++;
	}

	if (IsFind)
	{
		printf("[%c]�� %d�� �ε����� �ֽ��ϴ�.\n", Target, Index);
	}
	else
	{
		printf("[%c]�� ã�� �� �����ϴ�.\n", Target);
	}*/

	/*int Index = 0;
	char Target = 'e';
	bool IsFind = false;


	while (HelloString[Index] != '\0')
	{
		if (HelloString[Index] == Target)
		{
			IsFind = true;
			break;
		}
		Index++;
	}
	if (IsFind)
	{
		printf("[%c]�� %d�� �ε����� �ֽ��ϴ�\n", Target, Index);
	}
	else
	{
		printf("[%c]�� ã�� �� �����ϴ�\n", Target);
	}*/


	/*
		1.���ڿ��� ���̸� �����ϴ� �Լ� �����
		 int MyStringLength(const char* Target);

		2.���ڿ��� �����ϴ� �Լ� �����
		 void MyStringCopy(const char* Source, char* Destination);
		

		3.���ڿ��� ��ġ�� �Լ� �����(Source �ڿ� Destination�� ������ ���̱�)
		 void MyStringCat(char* Source, const char* Destination);

		4.���ڿ� �ΰ��� ���ϴ� �Լ� �����
		 ���� ���� �� ���ڿ��� ������ 0, ù��°�� ������ ����, �ι�°�� ������ ���
		 int MyStringCompare(const char* String1, const char* string2);

		5.���ڿ��� �Է� �޾� ������ �����ϴ� �Լ� �����
		  int MyAtoI(const char* Source);

		6.���ڿ��� �Է� �޾� �Ǽ��� �����ϴ� �Լ� �����
		 float MyAtoF(const char* Source);
	*/

	


	

		



	


	


	
	

	

	
	
	


}

int FindCharIndex(const char* TargetString, const char TargetCharacter)
{
	return 0;
}





//1.���ڿ��� ���̸� �����ϴ� �Լ� �����

int MyStringLength(const char* Target)
{
	int Index = 0;

	while (Target[Index] != '\0')
	{
		Index++;

	}
	return Index;


}

//2.���ڿ��� �����ϴ� �Լ� �����

	//char Destination[256] = { 0 }; // ũ��� �׳� ����ϴٰ� ����
	//char* Destination2 = new char[MyStringLength(TestString) + 1]; // +1�� '\0'�� ����
	//MyStringCopy(TestString, Destination2);
	//printf("\n\n���ڿ� �����ϱ�\n");
	//printf("Source\t\t : %s\n", TestString);
	//printf("Destination\t : %s\n", Destination2);
	//delete[] Destination2
	//Destination2 = nullptr;


void MyStringCopy(const char* Source, char* Destination)
{
	int Index = 0;
	while (Source[Index] != '\0')
	{
		Destination[Index] = Source[Index];
		Index++;
	}
	Destination[Index] = '\0';

}


//3.���ڿ��� ��ġ�� �Լ� �����(Source �ڿ� Destination�� ������ ���̱�)

	//printf("\n\n���ڿ� ��ġ��\n");
	//char TestSource[32] = "Hello";
	//printf("���� : %s\n", TestSource);
	//MyStringCat(TestSource, "World!");
	//printf(" : %s")





void MyStringCat(char* Source, const char* Destination)
{
	int SourceLast = MyStringLength(Source);
	int Index = 0;
	while (Destination[Index] != '\0')
	{
		Source[SourceLast + Index] = Destination[Index];
		Index++;
	}
	Source[SourceLast + Index] = '\0';
}


//���� �ǽ�
	// , �ڿ� �ִ� ���� ���ĺ��� ��� �빮���̾�� �Ѵ�.
	// �Է¹��� ���� : "Hello,World!:
	// ��¹��� ���� : "Hello,WORLD!:

void SimpleParser(char* Source, const char Delimiter)
{
	int CommaIndex = FindCharIndex(Source, Delimiter);
	char* AfterComma = Source + CommaIndex + 1;
	const int ToUpper = 'a' - 'A';
	while ((*AfterComma) != '\0')
	{
		if ((*AfterComma) >= 'a' && (*AfterComma) <= 'z')
		{
			(*AfterComma) -= ToUpper;
		}
		AfterComma++;
	}
}



/*
4.���ڿ� �ΰ��� ���ϴ� �Լ� �����
	���� ���� �� ���ڿ��� ������ 0, ù��°�� ������ ����, �ι�°�� ������ ���
	int MyStringCompare(const char* String1, const char* string2);
*/
//int MyStringCompare(const char* String1, const char* String2)
//{
//	int Index = 0;
//
//	while (String1[Index] != '\0' && String2[Index] != '\0')
//	{
//
//	}
//}




int MyStringCompare(const char* String1, const char* String2)
{
	int Index = 0;

	while (String1[Index] != '\0' && String2[Index] != '\0')
	{
		if (String1[Index] != String2[Index])
		{
			break;
		}
		Index++;
	}

	return String1[Index] - String2[Index];

	// �Ѵ� \0�� �Ǿ���.		-> ���� ���̰� ���� ���� ���ڵ鵵 ���Ҵ�. -> 0
	// �ϳ��� \0�� �Ǿ���.		-> ���� ���̰� �ٸ��� -> ���� �ٸ���.
	// �߰��� �ٸ� ���� �־���. -> ���� �ٸ���.
}




//5.���ڿ��� �Է� �޾� ������ �����ϴ� �Լ� �����

int MyAtoI(const char* Source)
{
	int Index = 0;
	int Sign = 1;
	if (Source[0] == '-')
	{
		Sign = -1;
		
		Index++;
	}

	int Result = 0;
	while (Source[Index] != '\0')
	{
		//if (Source[Index] >= '0' && Source[Index] <= '9')
		//{//�ϸ� ����.
		//}
		Result = Result * 10 + Source[Index] - '0';

		Index++;
	}
	return Sign * Result;
}



//6.���ڿ��� �Է� �޾� �Ǽ��� �����ϴ� �Լ� ����� 

float MyAtoF(const char* Source)
{
	float Result = 0.0f;
	int PointPosition = FindCharIndex(Source, '.');
	if (PointPosition >= 0)
	{
		//���� ã�Ҵ�
	}
	else
	{
		//���� ��ã�Ҵ�.
		MyAtoI(Source);
	}
	return 0.0f;
}





//const int Size = 32;
//char InputString[Size];
//printf("\n\n������ �Է��ϼ��� : ");
//std::cin.getline(InputString, Size);
//printf(" �Էµ� ������ [%s] �Դϴ�.", InputString);



//void ReadFile()
//{
//	//#inclue <fstream>		#include <string> �ʿ�
//	const char* FilePath = ".\\Data\\TestData.txt";
//
//	std::ifstream InputFile(FilePath);
//	if (!InputFile.is_open())	//	������ ���ȴ��� Ȯ���ϴ� �Լ�
//	{
//		printf("������ �� �� �����ϴ�.\n");
//		printf("[%s] ��θ� Ȯ���ϼ���.\n", FilePath);
//		return;
//	}
//
//	std::string FileContents(
//		(std::istreambuf_iterator<char>(InputFile)),
//		std::istreambuf_iterator<char>()); // InputFile�� �ִ� ���ڵ��� ��� �о FileContents�� �����ϱ�
//
//		printf("���� ������ ������ �����ϴ�.\n");
//		printf("%s\n", FileContents.c_str()); // FileContents�ȿ� �ִ� ���ڿ��� const char*�� �����ִ� �Լ�
//
//}

//void TestString()
//{
//	//#include <string>
//	std::string str1 = "Hello";
//	std::string str2("World");	//	str1���� ������ �� �ٶ����ϴ�
//
//	const char* Temp1 = "Hello";
//	char Temp2[32] = { 0 };
//	//Temp2 = Temp1;
//	//char* Temp3 = Temp1;
//
//	std::string str3 = str1;		//	����
//	size_t Length = str3.length();	//	���� Ȯ��
//	int Size = Length;	//	ũ�Ⱑ �ȸ¾Ƽ� ©�� �� �ִ�.
//	Length = str3.size();
//
//	std::string str4 = str1 + " " + str2; // str4 = "Hello World", + ����� ���ɿ� ������ ���� �� �ִ�.
//	str4 += "!";
//
//	if (str1 == str2)
//	{
//
//	}
//	if (str1 != str2)
//	{
//
//	}
//	if (str1 > str2)	//	���� ������� ��
//	{
//
//	}
//
//	size_t Position = str1.find('e');
//	//�߰��� �������� std::string::npos ����
//	Position = str1.find('e', Position + 1);	//	�ι�° e�� ã�� �� (ù���� e�� �߰ߵǾ��ٴ� �����Ͽ�)
//
//	str1[1] = 'E'; // Ư�� ��ġ�� ���ڿ� �����ϱ�. �ε��� ���� Ȯ���� ����. ��Ÿ�� ������ �� �� ����
//	//str1[10] = 'E';	//	����
//	str1.at(1) = 'E';	//	�����ϰ� ����
//
//	str1.c_str();	//	C��Ÿ�� ���ڿ� �����ϱ�
//
//}
