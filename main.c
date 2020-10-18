#include <stdio.h>
#include <conio.h>

typedef struct {
	char UserId[30];
	char password[30];
} User;

typedef struct {
    char UserId[30];
    float accountBalance;


} UserDetails;			// Isme account Details Dalna hai jisko baad me karenge

User u[50];			// Total User Capacity

static int CURENTSIZE = 1;

void login() {
    char ch ;
	int i=0;

    fflush(stdin);
	printf("\nEnter UserId :");
	gets(u[CURENTSIZE].UserId);

	printf("\nEnter Password:");
	do{
		ch = _getch();_putch('*');
		u[CURENTSIZE].password[i] = ch;
		i++;
	}while(ch != 13);

	u[CURENTSIZE].password[--i]='\0';

	printf("\n%d",strlen(u[CURENTSIZE].password ));

	CURENTSIZE++;
}

void signup(){

}


int main(int argc, char *argv[]) {

    int choice = 0;

    printf("\nEnter Your Choice :");
    printf("\n1. Open Your Account");
    printf("\n2. Login into Account");
    printf("\n3. ");
    scanf("%d",&choice);

    switch(choice){
    case 1:
        signup();
        break;
    case 2:
        login();
        break;
    default:
        printf("*************** Wrong Choice ***************");
    }

	return 0;
}
