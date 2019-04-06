#include<conio.h>
#include<iostream>
#include<windows.h>
using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
void gotoxy(int x, int y)
{
    COORD pos = {x,y};
    
    SetConsoleCursorPosition(hConsole, pos);

}
void Hide_Cursor()
{
    CONSOLE_CURSOR_INFO cursor_info = {1, 0}; 
    SetConsoleCursorInfo(hConsole, &cursor_info);
}
void SetColor(int color)
{
    SetConsoleTextAttribute(hConsole, color);
}
void whale(int &i,int &n,int &j)
{
	    if(j%2==0)
		   --n;
		else
		   ++n;
		gotoxy( i,  n);
		cout<<"鲸鲸鲸鲸鲸鲸鲸"<<endl;
		gotoxy( i-2,  n+1);
		cout<<"鲸              鲸"<<endl;
		gotoxy( i-4,  n+2);
		cout<<"鲸                  鲸"<<endl;
		gotoxy( i-6,  n+3);
		cout<<"鲸                      鲸"<<endl;
		gotoxy( i-8,  n+4);
		cout<<"鲸     ^                    鲸鲸鲸"<<endl;
		gotoxy( i-10,  n+5);
		cout<<"鲸                              鲸  鲸"<<endl;
		gotoxy( i-10,  n+6);
		cout<<"鲸                                  鲸"<<endl;
		gotoxy( i-10,  n+7);
		cout<<"鲸----╯                            鲸"<<endl;
		gotoxy( i-10,  n+8);
		cout<<"鲸鲸鲸鲸鲸鲸鲸鲸鲸鲸鲸鲸鲸鲸鲸鲸鲸鲸鲸"<<endl;
}
void welcome()
{
	int i,n=15;
	for(i=50;i>30;i--)
	{
		whale(i,n,i);
		system("cls");		
	}
	for(int j=0;j!=10;j++)
	{
		whale( i,n,j);
		if(j>=3) 
		{
			for(int d=0;d<j-2;d++)
			{
				if(d==0)
					gotoxy(i+4,n-1);
				else
					gotoxy(i+5-d,n-1-d);
				cout<<"水";
				for(int k=0;k<d-1;k++) 
				    cout<<" ";
				cout<<"水";
				for(int k=0;k<d-1;k++) 
				    cout<<" ";
				cout<<"水";
			}
		}
		if(j!=9)
		    system("cls");
	}
	//for(int j=0;j<8;j++)
//	{
//		gotoxy(20,7-j);
//		if(j==0||j==7)
//			for(int k=0;k<36;k++)
//		        cout<<"-";
//		else
//		{				
//			cout<<'|';
//			gotoxy(55,7-j);
//			cout<<'|'<<endl;
//		}
//		Sleep(50);
//	}
//	gotoxy(21,1);
//	cout<<"欢迎使用";
//	Sleep(100);
//	gotoxy(25,2);
//	cout<<"由";
//	Sleep(100);
//	cout<<"李振华、";
//	Sleep(100);
//	cout<<"杨连、";
//	Sleep(100);
//	cout<<"沈技毅";
//	Sleep(100); 
//	cout<<"创作的"<<endl; 
//	gotoxy(38,3);
//	cout<<"手机名片管理系统"<<endl;	
//	gotoxy(32,5);
//	cout<<"loading:"<<endl;
//	SetColor(222);
//	for(int j=0;j<101;j++)
//	{
//		gotoxy(40,5);
//		cout<<j<<"%"<<endl;
//		Sleep(j);
//	} 
//	SetColor(444);
//	while(1)
//	{
//		gotoxy(24,6);
//		cout<<"请按任意键开始你的ios8之旅"<<endl;
//		if(kbhit())
//		    break; 
//		Sleep(1000);
//		gotoxy(24,6);
//		for(int j=0;j<25;j++)
//		    cout<<' ';
//		if(kbhit())
//		    break; 
//		Sleep(500);
//	} 
	system("cls"); 
//	system("color 37");
}
void bye(int &i,int &n,int j)
{
	whale( i,n,j);
	for(int d=0;d<j-2;d++)
	{
		if(d==0)
			gotoxy(i+4,n-1);
		else
			gotoxy(i+5-d,n-1-d);
		cout<<"水";
		for(int k=0;k<d-1;k++) 
		    cout<<" ";
		cout<<"水";
		for(int k=0;k<d-1;k++) 
		    cout<<" ";
		cout<<"水";
	}
}
void bye2()
{
	for(int j=10;j<=18;j++)
	{		
		gotoxy(38-j,17-j);
		cout<<"水";
    	if(j<=14)
	    {
		   	gotoxy(36,17-j);
        	cout<<"水";
		}	
	    gotoxy(34+j,17-j);
   		cout<<"水";
	    if(j==10)
		{
			gotoxy(46,7);
			cout<<"水水水"<<endl; 			
		}
    	if(j>=11&&j<=13)
		{
			gotoxy(30,17-j);
		    cout<<"水"<<endl; 
		}
		if(j>=13&&j<=14)
		{
			gotoxy(36+j,17-j);
		    cout<<"水水水"<<endl; 
		}
	     if(j>=14&&j<=16)
		{
			gotoxy(28,17-j);
		    cout<<"水"<<endl; 
		    if(j!=14)
		    {
		    	gotoxy(50-j,17-j);
		    	cout<<"水";
				if(j==16)
				    cout<<"  ";
				cout<<"水"<<endl; 
		    }
		}
		if(j==18)
		{
			gotoxy(23,0);
			cout<<"水水水"<<endl; 
			gotoxy(33,0);
			cout<<"水    水"<<endl; 
			gotoxy(53,0); 
			cout<<"水水水"<<endl; 
		}
	}
}
void bye()
{
	int i=30,n=15;
	for(int j=10;j!=18;j++)
	{
		bye( i,n,j);
		for(int k=0;k<=j-11&&k<3;k++)
		{
			gotoxy(30,n-k-9);
		    cout<<"水"<<endl; 
		}
		for(int k=0;k<=j-14&&k<3;k++)
		{
			gotoxy(28,n-k-12);
		    cout<<"水"<<endl; 
		    for(int d=0;d<k;d++)
		    {
		    	gotoxy(35-d,n-k-12);
		    	cout<<"水";
				if(d==1)
				    cout<<"  ";
				cout<<"水"<<endl; 
		    }
		}
		if(j==17)
		{
			gotoxy(23,0);
			cout<<"水水水"<<endl; 
			gotoxy(33,0);
			cout<<"水    水"<<endl; 
			gotoxy(53,0); 
			cout<<"水水水"<<endl; 
		}
		for(int k=0;k<=j-13&&k<2;k++)
		{
			gotoxy(i+19+k,n-k-11);
		    cout<<"水水水"<<endl; 
		}
		if(j>=10)
		{
			gotoxy(46,n-8);
			cout<<"水水水"<<endl; 			
		}
//		getch();
		system("cls");
	}
	for(;i>9;i--)
	{
		bye2();
		whale(i,n,i);
//		getch();
		system("cls");
	}
}
int main()
{
	Hide_Cursor();
	system("color 37");
	welcome();
	bye();
	getch();
	return 0;
}       

//                                   5     水    水    水        4     i     n-6     j=8     6
//                                  4       水   水   水         3   i+1     n-5     j=7     5
  //                               3         水  水  水          2   i+2     n-4     j=6     4
    //                            2           水 水 水           1   i+3     n-3    j=5      3
      //                         1             水水水            0   i+4     n-2    j=4      2
      
      
      
      
      
        //                                    水水水            0   i+4     n-1    j=3      1         
