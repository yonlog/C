    /*     

        Program Title :   연습 문제 - Chapter 04 ( 책 105p - 10 번 문제 )  
        Category      :   basic_C  
        Reference     :   에제가 가득한 C언어 길라잡이 | 김은철 저  
        Author        :   김이온  
        Date          :   2021-07-26
                      
    */  



    /* 소수점이 포함된 2개의 값을 입력 받아 그 합과 평균을 출력하는 프로그램을 작성하세요 */


   #include <stdio.h>

   void main() {
       float i, j;

        printf( "첫 번째 값을 입력하세요: " );
        scanf( "%f", &i );

        printf( "두 번째 값을 입력하세요: " );
        scanf( "%f", &j );

        float total = i + j;
        float average = total / 2;

        printf( "두 값의 합은: %2.2f \n", total );      
        printf( "두 값의 평균은: %2.2f \n", average );    // 소수점 아래 2자리까지만 출력

   }
