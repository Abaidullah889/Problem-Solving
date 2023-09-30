#include <stdio.h>
#include <string.h>


void timeConversion(char* s) 
{
    
    int hh, mm ,ss;
    
    sscanf(s, "%d:%d:%d" ,&hh,&mm,&ss);
    
    
    if (s[8]=='A' && s[9]=='M') 
    {
        if(hh==12)
        {
            hh=0;
        }
    }
    else 
    {
        if(hh!=12)
        {
            hh+=12;
        }
    }
    
    sprintf(s,"%02d:%02d:%02d",hh,mm,ss);
    
}

int main()
{
    
    char s[200];
    fgets(s,sizeof(s),stdin);
    timeConversion(s);
    
    printf("%s",s);

    return 0;
}


