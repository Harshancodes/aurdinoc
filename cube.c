#include <stdio.h>
int n=3,x,y;
int i,j;
char a1[3][3],a2[3][3],a3[3][3],a4[3][3],a5[3][3],a6[3][3];
void creatmatrix1()
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a1[i][j]='-';
		}
	}
	
}
void display1()
{
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c ",a1[i][j]);
		}
		printf("\n");
	}
}
void creatmatrix2()
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a2[i][j]='-';
		}
	}
	
}
void display2()
{
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c ",a2[i][j]);
		}
		printf("\n");
	}
}
void creatmatrix3()
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a3[i][j]='-';
		}
	}
	
}
void display3()
{
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c ",a3[i][j]);
		}
		printf("\n");
	}

}
void creatmatrix4()
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a4[i][j]='-';
		}
	}
	
}
void display4()
{
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c ",a4[i][j]);
		}
		printf("\n");
	}
}
void creatmatrix5()
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a5[i][j]='-';
		}
	}
	
}
void display5()
{
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c ",a5[i][j]);
		}
		printf("\n");
	}
}
void creatmatrix6()
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a6[i][j]='-';
		}
	}
	
}
void display6()
{
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c ",a6[i][j]);
		}
		printf("\n");
	}
}
void show(){
	printf("matrix 1\n");
		display1();
			printf("matrix 2\n");
		display2();
	printf("matrix 3\n");
	display3();
	printf("matrix 4\n");
	display4();
	printf("matrix 5\n");
	display5();
	printf("matrix 6\n");
	display6();

}
int main()
{
	printf("matrix 1\n");
	creatmatrix1();
	display1();
	printf("matrix 2\n");
	creatmatrix2();
	display2();
	printf("matrix 3\n");
	creatmatrix3();
	display3();
	printf("matrix 4\n");
	creatmatrix4();
	display4();
	printf("matrix 5\n");
	creatmatrix5();
	display5();
	printf("matrix 6\n");
	creatmatrix6();
	display6();
	printf("ground rules press the matrix no and index to play\n");
	int f=0;
	for(i=0;i<54;i++){
	char ins;
	if(f%2==0)
	ins='x';
	else
	ins='o';
		int no;
	if(i==0){
	printf("enter the matrix no\n");
     scanf("%d",&no);
   }
	switch(no){
		case 1:
			printf("matrix1:\nenter the index values :\n ");
			display1();
			scanf("%d%d",&x,&y);
			a1[x][y]=ins;
		//	show();	
			if(x==1&&y==1)
			no=3;
			if(x==1&&y==0)
			no=4;
			if(x==2&&y==1)
			no=6;
			if(x==1&&y==2)
			no=2;
			if(x==0&&y==1)
			no=5;
			if(x==0&&y==0){
			printf("which matrix you want to move 4 or 5\n");
			scanf("%d",&no);}
			if(x==2&&y==2){
			printf("which matrix you want to move 2 or 6\n");
			scanf("%d",&no);}
			if(x==0&&y==2){
			printf("which matrix you want to move 5 or 2\n");
			scanf("%d",&no);}
			if(x==2&&y==0){
			printf("which matrix you want to move 4 or 6\n");
			scanf("%d",&no);}
			break;
		case 2:
			printf("matrix2:\nenter the index values :\n");
			display2();
			scanf("%d%d",&x,&y);
			a2[x][y]=ins;
		//	show();
		    if(x==0&&y==1)
		    no=5;
		    if(x==1&&y==0)
		    no=1;
		     if(x==1&&y==1)
		    no=4;
		    if(x==1&&y==2)
		    no=3;
		    if(x==2&&y==1)
		    no=6;
		    if(x==0&&y==0){
		    	printf("enter matrix 1 or 5\n");
		    	scanf("%d",&no);
			}
			if(x==2&&y==2){
		    	printf("enter matrix 3 or 6\n");
		    	scanf("%d",&no);
			}
			if(x==0&&y==2){
		    	printf("enter matrix 3 or 5\n");
		    	scanf("%d",&no);
			}
			if(x==2&&y==0){
		    	printf("enter matrix 1 or 6\n");
		    	scanf("%d",&no);
			}
		    break;
		    case 3:
		    printf("matrix3:\nenter the index values :\n");
			display3();
			scanf("%d%d",&x,&y);
			a3[x][y]=ins;
			if(x==0&&y==1)
		    no=5;
		    if(x==1&&y==0)
		    no=2;
		     if(x==1&&y==1)
		    no=1;
		    if(x==1&&y==2)
		    no=4;
		    if(x==2&&y==1)
		    no=6;
		    if(x==0&&y==0){
		    	printf("enter matrix 2 or 5\n");
		    	scanf("%d",&no);
			}
			if(x==2&&y==2){
		    	printf("enter matrix 4 or 6\n");
		    	scanf("%d",&no);
			}
			if(x==0&&y==2){
		    	printf("enter matrix 4 or 5\n");
		    	scanf("%d",&no);
			}
			if(x==2&&y==0){
		    	printf("enter matrix 2 or 6\n");
		    	scanf("%d",&no);
			}
		    break;
		    case 4:
		    printf("matrix4:\nenter the index values :\n");
			display4();
			scanf("%d%d",&x,&y);
			a4[x][y]=ins;
			if(x==0&&y==1)
		    no=5;
		    if(x==1&&y==0)
		    no=3;
		     if(x==1&&y==1)
		    no=2;
		    if(x==1&&y==2)
		    no=1;
		    if(x==2&&y==1)
		    no=6;
		    if(x==0&&y==0){
		    	printf("enter matrix 3 or 5\n");
		    	scanf("%d",&no);
			}
			if(x==2&&y==2){
		    	printf("enter matrix 1 or 6\n");
		    	scanf("%d",&no);
			}
			if(x==0&&y==2){
		    	printf("enter matrix 1 or 5\n");
		    	scanf("%d",&no);
			}
			if(x==2&&y==0){
		    	printf("enter matrix 3 or 6\n");
		    	scanf("%d",&no);
			}
		    break;
		    case 5:
		    printf("matrix5:\nenter the index values :\n");
			display5();
			scanf("%d%d",&x,&y);
			a5[x][y]=ins;
			if(x==0&&y==1)
		    no=3;
		    if(x==1&&y==0)
		    no=4;
		     if(x==1&&y==1)
		    no=6;
		    if(x==1&&y==2)
		    no=2;
		    if(x==2&&y==1)
		    no=1;
		    if(x==0&&y==0){
		    	printf("enter matrix 3 or 4\n");
		    	scanf("%d",&no);
			}
			if(x==2&&y==2){
		    	printf("enter matrix 1 or 2\n");
		    	scanf("%d",&no);
			}
			if(x==0&&y==2){
		    	printf("enter matrix 2 or 3\n");
		    	if(no==2||no==3)
		    	scanf("%d",&no);
		    	else
		    	f--;
		    	printf("wrong i/p\n");
			}
			if(x==2&&y==0){
		    	printf("enter matrix 1 or 4\n");
		    	scanf("%d",&no);
			}
		    break;
			case 6:
		    printf("matrix6:\nenter the index values :\n");
			display6();
			scanf("%d%d",&x,&y);
			a6[x][y]=ins;
			if(x==0&&y==1)
		    no=1;
		    if(x==1&&y==0)
		    no=4;
		     if(x==1&&y==1)
		    no=5;
		    if(x==1&&y==2)
		    no=2;
		    if(x==2&&y==1)
		    no=3;
		    if(x==0&&y==0){
		    	printf("enter matrix 1 or 4\n");
		    	scanf("%d",&no);
			}
			if(x==2&&y==2){
		    	printf("enter matrix 2 or 3\n");
		    	scanf("%d",&no);
			}
			if(x==0&&y==2){
		    	printf("enter matrix 1 or 2\n");
		    	scanf("%d",&no);
			}
			if(x==2&&y==0){
		    	printf("enter matrix 3 or 4\n");
		    	scanf("%d",&no);
			}
		    break;
		    
	}
	//printf("showing\n");
	show();
//	printf("f is %d\n",f);
    f++;
    int s=0,l=0;
    if(f>5){
    for(s=0;s<3;s++)
    {
    if(a1[0][s]=='x')
       if(a1[1][s]=='x')
         if(a1[2][s]=='x')
         printf("matrix 1 is done\n");
     if(a1[0][s]=='o')
       if(a1[1][s]=='o')
         if(a1[2][s]=='o')
         printf("matrix 1 is done\n");
     if(a1[s][0]=='x')
       if(a1[s][1]=='x')
         if(a1[s][2]=='x')
         printf("matrix 1 is done\n");
    if(a1[s][0]=='o')
       if(a1[s][1]=='o')
         if(a1[s][2]=='o')
         printf("matrix 1 is done\n");
    if(a1[0][0]=='x')
     if(a1[1][1]=='x')
      if(a1[2][2]=='x')
          printf("matrix 1 is done\n");
     if(a1[0][0]=='o')
     if(a1[1][1]=='o')
      if(a1[2][2]=='o')
          printf("matrix 1 is done\n");
     if(a1[0][2]=='x')
     if(a1[1][1]=='x')
      if(a1[2][0]=='x')
          printf("matrix 1 is done\n");
     if(a1[0][2]=='o')
     if(a1[1][1]=='o')
      if(a1[2][0]=='o')
          printf("matrix 1 is done\n");
    
	}
	s=0;
	for(s=0;s<3;s++)
    {
     if(a2[0][s]=='x')
       if(a2[1][s]=='x')
         if(a2[2][s]=='x')
         printf("matrix 2 is done\n");
     if(a2[0][s]=='o')
       if(a2[1][s]=='o')
         if(a2[2][s]=='o')
         printf("matrix 2 is done\n");
     if(a2[s][0]=='x')
       if(a2[s][1]=='x')
         if(a2[s][2]=='x')
         printf("matrix 2 is done\n");
    if(a2[s][0]=='o')
       if(a2[s][1]=='o')
         if(a2[s][2]=='o')
         printf("matrix 2 is done\n");
     if(a2[0][0]=='x')
     if(a2[1][1]=='x')
      if(a2[2][2]=='x')
          printf("matrix 2 is done\n");
     if(a2[0][0]=='o')
     if(a2[1][1]=='o')
      if(a2[2][2]=='o')
          printf("matrix 2 is done\n");
     if(a2[0][2]=='x')
     if(a2[1][1]=='x')
      if(a2[2][0]=='x')
          printf("matrix 2 is done\n");
     if(a2[0][2]=='o')
     if(a2[1][1]=='o')
      if(a2[2][0]=='o')
          printf("matrix 2 is done\n");
	}
	s=0;
	for(s=0;s<3;s++)
    {
    	 if(a3[0][s]=='x')
       if(a3[1][s]=='x')
         if(a3[2][s]=='x')
         printf("matrix 3 is done\n");
     if(a3[0][s]=='o')
       if(a3[1][s]=='o')
         if(a3[2][s]=='o')
         printf("matrix 3 is done\n");
     if(a3[s][0]=='x')
       if(a3[s][1]=='x')
         if(a3[s][2]=='x')
         printf("matrix 3 is done\n");
    if(a3[s][0]=='o')
       if(a3[s][1]=='o')
         if(a3[s][2]=='o')
         printf("matrix 3 is done\n");
     if(a3[0][0]=='x')
     if(a3[1][1]=='x')
      if(a3[2][2]=='x')
          printf("matrix 3 is done\n");
     if(a3[0][0]=='o')
     if(a3[1][1]=='o')
      if(a3[2][2]=='o')
          printf("matrix 3 is done\n");
     if(a3[0][2]=='x')
     if(a3[1][1]=='x')
      if(a3[2][0]=='x')
          printf("matrix 3 is done\n");
     if(a3[0][2]=='o')
     if(a3[1][1]=='o')
      if(a3[2][0]=='o')
          printf("matrix 3 is done\n");
	}
	s=0;
	for(s=0;s<3;s++)
    {
    	 if(a4[0][s]=='x')
       if(a4[1][s]=='x')
         if(a4[2][s]=='x')
         printf("matrix 4 is done\n");
     if(a4[0][s]=='o')
       if(a4[1][s]=='o')
         if(a4[2][s]=='o')
         printf("matrix 4 is done\n");
     if(a4[s][0]=='x')
       if(a4[s][1]=='x')
         if(a4[s][2]=='x')
         printf("matrix 4 is done\n");
    if(a4[s][0]=='o')
       if(a4[s][1]=='o')
         if(a4[s][2]=='o')
         printf("matrix 4 is done\n");
     if(a4[0][0]=='x')
     if(a4[1][1]=='x')
      if(a4[2][2]=='x')
          printf("matrix 4 is done\n");
     if(a4[0][0]=='o')
     if(a4[1][1]=='o')
      if(a4[2][2]=='o')
          printf("matrix 4 is done\n");
     if(a4[0][2]=='x')
     if(a4[1][1]=='x')
      if(a4[2][0]=='x')
          printf("matrix 4 is done\n");
     if(a4[0][2]=='o')
     if(a4[1][1]=='o')
      if(a4[2][0]=='o')
          printf("matrix 4 is done\n");
	}
	s=0;
	for(s=0;s<3;s++)
    {
    	 if(a5[0][s]=='x')
       if(a5[1][s]=='x')
         if(a5[2][s]=='x')
         printf("matrix 5 is done\n");
     if(a5[0][s]=='o')
       if(a5[1][s]=='o')
         if(a5[2][s]=='o')
         printf("matrix 5 is done\n");
     if(a5[s][0]=='x')
       if(a5[s][1]=='x')
         if(a5[s][2]=='x')
         printf("matrix 5 is done\n");
    if(a5[s][0]=='o')
       if(a5[s][1]=='o')
         if(a5[s][2]=='o')
         printf("matrix 5 is done\n");
     if(a5[0][0]=='x')
     if(a5[1][1]=='x')
      if(a5[2][2]=='x')
          printf("matrix 5 is done\n");
     if(a5[0][0]=='o')
     if(a5[1][1]=='o')
      if(a5[2][2]=='o')
          printf("matrix 5 is done\n");
     if(a5[0][2]=='x')
     if(a5[1][1]=='x')
      if(a5[2][0]=='x')
          printf("matrix 5 is done\n");
     if(a5[0][2]=='o')
     if(a5[1][1]=='o')
      if(a5[2][0]=='o')
          printf("matrix 5 is done\n");
	}
	s=0;
	for(s=0;s<3;s++)
    {
     if(a6[0][s]=='x')
       if(a6[1][s]=='x')
         if(a6[2][s]=='x')
         printf("matrix 6 is done\n");
     if(a6[0][s]=='o')
       if(a6[1][s]=='o')
         if(a6[2][s]=='o')
         printf("matrix 6 is done\n");
     if(a6[s][0]=='x')
       if(a6[s][1]=='x')
         if(a6[s][2]=='x')
         printf("matrix 6 is done\n");
    if(a6[s][0]=='o')
       if(a6[s][1]=='o')
         if(a6[s][2]=='o')
         printf("matrix 6 is done\n");
     if(a6[0][0]=='x')
     if(a6[1][1]=='x')
      if(a6[2][2]=='x')
          printf("matrix 6is done\n");
     if(a6[0][0]=='o')
     if(a6[1][1]=='o')
      if(a6[2][2]=='o')
          printf("matrix 6 is done\n");
     if(a6[0][2]=='x')
     if(a6[1][1]=='x')
      if(a6[2][0]=='x')
          printf("matrix 6 is done\n");
     if(a6[0][2]=='o')
     if(a6[1][1]=='o')
      if(a6[2][0]=='o')
          printf("matrix 6 is done\n");
	}
//	s=0;
}
}
}