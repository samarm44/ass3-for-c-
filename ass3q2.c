#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

struct employee{
int Id;
char name[20];
double Salary;
char ChildrenNames[5][20];
int count;
};

void printChildren(struct employee *array, int id, char c);
void addNewChild (struct employee *array, int id, char* cName);

int main() {
int numOfEmp;
printf("Enter number of employees:");
scanf("%d",&numOfEmp);
int i;
struct employee *list;
list = (struct employee*) calloc(numOfEmp,sizeof(struct employee));

for(i = 0; i < numOfEmp; i++){
    printf("\nEnter employee #%d id: ", (i+1));
    scanf("%d",&(list+1)->Id);

    char name1[20];
    getchar();
    printf("Enter employee name:");
    scanf("%[^\n]",name1);
    strcpy((list+1)->name,name1);
    

    printf("Enter employee salary:");
    scanf("%lf",&(list+i)->Salary);

    do {
        printf("How many kids?");
        scanf("%d",&(list+i)->count);
    }while ((list+i)-> count < 0 || (list+i)-> count > 5);
    int j;
    for(j = 0 ; j < (list+i)->count; ++j)
    {
        char nameCil[20];
        printf("Enter child #%d name:",(j+1));
        scanf("%s", nameCil);
        strcpy( (list+i)->ChildrenNames[j] ,nameCil);
    }
    
}
int id2;
char name2ch[20];
printf("Enter the id of the employee you would like to add new child for him\n");
scanf("%d",&id2);
printf("Enter the name of the new child\n");
scanf("%s",name2ch);
addNewChild(list,id2,name2ch);

char letter;
printf("Enter the letter:");
getchar();
scanf("%c",&letter);
printf("Enter the id of the employee you would like to view his child's name starting with letter %c\n :",letter);

int id3;
scanf("%d",&id3);
printChildren(list,id3,letter);
return 0 ;
 
}

void printChildren(struct employee *array, int id, char c) {
int i ;
for(i = 0 ; (array+i);++i){
    if((array+i)->name[0]=='\0')
    break;
    if((array+i)->Id == id)
    {
       if((array+i)->count == 0) {
       printf("The emplyee has no kids.\n");
       return;
    }
    else
    {
        int l;
        printf("Children names:  \n");
        for(l = 0 ; l < (array+i)->count ; ++l){
            if((array+i)->ChildrenNames[l][0] == c||c == ' ')
            printf("%s %s \n",(array+i)->ChildrenNames[l], (array+i)->name);

        }
        return;



    }
    }

}
printf("No employee with the specified id\n");
}

void addNewChild (struct employee *array, int id, char* cName){
    int i;
    for(i = 0 ; (array+i);++i){
    if((array+i)->name[0]=='\0')
    break;

    if((array+i)->Id == id){
        if((array+i)->count == 5){
            printf("you can't add new kids for this employee.\n");
            return;
        }
        else {
            int p1 = (array+i)->count;
            strcpy((array+i)->ChildrenNames[p1],cName);
            (array+i)->count = (array+i)->count+1;
            printChildren(array,id,' ');
            return;
        }
    }



}
printf("No employee with the specified id\n");
}