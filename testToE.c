# include <stdio.h>
# include <string.h>

int main() {
    char p1[] = "SWE&CSC";
    char *p2 = p1 + 3;
    strcpy(p1,p2);
    printf("P1:%s,P2:%s\n",p1,p2);

}