#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME   20

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int    ID;
	char   name[MAX_NAME];
	double grade;
};

int main(int argc, char *argv[]) {
	
	struct student student1 = {1003, "JuyeopKim", 4.3};
	
	student1.ID = 123456;
	strcpy(student1.name, "Juyeop");
	student1.grade = 4.2;
	
	printf("ID : %i\n", student1.ID);
	printf("name : %s\n", student1.name);
	printf("grade : %lf\n", student1.grade);
	
	
	return 0;
}
