
#pragma once
#include <windows.h>

class Button {
public:
    Button(HWND parent, int id, const wchar_t* text, int x, int y, int width, int height);
    HWND GetHandle() const;

private:
    HWND hButton;
};
