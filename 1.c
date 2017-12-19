#include<stdio.h>
#define CHAPTER printf("CHAPTER1.BAB")

int x=5;
int y=5;
int per=0;
void chapter(void);
void ex(void);
void map_ex(void);
void practice(void);

void gotoxy(int x,int y)
{
    printf("\033[%d %df",y,x);
    fflush(stdin);
}



int main(void)
{
    int e;
    int i;
    for(i=0;i<10;i++)
    {
    gotoxy(x+i,y+1);printf("#");
    }

    printf("\n\n\n");

    for(i=0;i<7;i++)
    {
    printf("welcome to c programming\n");
    }
    printf("\n\n");
    for(i=0;i<10;i++)
    {
        printf("#");
    }
    printf("\n PRESS 1");
    while(1)
    {
    scanf("%d",&e);
    if(e==1)
        break;
    }
    while(1)
    {
    chapter();
    }
return 0;
}


void chapter(void)
{
    int e;
    printf("\n\n\n\n\nCHAPTER1(%% %d)\n",per);
    printf("select chapter(finish is 0):");
    scanf("%d",&e);
    if(e==1)
    ex();

    else
    {
        return 0;
    }

}

void map_ex(void)
{
    int i;
    for(i=0;i<60;i++)
    {
        printf("#");
    }
    printf("\n");
}

void ex(void)
{
    FILE * fp;
    char ch[20];
    int e;
    
    map_ex();
    printf("\n"); CHAPTER; printf("\n");
    fp=fopen("1.txt","r");
    while(1)
    {
        fgets(ch,sizeof(ch),fp);
        if(feof(fp))
            break;
        printf("%s",ch);
    }
    fclose(fp);
    printf("\n\n       ->(PRESS 1\n)");
    map_ex();

    
while(1)
{
    scanf("%d",&e);
    if(e==1)
        break;
}

practice();
}




void practice(void)
{
    char ch[20];
    printf("LET'S PRACTICE");
    gotoxy(x+2,y+2); printf("--------------------------------\n");
    printf("#include<stdio.h>\n");
    printf("\n int [         ](void)");
    printf("\n {\n  printf(""Hell o world"");\nreturn 0\n }");
    printf("<hint>\n main,printf,;            [         ]\b\b\b\b\b\b\b\b");
    while(1)
    {
    scanf("%s",ch);
    if(ch[0]=='m'&&ch[1]=='a'&&ch[2]=='i'&&ch[3]=='n')
    break;
    else
    {
        printf("\a\nwrite again     [         ]\b\b\b\b\b\b\b\b");
    }   
    }
    
    per=per+100;
    if(per>100)
        per=100;
}

