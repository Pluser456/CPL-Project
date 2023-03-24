#include <graphics.h>
#include <conio.h>
#define PI 3.14159265
int main()
{

	ExMessage m;
	// ≥ı ºªØªÊÕº¥∞ø⁄
	initgraph(640, 480);
	settextcolor(WHITE);
	settextstyle(30, 0, _T("ÀŒÃÂ"));
	

	
	while (true)
	{
		cleardevice();
		outtextxy(240, 100, _T("1. ‘≤–Œ "));
		outtextxy(240, 150, _T("2. æÿ–Œ"));
		outtextxy(240, 200, _T("3. …»–Œ"));
		outtextxy(240, 250, _T("4. Õ÷‘≤"));
		outtextxy(240, 300, _T("0. ÕÀ≥ˆ"));
		m = getmessage(EX_CHAR);
		if (m.ch == '0')
		break;
		
		switch(m.ch)
		{
		case '1':
			cleardevice();
			// ª≠‘≤
			circle(320, 240, 100);
			m = getmessage(EX_CHAR);
			break;
		case '2':
			cleardevice();
		//ª≠æÿ–Œ
			rectangle(160, 120, 480, 360);
			m = getmessage(EX_CHAR);
			break;
			//ª≠…»–Œ
		case '3':
			cleardevice();
			pie(220, 140, 420, 340, 0, 2*PI/3.0);
			m = getmessage(EX_CHAR);
			break;
		case '4':
			cleardevice();
			//ª≠Õ÷‘≤
			ellipse(160, 120, 480, 360);
			m = getmessage(EX_CHAR);
			break;
		}
	}

	
	closegraph();
	_getch();
	return 0;
}