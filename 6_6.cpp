#include <graphics.h>
#include <conio.h>
#define PI 3.14159265
int main()
{

	ExMessage m;
	// ��ʼ����ͼ����
	initgraph(640, 480);
	settextcolor(WHITE);
	settextstyle(30, 0, _T("����"));
	

	
	while (true)
	{
		cleardevice();
		outtextxy(240, 100, _T("1. Բ�� "));
		outtextxy(240, 150, _T("2. ����"));
		outtextxy(240, 200, _T("3. ����"));
		outtextxy(240, 250, _T("4. ��Բ"));
		outtextxy(240, 300, _T("0. �˳�"));
		m = getmessage(EX_CHAR);
		if (m.ch == '0')
		break;
		
		switch(m.ch)
		{
		case '1':
			cleardevice();
			// ��Բ
			circle(320, 240, 100);
			m = getmessage(EX_CHAR);
			break;
		case '2':
			cleardevice();
		//������
			rectangle(160, 120, 480, 360);
			m = getmessage(EX_CHAR);
			break;
			//������
		case '3':
			cleardevice();
			pie(220, 140, 420, 340, 0, 2*PI/3.0);
			m = getmessage(EX_CHAR);
			break;
		case '4':
			cleardevice();
			//����Բ
			ellipse(160, 120, 480, 360);
			m = getmessage(EX_CHAR);
			break;
		}
	}

	
	closegraph();
	_getch();
	return 0;
}