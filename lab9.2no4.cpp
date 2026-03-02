#include <stdio.h>
#include <string.h>
#include <ctype.h>
int checkLogin(char *login, char *passwd);
//accepted only if Length = 5 and a number 1 or more digits
int checkValidPass(char *ps);

int main() {
	char login[64], password[64];
	printf("Enter login : "); gets(login);
	printf("Enter password : "); gets(password);
	if( checkLogin(login, password) == 1) {
		printf("Welcome\n");
	} else {
		printf("Incorrect login or password\n");
	}
	if (checkValidPass(password)) {
		printf("Accepted\n");
	}
	else
		printf("Reject\n");
	
}
int checkValidPass(char *ps) {
	int accepted=0;
	int i,number=0,firstupper=0,unique=0;
	int lenght = strlen(ps);
	for (i=0;i<lenght;i++){
		if (isdigit(ps[i])){
			number++;
		}
		if (isupper(ps[i])){
			if (firstupper == '\0'){
				firstupper = ps[i];
				unique = 1;
			}
			else if (ps[i] != firstupper){
				unique = 2;
			}
		}
	if (number>1 && unique >1 && lenght >= 5 && lenght <= 8 &&ps[0]!=48 && ps[0] !=57)
		accepted = 1;
		}
	return accepted;
}
int checkLogin(char *login, char *passwd) {
	if( !strcmp(login, "student1") && !strcmp(passwd, "MMpa12"))
		return 1;
	else
		return 0;
}
