    
    /*     

        Program Title :   함수를 사용한 삼각형 출력하기(기본 출력)( 책 72p )  
        Category      :   basic_C  
        Reference     :   에제가 가득한 C언어 길라잡이 | 김은철 저  
        Author        :   김이온  
        Date          :   2021-07-13 
                      
    */  

#include <stdio.h>


int main()
{
    int i, j;
    int line;

    /* 값 입력 */
    printf( "몇 줄로 삼각형을 만듭니까?" );
    scanf( "%d", &line );

    for ( i=0; i<line; i++ )
    {
        for( j=0; j<=i; j++ )
            {
                printf( "*" );        
            }
        printf( "\n" );         // 다음 줄로 개행        
    }

}