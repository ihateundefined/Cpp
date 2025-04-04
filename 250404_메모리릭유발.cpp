#include <iostream>
#include <crtdbg.h>

using namespace std;

void main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	int* p = new int;

	//delete p;

	/*
		메모리 릭 유발 결과 -> 출력창
		Detected memory leaks!
		Dumping objects ->
		{80} normal block at 0x0000021C663A0850, 4 bytes long.
		Data: <    > CD CD CD CD 
		Object dump complete.
	*/
}