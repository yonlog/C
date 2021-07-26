    /*     

        Program Title :   연습 문제 - Chapter 04 ( 책 105p - 09 번 문제 )  
        Category      :   basic_C  
        Reference     :   에제가 가득한 C언어 길라잡이 | 김은철 저  
        Author        :   김이온  
        Date          :   2021-07-26
                      
    */  



    /* 가족의 모든 나이를 입력 받아 나이의 합을 출력하는 프로그램을 작성하세요 */


   #include <stdio.h>

   void main() {
       int dad, mom, sis, bro;

       printf( "아버지의 나이는: " );
       scanf( "%d", &dad );

       printf( "어머니의 나이는: " );
       scanf( "%d", &mom );

       printf( "언니의 나이는: " );
       scanf( "%d", &sis );

       printf( "오빠의 나이는: " );
       scanf( "%d", &bro );

       int total = dad + mom + sis + bro;
       printf( "나이의 총 합은: %d \n", total);

   }
