#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
#include <stdexcept>
#include <iostream>

namespace Day0923
{
	//학습 포인트를 단계별로 보여주는 함수
	void TestVector()
	{
		// 1) 선언 + 용량 예약
		// - reserve(n) : "용량(capacity)만" 미리 확보 (size는 0 유지)
		// -push_back() 로 추가할 거라면 reserve가 적함 (realloc/복사 비용 ↓)
		std::vector<int> Scores;	//	int 동적배열
		Scores.reserve(5);	//	예상 최대치 예약(여유 있게 잡기 좋음)

		// 2) 추가(push_back) - 뒤에 붙이기
		Scores.push_back(10);
		Scores.push_back(20);
		Scores.push_back(30);

		// 3) 특정 값으로 초기화된 vector 만들기
		// - 아래는 "3개가 '무명'으로 채워진" 상태 (size == 3)
		std::vector<std::string> Name(3, "무명");

		// 4) 원소 접근 : [], at(), front(), back()
		// - [] : 범위 체크 없음( 빠르지만 위험) -> 범위 벗어나면 UB(터질 수 있음)
		// - at() : 범위 체크 0 -> 범위 벗어나면 예외(std::out_of_range)
		std::printf("첫번째 점수( [] ): %d\n", Scores[0]);
		std::printf("두번째 점수( at ): %d\n", Scores.at(1));
		// try
		// {
		//		std::printf("네번째 점수( at ): %d\n", Scores.at(3));// 예외 발생 예시
		// }	catch(const std::out_of_range& e)	{
		//		std::printf("예외 : %s\n", e.what());
		// }
		std::printf("마지막 점수( back ) : %d\n", Scores.back());
		std::printf("첫번째 점수( front ) : %d\n", Scores.front());

		// 5) 순회 : 인덱스 for, 이터레이터, 범위 기반 for
		std::printf("모든 점수(인덱스 for): ");
		for (size_t i = 0; i < Scores.size(); ++i)
		{
			std::printf("%d ", Scores[i]);
		}
		std::printf("\n");

		std::printf("모든 점수(이터레이터): ");
		for (auto it = Scores.begin(); it != Scores.end(); ++it)
		{
			std::printf("%d ", *it);	//	*it: 현재 원소 값
		}
		std::printf("\n");

		std::printf("모든 점수(범위 기반 for): ");
		for (int v : Scores)
		{
			std::printf("%d ", v);
		}
		std::printf("\n");
		

		// 6) 크기와 용량
		// - size(): 실제 원소 개수
		// - capacity() : 현재 할당된 메모리 크기 (원소 수가 아님)
		// - %zu : size_t 출력 포맷
		std::printf("Size : %zu\n", Scores.size());
		std::printf("Capac.:%zu\n", Scores.capacity());

		// 7) 삭제
		// - pop_back() : 맨 뒤 하나 삭제 (0(1)) -> 가장 안전/빠름
		Scores.pop_back();	//	10, 20, (30 삭제)
		std::printf("pop_back 후 Size: %zu, back() : %d\n", Scores.size(), Scores.back());

		// - clear(): 모든 원소 제거. capacity는 그대로 (메모리는 유지)
		Scores.clear();
		std::printf("clear 후 Size : %zu, Capacity(그대로): %zu\n", Scores.size(), Scores.capacity());

		// -empty() : 비었는지 확인
		std::printf("empty()? %s\n", Scores.empty() ? "true" : "false");

		// 8) 실전 팁) 스왑-앤-팝 : 중간 원소를 0(1)에 지우고 싶을 때
		// - "순서가 중요하지 않을 때만" 사용 가능
		// - 아이디어 : 지울 위치에 '마지막 원소'를 덮어쓰고 pop_back()
		std::vector<int> Numbers = {10, 20, 30, 40, 50};
		int DeleteNumber = 20;

		auto findIt = std::find(Numbers.begin(), Numbers.end(), DeleteNumber);
		if (findIt != Numbers.end())
		{
			*findIt = Numbers.back();	//	지울 자리 <- 마지막 값 복사
			Numbers.pop_back();
		}
		std::printf("스왑-앤-팝 결과: ");
		for (int v : Numbers) std::printf("%d ", v);
		std::printf("\n");

		//9) (선택) 사용자 입력으로 push_back 실습
		//	- reserve vs resize 차이 체감 : resize(n)은 size도 n이 됨( 기존값 + 기본값 채움)
		//	- reserve는 용량만, resize는 크기까지 변경
		std::vector<int> Inputs;
		Inputs.reserve(4);	//	입력 4개 정도 받을 예정이라고 가정
		std::printf("정수 4개를 입력하세요 : ");
		for (int k = 0; k < 4; ++k)
		{
			int x;
			std::cin >> x;
			Inputs.push_back(x);
		}
		std::printf("입력 벡터 : ");
		for (int v : Inputs) std::printf("%d ", v);
		std::printf("\n");

		// 10) (참고) capacity 메모리 회수하고 싶다면
		// - clear후 메모리를 꼭 줄여야 한다면 "shrink_to_fit()" 또는 빈 벡터와 swap
		std::vector<int> Temp = { 1,2,3,4,5 };
		Temp.reserve(1000);
		Temp.clear();
		std::printf("clear만 한 경우 Capacity : %zu\n", Temp.capacity());
		Temp.shrink_to_fit();
		std::printf("shrink_to_fit 후 Capacity : %zu\n", Temp.capacity());
	}	
}

int main()
{
	Day0923::TestVector();
	return 0;
}
