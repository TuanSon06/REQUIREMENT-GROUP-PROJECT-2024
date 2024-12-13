#include<stdio.h>
#include<string.h>
#include<conio.h>
int mian(){
    char s1[]="phong";
    char s2[]="hung";
    int cmp= stricmp (s1,s2);
    if(cmp=0)
    printf("%s,%s",s1,s2);
    else if(cmp>0)
    printf("s1>s2");
    else 
    printf("s1<s2");
    strcpy(s2,s1);
    puts(s2);
    return 0;
}
