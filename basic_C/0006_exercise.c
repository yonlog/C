    /*     

        Program Title :   연습 문제 - 변수의 초기화 ( 책 88p - 10번 문제 )  
        Category      :   basic_C  
        Reference     :   에제가 가득한 C언어 길라잡이 | 김은철 저  
        Author        :   김이온  
        Date          :   2021-07-15
                      
    */  


        /* 다음 문장이 실행되면 잘못된 결과가 출력됩니다. 코드를 올바르게 수정하세요*/

        /* 기존 코드
        #include <stdio.h>

        int main()
        {
            int hap;

            hap = hap + 500;

            printf ( "%d \n", hap);
        }
        */

       /* 수정된 코드 */
       
        #include <stdio.h>

        int main()
        {
            int hap = 0;    // 선언과 동시에 초기화

            hap = hap + 500;

            printf ( "%d \n", hap);     // 예상 출력값: 500
        }

