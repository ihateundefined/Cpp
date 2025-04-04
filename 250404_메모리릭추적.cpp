#include <iostream>
#include <crtdbg.h>

using namespace std;

void main()
{
	_CrtSetBreakAlloc(80);
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	int* p = new int;

	_CrtDumpMemoryLeaks();

	//delete p;
}