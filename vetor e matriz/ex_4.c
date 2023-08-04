#include <stdio.h>

int main()
{
    int num[10], i;
    char let[10];
    
    for (i=0; i<10; i++) num[i]=i+1;
    for (i=0; i<10; i++) let[i]=65+i; //65 representa A maiúsculo
    
    for (i=0; i<10; i++) printf("%d%c", num[i], let[i]);
    
    
    return 0;
}


