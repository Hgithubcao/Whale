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
		system("cls");
	}
	for(;i>9;i--)
	{
		bye2();
		whale(i,n,i);
		system("cls");
	}
}
int main()
{
	Hide_Cursor(); 
	bye();
	getch();
	return 0;
}










//                                         水水水水    水      水        水水水水             i-9                   17
//                                          水    水    水   水         水                     i-8           14      16
//                                           水   水     水水          水                      i-7          13       15
//                                            水  水      水          水水水水                i-6           12     j=14
//                                  3          水   水    水         水水水水            9    i-5          n-11   j=13     4
//                                  2           水  水    水        水                   8    i-4         n-10    j=12    3
//                                  1            水 水    水       水                    7   i-3          n-9    j=11     2
//                                  0             水      水      水水水水               6    i-2         n-8     j=10     1
//                                  d
//                                            6    水     水     水      5   i-1     n-7     j=9      7
//                                            5     水    水    水        4     i     n-6     j=8     6
//                                  4                水   水   水         3   i+1     n-5     j=7     5
  //                               3                  水  水  水          2   i+2     n-4     j=6     4
    //                            2                    水 水 水           1   i+3     n-3    j=5      3
      //                         1                      水水水            0   i+4     n-2    j=4      2
    //                          xunhuan d                         kong                        shuchucishu d+1
      
      
      
      
        //                                              水水水            0   i+4     n-1    j=3      1         
