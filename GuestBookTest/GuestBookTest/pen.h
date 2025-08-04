#pragma once
#include <windows.h>

class Pen
{
public:
	/// pen Ŭ���� ������ �� �Ҹ��� ����
	/// GetPen() const; ���� �� �ڵ��� ��ȯ�ϴ� Getter �Լ�
	Pen(int style, int width, COLORREF color);
	~Pen();

	HPEN GetPen() const;

	void Spray(int width, COLORREF color);


private:
	HPEN hPen;
};
