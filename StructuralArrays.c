#include<stdio.h>
struct details  //taking input of name, roll no, marks and age
{
	char name[100];
	char roll[100];
	int age;
	int marks;
};
int main()
{
	int n;  //taking input the number of students
	scanf("%d", &n);
	struct details s[n];
	for(int i = 0; i < n; i++) //taking input of their data
	{
		scanf("\n%s %s %d %d", s[i].name, s[i].roll, &s[i].age, &s[i].marks);
	}
	for(int j = 0; j < n; j++) //printing the data of the students
	{
		printf("%s\n%s\n%d\n%d\n", s[j].name, s[j].roll, s[j].age, s[j].marks);
	}
	return 0;
}
