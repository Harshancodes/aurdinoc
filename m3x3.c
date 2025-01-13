#include <stdio.h>
char turn;
int p1=0,p2=0,s;
int i, j,r,c,x,y;
char a1[3][3];
char a2[3][3];
char a3[3][3];
char a4[3][3];
char a5[3][3];
char a6[3][3];
char a7[3][3];
char a8[3][3];
char a9[3][3];

char* mat[9] = {(char*)a1, (char*)a2, (char*)a3, (char*)a4, (char*)a5, (char*)a6, (char*)a7, (char*)a8, (char*)a9};

void init(char a[3][3])
{
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            a[i][j] = '-';
        }
    }
}

void display()
{
	
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a1[i][j]);
        }
    }printf("\t");
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a2[i][j]);
        }
    }printf("\t");
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a3[i][j]);
        }
    }printf("\n");
    for (i = 1; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a1[i][j]);
        }
    }printf("\t");
    for (i = 1; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a2[i][j]);
        }
    }printf("\t");
    for (i = 1; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a3[i][j]);
        }
    }printf("\n");
    //
    for (i = 2; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a1[i][j]);
        }
    }printf("\t");
    for (i = 2; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a2[i][j]);
        }
    }printf("\t");
    for (i = 2; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a3[i][j]);
        }
    }printf("\n");
    
    //2 row things
    printf("\n");
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a4[i][j]);
        }
    }printf("\t");
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a5[i][j]);
        }
    }printf("\t");
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a6[i][j]);
        }
    }printf("\n");
    for (i = 1; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a4[i][j]);
        }
    }printf("\t");
    for (i = 1; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a5[i][j]);
        }
    }printf("\t");
    for (i = 1; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a6[i][j]);
        }
    }printf("\n");
    //
    for (i = 2; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a4[i][j]);
        }
    }printf("\t");
    for (i = 2; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a5[i][j]);
        }
    }printf("\t");
    for (i = 2; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a6[i][j]);
        }
    }printf("\n");
    printf("\n");
    //3 row things
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a7[i][j]);
        }
    }printf("\t");
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a8[i][j]);
        }
    }printf("\t");
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a9[i][j]);
        }
    }printf("\n");
    for (i = 1; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a7[i][j]);
        }
    }printf("\t");
    for (i = 1; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a8[i][j]);
        }
    }printf("\t");
    for (i = 1; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a9[i][j]);
        }
    }printf("\n");
    //
    for (i = 2; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a7[i][j]);
        }
    }printf("\t");
    for (i = 2; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a8[i][j]);
        }
    }printf("\t");
    for (i = 2; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", a9[i][j]);
        }
    }printf("\n");
}

