#include<stdio.h>
#include<string.h> 

int main () {

    int netAmt;
    char name[20]   ;
    printf ("enter name:");
    scanf ("%s",&name[20]) ;
    int amt;
    printf("\n enter amt :") ;
    scanf ("%d",&amt) ;
    char ldtype;
     printf("\n enter type L laptop nd D desktop :") ;
    scanf ("%c",&ldtype) ;

    if (amt<=25000) {
        if (ldtype=='L') {
            netAmt = amt-0/100;
            printf ("name: %s \n netAmt=%d",name,netAmt);
        }
        else{
            netAmt = amt-5/100;
            printf ("name: %s \n netAmt=%d",name,netAmt);
        }
    }
    else if (amt<=50000) {

         if (ldtype=='L') {
            netAmt = amt-5/100;
            printf ("name: %s \n netAmt=%d",name,netAmt);
        }
        else{
            netAmt = amt-7.5/100;
            printf ("name: %s \n netAmt=%d",name,netAmt);
        }
    }else if (amt<=100000) {
        if (ldtype=='L') {
            netAmt = amt-7.5/100;
            printf ("name: %s \n netAmt=%d",name,netAmt);
        }
        else{
            netAmt = amt-10/100;
            printf ("name: %s \n netAmt=%d",name,netAmt);
        }
    }else {
        if (ldtype=='L') {
            netAmt = amt-10/100;
            printf ("name: %s \n netAmt=%d",name,netAmt);
        }
        else{
            netAmt = amt-15/100;
            printf ("name: %s \n netAmt=%d",name,netAmt);
        }
    }


    return 0;
}