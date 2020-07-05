#include <stdio.h>
#include <windows.h>
#include <tchar.h>

void ShowTestWindow();

int main()
{
    ShowTestWindow();
    return 0;
}

void ShowTestWindow()
{
    MessageBox(NULL, _T("処理は成功しました。"), _T("情報"), MB_OK);

    return;
} // http://c-lang.sevendays-study.com/win32/day2.html