int main()
{
    init(a1);
    init(a2);
    init(a3);
    init(a4);
    init(a5);
    init(a6);
    init(a7);
    init(a8);
    init(a9);
    display();
    printf("-------------------------------------\n");
    int n;
    int k=0;
    printf("x is the beginner");
    for(i=0;i<81;i++){
    	
    	if(k%2==0)
    	turn='x';
    	else
    	turn='o';
    	k=k+1;
    	//printf("k is %d ",k);
    	if(i==0){
	printf("enter the matrix no\n");
     scanf("%d",&n);
   }
   switch(n){
   	
   	case 1:
   		printf("box 1:\nenter the index values :\n");
   		scanf("%d%d",&x,&y);
   		a1[x][y]=turn;
   		if(x==0 && y==0)
   		n=1;
   		if(x==0 && y==1)
   		n=2;
   		if(x==0 && y==2)
   		n=3;
		if(x==1 && y==0)
   		n=4;
		if(x==1 && y==1)
   		n=5;
   		if(x==1 && y==2)
   		n=6;
   		if(x==2 && y==0)
   		n=7;
   		if(x==2 && y==1)
   		n=8;
   		if(x==2 && y==2)
   		n=9;
   		display();
   		break;
   	// 2 wala
	case 2:
   		printf("box 2:\nenter the index values :\n");
   		scanf("%d%d",&x,&y);
   		a2[x][y]=turn;
   		if(x==0 && y==0)
   		n=1;
   		if(x==0 && y==1)
   		n=2;
   		if(x==0 && y==2)
   		n=3;
		if(x==1 && y==0)
   		n=4;
		if(x==1 && y==1)
   		n=5;
   		if(x==1 && y==2)
   		n=6;
   		if(x==2 && y==0)
   		n=7;
   		if(x==2 && y==1)
   		n=8;
   		if(x==2 && y==2)
   		n=9;
   		break;
		display();	
   	//3
   	case 3:
   		printf("box 3:\nenter the index values :\n");
   		scanf("%d%d",&x,&y);
   		a3[x][y]=turn;
   		if(x==0 && y==0)
   		n=1;
   		if(x==0 && y==1)
   		n=2;
   		if(x==0 && y==2)
   		n=3;
		if(x==1 && y==0)
   		n=4;
		if(x==1 && y==1)
   		n=5;
   		if(x==1 && y==2)
   		n=6;
   		if(x==2 && y==0)
   		n=7;
   		if(x==2 && y==1)
   		n=8;
   		if(x==2 && y==2)
   		n=9;
   		display();
   		break;
   	//4
	case 4:
   		printf("box 4:\nenter the index values :\n");
   		scanf("%d%d",&x,&y);
   		a4[x][y]=turn;
   		if(x==0 && y==0)
   		n=1;
   		if(x==0 && y==1)
   		n=2;
   		if(x==0 && y==2)
   		n=3;
		if(x==1 && y==0)
   		n=4;
		if(x==1 && y==1)
   		n=5;
   		if(x==1 && y==2)
   		n=6;
   		if(x==2 && y==0)
   		n=7;
   		if(x==2 && y==1)
   		n=8;
   		if(x==2 && y==2)
   		n=9;
   		display();
   		break;	
    case 5:
   		printf("box 5:\nenter the index values :\n");
   		scanf("%d%d",&x,&y);
   		a5[x][y]=turn;
   		if(x==0 && y==0)
   		n=1;
   		if(x==0 && y==1)
   		n=2;
   		if(x==0 && y==2)
   		n=3;
		if(x==1 && y==0)
   		n=4;
		if(x==1 && y==1)
   		n=5;
   		if(x==1 && y==2)
   		n=6;
   		if(x==2 && y==0)
   		n=7;
   		if(x==2 && y==1)
   		n=8;
   		if(x==2 && y==2)
   		n=9;
   		display();
   		break;
	//6
	case 6:
   		printf("box 6:\nenter the index values :\n");
   		scanf("%d%d",&x,&y);
   		a6[x][y]=turn;
   		if(x==0 && y==0)
   		n=1;
   		if(x==0 && y==1)
   		n=2;
   		if(x==0 && y==2)
   		n=3;
		if(x==1 && y==0)
   		n=4;
		if(x==1 && y==1)
   		n=5;
   		if(x==1 && y==2)
   		n=6;
   		if(x==2 && y==0)
   		n=7;
   		if(x==2 && y==1)
   		n=8;
   		if(x==2 && y==2)
   		n=9;
   		display();
   		break;
   	case 7:
   		printf("box 7:\nenter the index values :\n");
   		scanf("%d%d",&x,&y);
   		a7[x][y]=turn;
   		if(x==0 && y==0)
   		n=1;
   		if(x==0 && y==1)
   		n=2;
   		if(x==0 && y==2)
   		n=3;
		if(x==1 && y==0)
   		n=4;
		if(x==1 && y==1)
   		n=5;
   		if(x==1 && y==2)
   		n=6;
   		if(x==2 && y==0)
   		n=7;
   		if(x==2 && y==1)
   		n=8;
   		if(x==2 && y==2)
   		n=9;
   		display();
   		break;
   	case 8:
   		printf("box 8:\nenter the index values :\n");
   		scanf("%d%d",&x,&y);
   		a8[x][y]=turn;
   		if(x==0 && y==0)
   		n=1;
   		if(x==0 && y==1)
   		n=2;
   		if(x==0 && y==2)
   		n=3;
		if(x==1 && y==0)
   		n=4;
		if(x==1 && y==1)
   		n=5;
   		if(x==1 && y==2)
   		n=6;
   		if(x==2 && y==0)
   		n=7;
   		if(x==2 && y==1)
   		n=8;
   		if(x==2 && y==2)
   		n=9;
   		display();
   		break;
   	case 9:
   		printf("box 9:\nenter the index values :\n");
   		scanf("%d%d",&x,&y);
   		a9[x][y]=turn;
   		if(x==0 && y==0)
   		n=1;
   		if(x==0 && y==1)
   		n=2;
   		if(x==0 && y==2)
   		n=3;
		if(x==1 && y==0)
   		n=4;
		if(x==1 && y==1)
   		n=5;
   		if(x==1 && y==2)
   		n=6;
   		if(x==2 && y==0)
   		n=7;
   		if(x==2 && y==1)
   		n=8;
   		if(x==2 && y==2)
   		n=9;
   		display();
   		break;
   }
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
	}
    

    return 0;
}
