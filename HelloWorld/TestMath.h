#pragma once

// 헤어파일에는 선언을 작성한다.
// Ctrl + k + o : Cpp와 h를 전환 

void PrintHelloWorld();			// 리턴하는 값이 없고 (void) 이름은 PrintHelloWorld고 파라메터도 없다.




int Sum(int Test1, int Test2); //리턴타입이 int고 이름은 Sum이고 파라메터는 int 2개인 함수를 선언했다.
//int Sum(int, int); // 선언할 때는 함수의 파라메터 이름은 생략해도 된다.

//파라메터 두개를 곱해서 돌려주는 함수
int Multiply(int Number1, int Number2 = 2); // 디폴트 파라메터 사용 예시
											// 해당 파라메터 없이 함수를 호출하면 기본적으로 설정된 값이 대신 들어간다.
											// 선언부에만 값을 설정한다.
											//디폴트 파라메터는 항상 뒤에서부터 있어야 한다.

int Minus(int Test1, int Test2);

int divide(int Test1, int Test2);


int TestRecurcive(int Number);






