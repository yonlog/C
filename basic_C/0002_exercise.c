    
    /*     

        Program Title :   함수를 사용한 삼각형 출력하기(함수로 출력)( 책 72p )  
        Category      :   basic_C  
        Reference     :   에제가 가득한 C언어 길라잡이 | 김은철 저  
        Author        :   김이온  
        Date          :   2021-07-13 
                      
    */  


#include <stdio.h>

void print_star( int line )
{
    int i, j;

    for( i=0; i<line; i++ )
    {
        for( j=0; j<=i; j++ )
        {
            printf( "*" );
        }
        printf ( "\n" );
    }
}

int main()
{
    int line;

    /* 값 입력 */
    printf( "몇 줄로 삼각형을 만들꺼니?" );
    scanf( "%d", &line );                   // 키보드 입출력 값을 받음

    print_star( line );
    
}