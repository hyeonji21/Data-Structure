#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct sex_type {
	enum tag_filed {female, male} sex;
	union {
		int children;
		int beard;
	} u;
};

typedef struct human_being {
	char name[10];
	int age;
	float salary;
	struct sex_type sex_info;
};


int main(void) {

	struct human_being person1, person2;
	
	person1.sex_info.sex = male;
	person1.sex_info.u.beard = 0;
	person2.sex_info.sex = female;
	person2.sex_info.u.children = 4;

}