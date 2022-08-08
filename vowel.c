# include <stdio.h>
int main() {
    char c ;
    int a ;
    printf("enter the alphabet : ");
    scanf("%c",&c);

    if (c=='a' || c=='e'|| c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    {
        
        printf("ASCII value of %c is = %d \n",c,c);
        printf("YES your alphabet is vowel");
    }
    else if (c!='a','e','i','o','u','A','E','I','O','U'&& c<97)
    {
         printf("%c %d \n",c,c);
         a= c+32;
         printf("ASCII value of %c is = %d \n",a,a);
         printf("NO your alphabet is NOT vowel");
    }
    else if (c>=97)
    {
        printf("ASCII value of %c is = %d \n",c,c);
        printf("NO your alphabet is NOT vowel");
    }
    else{
        printf("your character is symbol %c %d \n",c,c);
        printf("NO your alphabet is NOT vowel");
    }
    return 0;
}



