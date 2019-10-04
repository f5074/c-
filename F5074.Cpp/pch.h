// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

#ifndef PCH_H
#define PCH_H

// TODO: 여기에 미리 컴파일하려는 헤더 추가
class Complex1 {
	double rPart, iPart;

public:
	Complex1(double r = 0, double i = 0) : rPart(r), iPart(i) {

	}
	Complex1 conj() const {
		return Complex1(rPart, -iPart);
	}
	Complex1 add(const Complex1&c) const {
		return Complex1(rPart + c.rPart, iPart + c.iPart);
	}
	Complex1 sub(const Complex1&c) const {
		return Complex1(rPart - c.rPart, iPart - c.iPart);
	}
	Complex1 mul(const Complex1&c) const;
	Complex1 div(const Complex1&c) const;
	void display() const;
};
#endif //PCH_H
