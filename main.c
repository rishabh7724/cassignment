#include <stdio.h>

// #include "login.c"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct User{
	char UserId[30];
	char password[30];
	
} User;



int main(int argc, char *argv[]) {
	
	User u;
	char ch;
	int i=0;
	printf("\nEnter UserId :");
	gets(u.UserId);
	
	printf("\nEnter Password:");
	//gets(u.password);
	do{
		ch = getch();
		u.password[i] = ch;
		i++;
		printf("*");
	}while(ch != 13);

	printf("Entered Details :\nUserId :%s\nPassword :%s",u.UserId,u.password);
		
	return 0;
}
