#include "Button.h"

Button::Button(HWND parent, int id, const wchar_t* text, int x, int y, int width, int height) {
    hButton = CreateWindow(
        L"BUTTON", text,
        WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,
        x, y, width, height,
        parent, (HMENU)id,
        (HINSTANCE)GetWindowLongPtr(parent, GWLP_HINSTANCE),
        nullptr
    );
}

HWND Button::GetHandle() const {
    return hButton;
}
