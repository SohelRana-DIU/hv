/*#include<stdio.h>
int main(){
    int vote;
    int So=0,Su=0,Mash=0,Ma=0,Mi=0;

    repeat;
    printf("Choose member:\n\t 1.Sohel\n\t 2.Sumaiya\n\t 3.Mashrafi\n\t 4.Mafi \n\t 5.Minha\n6.Result\nEnter your vote: ");
    scanf("%d",&vote);

    switch (vote){
    case 1:
        So++;
        goto repeat;
        break;
    case 2:
        Su++;
        goto repeat;
        break;
    case 3:
        Mash++;
        goto repeat;
        break;
     case 4:
        Ma++;
        goto repeat;
        break;
    case 5:
        Mi++;
        goto repeat;
        break;
    case 6:
        printf("Result:\n");
        break;

    default:
        printf("Error vote, please try again");
        goto repeat;
        break;
    }
    printf(" %d Sohel\n %d Sumaiya\n %d Mashrafi\n %d Mafi\n %d Minha\n",So,Su,Mash,Ma,Mi);
}*/
#include<stdio.h>
int main(){
    int a=10;
    printf("%d",++a);
    printf("%d",a++);
}
