#include <Windows.h>
#define Time_Accuracy 1
class ctime{
private:	
	char *cStr;
	void print();
	UINT uTimerID;
	static void CALLBACK pTIMECALLBACK (UINT uTimerID, UINT uMsg, DWORD_PTR dwUser, DWORD_PTR dw1, DWORD_PTR dw2){
		ctime *pThis=(ctime*)dwUser;
		pThis->print();		
	}
	
public:	
	int num;
	ctime(int);
	ctime();
	void excuted(int,char*);
	void kill();
};