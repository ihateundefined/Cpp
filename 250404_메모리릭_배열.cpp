#include <iostream>
#include <crtdbg.h>

using namespace std;

void main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	CTest *p = new CTest[]

	_CrtDumpMemoryLeaks();

	//delete p;
}