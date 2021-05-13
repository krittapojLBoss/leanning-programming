#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {

   char s1[250];
   char s2[250];
   char s3[250];
   char s4[250];


   printf(" Enter number s1:");
    scanf("%s" ,&s1);
   printf(" Enter number s2:");
    scanf("%s" ,&s2);
   printf(" Enter number s3:");
    scanf("%s" ,&s3);
   printf(" Enter number s4:");
    scanf("%s" ,&s4);
    int k = strlen(s1)/4;
    for (int loop=0 ; loop<k ; ++loop) {
        for (int i = 0; i < 4; ++i) {
            printf("%s\n", s1[4*(k-1)+i]);
        }
        for (int i = 0; i < 4; ++i) {
            printf("%s\n", s2[4*(k-1)+i]);
        }
        for (int i = 0; i < 4; ++i) {
            printf("%s\n", s3[4*(k-1)+i]);
        }
        for (int i = 0; i < 4; ++i) {
            printf("%s\n", s4[4*(k-1)+i]);
        }
}
    }

    


