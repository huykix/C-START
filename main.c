#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

   /* int x;
    int y;
    char azadi;
    printf("x ve y sayilarini ve bir harf giriniz\n");
    scanf("%d %d %c",&x,&y,&azadi);
    printf("x sayisi: %d  \n\ay sayisi: %d\nismin bas harfi:%c",x,y,azadi);
    */
    /*
    int x,y,z;
    printf("X Y Z sayilarini giriniz\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && x>z)
    {
        printf("en buyuk sayi %d olan x",x);
    }
    else if(x<y && z<y)
    {
        printf("en buyuk sayi %d olan y",y);
    }
    else if(z>x && z>y)
    {
        printf("en buyuk sayi %d olan z \n",z);
    }
    if(x==y && x>z)
    {
        printf("X ve Y birbirine esit ve Z den buyuktur");
    }
    else if(x==z && x>y)
    {
        printf("X ve Z birbirine esit ve Y den buyuktur");
    }
    else if(z==y && z>x)
    {
        printf("Z ve Y birbirine esit ve X den buyuktur");
    }

    */


/*

    int i,j,toplam=0;
        printf("kaca kadar toplayayim kuzum?");
        scanf("%d",&j);
        for(;j!=-1;){

        toplam+=j;
        scanf("%d",&j);
        }
        for(i=1;i<=j;i++)
        {
            toplam=i+toplam;

        }
        printf("%d",toplam);
*/

    /*
        int i,j,toplam=0;
        printf("kaca kadar toplayayim kuzum?");
        scanf("%d",&j);


        for(i=1;i<=j;i+=2)
        {
            toplam=i+toplam;

        }
        printf("%d",toplam);

        */


        /*
        int x=0,y=0,i=0,z;
        //printf("z sayisini giriniz \n");
        scanf("%d",&z);
        printf("\n\n\n",x);
        while(i<10)
        {
            i++;
            x++;
            y++;
            x=y*10*z;


            printf("%d\n",x);
        }

        */


/*
    int i=0,sayi;
        printf("bir sayisini giriniz \n");
        scanf("%d",&sayi);

        while(i<sayi)
        {
            if(i%2==0)
            {
                printf("%d\n",i);

            }i++;


        }

        */


        /*
        int i;
        printf("bir sayi giriniz:");
        scanf("%d",&i);

        while(i>=1)
        {
            printf("%d\n",i--);

        }

        */

        /*
        float a,b;
        char op;

        printf("Birinci sayiyi yapmak istediginiz islemi ve ikinci sayiyi giriniz\n");
        scanf("%f %c%f",&a,&op,&b);

        switch(op)
        {
            case'+':printf("%.2f + %.2f = %.2f",a,b,a+b);
            break;
            case'-':printf("%.2f - %.2f = %.2f",a,b,a-b);
            break;
            case'*':printf("%.2f * %.2f = %.2f",a,b,a*b);
            break;
            case'/':printf("%.2f / %.2f = %.2f",a,b,a/b);
            break;
            default:printf("yanlis yaptin kanka");

          }
            */

           /*
            float a,b;
            printf("iki sayi giriniz: ");
            scanf("%f %f",&a,&b);
            printf("%f\n",ceil(a));
            printf("%f\n",floor(a));
            printf("%f\n",sqrt(a));
            printf("%f\n",pow(a,b));

            */


            /*
            char a;
            printf("%c",250);
            */

            /*
            int i;

                for(i='a';i<='z';i++)
                {
                    if(i=='j')
                    {
                        continue;
                    }
                    else if(i=='t')
                    {
                        break;
                    }
                    printf("%c\n",i);
                }
                */

                /*
                int temp,i;
                int azad[6]={16,19,25,23,12,27};
                temp=azad[3];
                azad[3]=azad[5];
                azad[5]=temp;

                for(i=0;i<6;i++)
                {
                    printf("%d\n",azad[i]);
                }

                */

                int temp,i;
                int azad[6]={16,19,25,23,12,27};

                for(i=0;i<3;i++)
                {
                    temp=azad[i];
                    azad[i]=azad[5-i];
                    azad[5-i]=temp;

                }
                    for(i=0;i<6;i++)
                    {
                        printf("%d\n",azad[i]);
                    }

    return 0;
}
