#include <stdio.h> // buat semua library
#include <windows.h>
#include <string.h>
const int baris = 10;
const int kolom = 10;
char map2A[10][10];
char map[baris][kolom];
char map2[10][10];
char map3[baris][kolom];
void title()
{
puts("   __        __  __  __       __    __   _");
puts("   / /  ___ _/ /_/ /_/ /__ ___/ /__ / /  (_)__");
puts("  / _ \\/ _ `/ __/ __/ / -_) _  /_ // _ \\/ / _ \\ ");
puts(" /_.__/\\_,_/\\__/\\__/_/\\__/\\_,_//__/_//_/_/ .__/ ");
puts("                                         /_/ ");
}

void exit()
{
	printf("Thank you for playing the game !");
}

void createmap()
{
//	for(int i=0;i<10;i++)
//	{
//		for(int j=0;j<10;j++)
//		{
//		//	map[i][j] ='.'; //  map b
//			map2[i][j]='.'; // map a
//		//	map3[i][j]='.'; // map c
//		}
//	}

	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			map2A[i][j]= '.';
		}
	}
}

void printmap()
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf(" ");
		}
		if(i==0) 
	{
		printf(" ");
		for(int j = 0;j<10;j++)
		{
		printf(" %d",j);
		}
		printf("\n");
		for(int j=0;j<3;j++){
		printf(" ");
		}
	}
	printf("%c",i+'A');
	for(int j=0;j<10;j++){
	 printf(" %c",map2A[i][j]);
	}
	printf("\n");
	}
	
}

