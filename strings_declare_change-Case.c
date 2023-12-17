#include <stdio.h>

int main()
{
    char s[]="welcome";
    char s1[]={'w', 'e', 'l', 'c', 'o', 'm', 'e', '\0'};
    printf("\ns is:%s", s);
    printf("\ns1 is:%s", s1);
    int i, var=20, size;
    for(i=0; i<var; i++)
    {
        if(s[i] == '\0'){
        size=i;
        i++  ;
        break;
        }
    }
    printf("\nthe size of string s is %d", size);

    for (i=0;i<size;i++){
    printf("\n the value of s[i]is%d",s[i]);
    s[i]=s[i]-32;
    printf("\n New value of s[i]is%d",s[i]);
    
    }
        printf("\nNew string is %s", s);

}
