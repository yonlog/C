    /*     

        Program Title :   연습 문제 - 지역 변수와 전역 변수 ( 책 87p - 6번 문제 )  
        Category      :   basic_C  
        Reference     :   에제가 가득한 C언어 길라잡이 | 김은철 저  
        Author        :   김이온  
        Date          :   2021-07-15
                      
    */  

   #include <stdio.h>

   int value;                       // 전역변수, 초기화하지 않았으므로 자동으로 0으로 초기화

   void func()                      // func() 함수 생성
   {
       value = value + 200;         // 여기서 쓰인 value 는 전역변수 value
       printf( "%d \n", value );    // value를 정수형으로 출력 후 개행
   }

   int main()
   {
       int value = 100;             // 지역변수, value에 100을 대입. main() 함수에서만 사용
       func();                      // func() 함수 호출
   }

                                    // 예상출력값: 200