void playerA()
{
	int shipA = 5;
	int shipAA = shipA;
//	char* p;
//	char isi = 'A';
//	p = &isi;

	
createmap();
	printf("A's turn to map his / her ship !\n");
	getchar();
	system("cls");
	do
	{
	system("cls");
	puts("MAPPING SHIPS COORDINATE [A]");
	puts("-----------------------------\n");
	printmap();
//		for(int i=0;i<10;i++)
//	{
//		for(int j=0;j<3;j++)
//		{
//			printf(" ");
//		}
//		if(i==0) 
//	{
//		printf(" ");
//		for(int j = 0;j<10;j++)
//		{
//		printf(" %d",j);
//		}
//		printf("\n");
//		for(int j=0;j<3;j++){
//		printf(" ");
//		}
//	}
//	printf("%c",i+'A');
//	for(int j=0;j<10;j++){
//	 printf(" %c",map2A[i][j]);
//	}
//	printf("\n");
//	}
	
	printf("\n");
	if(shipA == 5){
	printf("[%d] FIVE blocks ship\n",shipA);
	}
	else if(shipA == 4)
	{
	printf("[%d] FOUR blocks ship\n",shipA);
	}
	else if(shipA == 3)
	{
	printf("[%d] THREE blocks ship\n",shipA);
	}
	else if(shipA == 2)
	{
	printf("[%d] TWO blocks ship\n",shipA);
	}
	else if(shipA == 1)
	{
	printf("[%d] ONE blocks ship\n",shipA);
	}
	printf("---------------------------\n");
	

	int coorX=0,coorY=0;
	char coorYchar;
	char flow[20];
	char dir[5];
	do{
	printf("Coordinate [A-J][0-9] (case sensitive) :");
	scanf("%c%d",&coorYchar,&coorX);
	}while(!(coorYchar <= 'A' && coorYchar >= 'Z') && !(coorX >0 && coorX <=9));
	
	
	do{
	printf("\nFlow [vertical | horizontal] (case sensitive) :");
	scanf("%s",flow);
	getchar();
	}while(!strcmp(flow,"vertical")==0 && !strcmp(flow,"horizontal") == 0);
	
	if(strcmp(flow,"horizontal")==0)
	{
		do{
	printf("\nDirection [right | left] (case sensitive) :");
	scanf("%s",dir);
	getchar();
	do{
		
	
	
		if(strcmp(dir,"right")==0 && shipAA == 5)
		{
		coorY = coorYchar - 'A';
		for(int i=0;i<5;i++){
			map2A[coorY][coorX++] = 'A';
		}
		shipAA--;
		printmap();
		}
		
		else if(strcmp(dir,"left")==0 && shipA == 5)
		{
		coorY = coorYchar - 'A';
		for(int i=0;i<5;i++){
			map2A[coorY][coorX--] = 'A';
		}
		shipAA--;
		printmap();	
		}
		
		else if(strcmp(dir,"right")==0 && shipAA == 4)
		{
		coorY = coorYchar - 'A';
		for(int i=0;i<4;i++){
			map2A[coorY][coorX++] = 'A';
		}
		shipAA--;
		printmap();		
		}
		
		else if(strcmp(dir,"left")==0 && shipAA == 4)
		{
		coorY = coorYchar - 'A';
		for(int i=0;i<4;i++){
			map2A[coorY][coorX--] = 'A';
		}
		shipAA--;
		printmap();		
		}
		
		else if(strcmp(dir,"right")==0 && shipAA == 3)
		{
		coorY = coorYchar - 'A';
		for(int i=0;i<3;i++){
			map2A[coorY][coorX++] = 'A';
		}
		shipAA--;
		printmap();		
		}
		
		else if(strcmp(dir,"left")==0 && shipAA == 3)
		{
		coorY = coorYchar - 'A';
		for(int i=0;i<3;i++){
			map2A[coorY][coorX--] = 'A';
		}
		shipAA--;
		printmap();		
		}
		
		else if(strcmp(dir,"right")==0 && shipAA == 2)
		{
		coorY = coorYchar - 'A';
		for(int i=0;i<2;i++){
			map2A[coorY][coorX++] = 'A';
		}
		shipAA--;
		printmap();			
		}
		
		else if(strcmp(dir,"left")==0 && shipAA == 2)
		{
		coorY = coorYchar - 'A';
		for(int i=0;i<2;i++){
			map2A[coorY][coorX--] = 'A';
		}
		shipAA--;
		printmap();			
		}
		
		else if(strcmp(dir,"right")==0 && shipAA == 1)
		{
		coorY = coorYchar - 'A';
			map2A[coorY][coorX++] = 'A';
		shipAA--;
		printmap();			
		}
		
		else if(strcmp(dir,"left")==0 && shipAA == 1)
		{
		coorY = coorYchar - 'A';
			map2A[coorY][coorX--] = 'A';
			shipAA--;
				printmap();
		}
	
	
		}while(strcmp(dir,"right")!=0 && strcmp(dir,"left")!=0);
		}while(!strcmp(dir,"right")==0 && !strcmp(dir,"left") == 0);
	}
		
	else if(strcmp(flow,"vertical")==0)
	{
		
	do{
	printf("\nDirection [up | down] (case sensitive) :");
	scanf("%s",dir);
	getchar();
	}while(!strcmp(dir,"up")==0 && !strcmp(dir,"down") == 0);
	
	
		if(strcmp(dir,"up")==0 && shipAA == 5)
		{
		coorY = coorYchar - 'A';
		for(int i=0;i<5;i++){
			map2A[coorY--][coorX] = 'A';
		}
		shipAA--;
		printmap();
		}
		
		else if(strcmp(dir,"down")==0 && shipAA == 5)
		{
		coorY = coorYchar - 'A';
		for(int i=0;i<5;i++){
			map2A[coorY++][coorX] = 'A';
		}
		shipAA--;
		printmap();	
		}
		
		else if(strcmp(dir,"up")==0 && shipAA == 4)
		{
		coorY = coorYchar - 'A';
		for(int i=0;i<4;i++){
			map2A[coorY--][coorX] = 'A';
		}
		shipAA--;
		printmap();		
		}
		
		else if(strcmp(dir,"down")==0 && shipAA == 4)
		{
		coorY = coorYchar - 'A';
		for(int i=0;i<4;i++){
			map2A[coorY++][coorX] = 'A';
		}
		shipAA--;
		printmap();		
		}
		
		else if(strcmp(dir,"up")==0 && shipAA == 3)
		{
		coorY = coorYchar - 'A';
		for(int i=0;i<3;i++){
			map2A[coorY--][coorX] = 'A';
		}
		shipAA--;
		printmap();		
		}
		
		else if(strcmp(dir,"down")==0 && shipAA == 3)
		{
		coorY = coorYchar - 'A';
		for(int i=0;i<3;i++){
			map2A[coorY++][coorX] = 'A';
		}
		shipAA--;
		printmap();		
		}
		
		else if(strcmp(dir,"up")==0 && shipAA == 2)
		{
		coorY = coorYchar - 'A';
		for(int i=0;i<2;i++){
			map2A[coorY--][coorX] = 'A';
		}
		shipAA--;
		printmap();			
		}
		
		else if(strcmp(dir,"down")==0 && shipAA == 2)
		{
		coorY = coorYchar - 'A';
		for(int i=0;i<2;i++){
			map2A[coorY++][coorX] = 'A';
		}
		shipAA--;
		printmap();			
		}
		
		else if(strcmp(dir,"up")==0 && shipAA == 1)
		{
		coorY = coorYchar - 'A';
			map2A[coorY--][coorX] = 'A';
		shipAA--;
		printmap();			
		}
		
		else if(strcmp(dir,"down")==0 && shipAA == 1)
		{
		coorY = coorYchar - 'A';
			map2A[coorY++][coorX] = 'A';
			shipAA--;
				printmap();
		}
			
	}	
		
	
	shipA--;
	}while(true && shipA != 0);
	

}

void play()
{
	int turn = 1;
	if(turn % 2 != 0)
	{
	playerA();
	}

	
}

int main()
{
	title();
	puts("1. Play");
	puts("2. How to Play");
	puts("3. Exit");
	int choice;
	do{
	printf(">>");
	scanf("%d",&choice);
	getchar();
	}while(choice <= 0 || choice >=4 );
	switch(choice)
	{
		case 1:
		play();

		break;
			
		case 2:
		
		break;
			
		case 3:
		exit();
		break;
	}
	return 0;
}

