#include<graphics.h>
#include<stdio.h>
#include<iostream>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

using namespace std;
int main(void)
{

	//system("pause");
	IMAGE images[148];
	char fileName[128];
	cout << "loading install images......" << endl;


	for (int i = 1; i <= 148; i++)
	{
		sprintf_s(fileName, "D:\\images2\\_%04d_Í¼²ã-%d.jpg", 148 - i, i);
		loadimage(&images[i - 1], fileName);
	}
	initgraph(800, 450);
	mciSendString("play ¼«ÀÖ¾»ÍÁ.mp3 repeat", 0, 0, 0);
	while (1) {
		for (int i = 0; i <= 148; i++)
		{
			putimage(0, 0, &images[i]);
			Sleep(75);
		}
	}
	system("pause");
	closegraph();
	return 0;
}