#include <stdio.h>
#include <stdio.h>
#include <string.h>

typedef struct {
	char id[9];
	char name[31];
	int age;
	float grade;
} Student;

void displayStd(Student sv){
	printf("%-10s %-25s %-5d %5.2f\n", sv.id, sv.name, sv.age, sv.grade);
}

void title(){
	printf("%-10s %-25s %-5s %5s\n", "ID", "Name", "Age", "Grade");
	printf("%-10s %-25s %-5s %5s\n", "--", "----", "---", "-----");
}

void inputData(Student sv[], int n){
	int i;
	for (i=0; i<n; i++){
		printf("%d. ID = ", i+1); gets(sv[i].id); 
		printf("%d. Name = ", i+1); gets(sv[i].name); 
		printf("%d. Age = ", i+1); scanf("%d", &sv[i].age);
		printf("%d. Grade = ", i+1); scanf("%f", &sv[i].grade);
		getchar();
		printf("\n");
	}
}

void displayList(Student sv[], int n){
	int i;
	title();
	for (i=0; i<n; i++)
		displayStd(sv[i]);
}

void sortListByGradeDesc(Student sv[], int n){
	int i, j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (sv[j].grade > sv[j-1].grade){
				Student tmp = sv[j]; sv[j]= sv[j-1]; sv[j-1]=tmp;
			}
}
int main(){
	int n;
	scanf("%d", &n); 
	Student sv[n];
	getchar();		//Clear buffer 	//	fflush(stdin);
	inputData(sv, n);
	displayList(sv, n);
	
	printf("\n");
	sortListByGradeDesc(sv, n);
	displayList(sv, n);
	return 0;
}
