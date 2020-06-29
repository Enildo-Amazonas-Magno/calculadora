#include <stdio.h>
int main()
{
    double a, b, d;
    char c;
    scanf("%lf %lf %c", &a, &b, &c);
    if(c=='/'&& b==0)printf("operacao nao pode ser realizada");
    else
    {
        switch(c)
        {
            case '+': 
            {
                d=a+b; printf("%.3lf\n", d);break;
            }    
            case '-': 
            {
                d=a-b; printf("%.3lf\n", d);break;
            }
            case '*': 
            {
                d=a*b; printf("%.3lf\n", d);break;
            }
            case '/':
            { 
                d=a/b; if(a!=0){printf("%.3lf\n", d);break;}
            }
            default: {if(c!='&')
            {
                printf("operacao nao pode ser realizada");break;
            }}
        }
        while(c!='&'&&(c=='+' || c=='-' || c== '*' || c=='/'))
        {
            scanf("%lf %c", &a, &c);
            if(c=='/'&&a==0){printf("operacao nao pode ser realizada\n");}
            switch(c)
            {
                case '+': 
                {
                    d=a+d; printf("%.3lf\n", d);break;
                }    
                case '-': 
                {
                    d=d-a; printf("%.3lf\n", d);break;
                }
                case '*': 
                {
                    d=a*d; printf("%.3lf\n", d);break;
                }
                case '/':
                { 
                    if(a!=0){d=d/a; printf("%.3lf\n", d);}break;
                }
                default:if(c!='&'){printf("operacao nao pode ser realizada");break;}
            }
        }
    }
    
    return 0;
}