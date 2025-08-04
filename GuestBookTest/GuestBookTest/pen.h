#pragma once
#include <windows.h>

class Pen
{
public:
	/// pen 클래스 생성자 및 소멸자 선언
	/// GetPen() const; 내부 펜 핸들을 반환하는 Getter 함수
	Pen(int style, int width, COLORREF color);
	~Pen();

	HPEN GetPen() const;

	void Spray(int width, COLORREF color);


private:
	HPEN hPen;
};
