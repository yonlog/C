    /*     

        Program Title :   연습 문제 - Chapter 04 ( 책 105p - 07 번 문제 )  
        Category      :   basic_C  
        Reference     :   에제가 가득한 C언어 길라잡이 | 김은철 저  
        Author        :   김이온  
        Date          :   2021-07-26
                      
    */  



    /* 다음 문장에서 제어 문자를 적절히 수정하여 문자열이 3자리만 출력되게 하십시오 */
    // printf("%s", "abcde" );


   #include <stdio.h>

   void main() {
       printf( "[%3.3s] \n", "abcde" );
   }
