    /*     

        Program Title :   scanf() 함수를 사용한 문자열 입력
        Category      :   basic_C  
        Reference     :   에제가 가득한 C언어 길라잡이 | 김은철 저  
        Author        :   yon
        Date          :   2021-07-26
                      
    */  


        /* scanf() 함수를 사용한 문자열 입력 */

#include <stdio.h>

void main() {
    int value;

    scanf( "%d", &value );          /* &의 사용에 주의할 것*/
                                    /* scanf() 함수를 사용할 때 변수 이름 앞엔 반드시 번지 연산자 ( & ) 사용해야함 */
    printf( "%d \n", value + 1 );   /* 입력한 정수값 + 1의 결과가 출력됨 */
}