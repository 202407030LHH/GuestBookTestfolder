// Pen.h
#pragma once
#include "pen.h"


Pen::Pen(int style, int width, COLORREF color)
{
	hPen = CreatePen(style, width, color);
}

Pen::~Pen()
{
	DeleteObject(hPen);
}

HPEN Pen::GetPen() const
{
	return hPen;
}
void Pen::Spray(int width, COLORREF color) {
	LOGPEN logpen;
	logpen.lopnStyle = PS_DOT;
	logpen.lopnWidth.x = width;
	logpen.lopnWidth.y = 0;
	logpen.lopnColor = color;

	hPen = CreatePenIndirect(&logpen);
}
