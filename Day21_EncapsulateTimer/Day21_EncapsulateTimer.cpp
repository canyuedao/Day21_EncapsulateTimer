// Day21_EncapsulateTimer.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "time.h"

int _tmain(int argc, _TCHAR* argv[])
{	
	char *cStr="Hello World!";
	ctime itime;
	

	itime.excuted(100,cStr);
	
	while(itime.num<=50){
		
	}
	itime.kill();
	//while(1);	
	return 0;
}

