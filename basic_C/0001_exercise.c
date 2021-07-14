    /*     

        Program Title :   1부터 100까지의 합 구하기 ( 책 71p )  
        Category      :   basic_C  
        Reference     :   에제가 가득한 C언어 길라잡이 | 김은철 저  
        Author        :   김이온  
        Date          :   2021-07-13 
                      
    */  


#include <stdio.h>

void main()
{
    int i, hap = 0;

    for ( i=1; i<=100; i++ )
    {
        hap = hap + 1;
    }

    printf ( "1에서 100까지의 합: %d \n", hap );
}