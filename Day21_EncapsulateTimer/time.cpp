#include "time.h"
#include <stdio.h>
#pragma comment(lib,"Winmm.lib")

//int num=0;
ctime::ctime(){
	num=0;
}
ctime::ctime(int a=0){
	num=a;
}
void ctime::excuted(int iTime,char *pStr){	
	cStr=pStr;
	uTimerID=timeSetEvent(iTime,Time_Accuracy,pTIMECALLBACK,(DWORD_PTR)this,TIME_PERIODIC);	
}
void ctime::print(){	
	printf("%d %s\n",num++,cStr);	
}
void ctime::kill(){
	timeKillEvent(uTimerID);
}