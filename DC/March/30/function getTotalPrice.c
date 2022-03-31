#include <stdio.h>
#include <stdlib.h>
double getTotalPrice(char *str)
{
    double t, s=0, n;
    int l = strlen(str);
    int ct=0;
    for(int i=0; i<l; i++){
        if(isdigit(str[i])){
            t=0;
            while(isdigit(str[i])){
                t = t*10 + (str[i] - '0');
                i++;
            }
            //i++;
            n=1;
            ct=-1;
            //printf("%f ", t);
            if(str[i] == '.' && isdigit(str[i+1])){
                i++;
                while(isdigit(str[i])){
                    t = t + (str[i]-'0')/pow(10, n);
                    i++;
                    n++;
                }
                //printf("%f ", t);
                int tp;
                if(ct == -1)
                    tp=1;
                else
                    tp = ct;
                s+=(t);
                
            }
            
            //printf("%f ", t);
        }
    }
    
    return s;
    
}
int main()
{
    char str[101];
    scanf("%[^\n\r]", str);
    double totalPrice = getTotalPrice(str);
    printf("%.2lf", totalPrice);
    return 0;
}
