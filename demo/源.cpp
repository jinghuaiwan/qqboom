#include<stdio.h>
#include<windows.h>

int main()
{
	char name[30] = { 0 };
	printf("选择轰炸对象\n");
	scanf_s("%s", name,30);
	int times = 0;
	printf("次数\n");
	scanf_s("%d", &times);

	HWND qqhwnd = FindWindowA(NULL, name);


	for (int i = 0;i < times; i++) 
	{
		SendMessageA(qqhwnd, WM_PASTE, 0, 0);
		SendMessageA(qqhwnd, WM_KEYDOWN, VK_RETURN, 0);
	}
	
	return 0;

}



