// pch.cpp: 미리 컴파일된 헤더에 해당하는 소스 파일입니다. 성공하려면 컴파일이 필요합니다.
#include <iostream>
#include "pch.h"
using namespace std;

Complex1 Complex1::mul(const Complex1&c) const {
	double r = rPart * c.rPart - iPart * c.iPart;
	double i = rPart * c.iPart + iPart * c.rPart;
	return Complex1(r, i);
}

Complex1 Complex1::div(const Complex1&c) const {
	double d = c.rPart * c.rPart + c.iPart * c.iPart;
	Complex1 c1 = mul(c.conj());
	return Complex1(c1.rPart / d, c1.iPart / d);
}
void Complex1::display() const
{
	cout << "(" << rPart;
	if (iPart > 0)
		cout << "+j" << iPart;
	else if (iPart < 0)
		cout << "-J" << -iPart;
	cout << ")";
}

// 일반적으로 이 파일을 무시하지만 미리 컴파일된 헤더를 사용하는 경우 유지합니다.
