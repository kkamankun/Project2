#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

struct stat stat1, stat2;
struct tm *time1, *time2;

void filestat1();
void filestat2();
void filetime1();
void filetime2();
void sizecmp();
void blockcmp();
void datecmp();
void timecmp();

int main(){
    filestat1();
    filestat2();
    filetime1();
    filetime2();
    sizecmp();
    blockcmp();
    datecmp();
    timecmp();
}

//파일 1의 정보를 가져오는 함수 작성
void filestat1(){
    
}

//파일 2의 정보를 가져오는 함수 작성
void filestat2(){
    
}

//파일 1의 시간 정보를 가져오는 함수 작성
void filetime1(){
    
}

//파일 2의 시간 정보를 가져오는 함수 작성
void filetime2(){
    
}

//두 개의 파일 크기를 비교하는 함수 작성
void sizecmp(){
    printf("size compare\n");
    if ((int)stat1.st_size > (int)stat2.st_size)
        printf("%s is bigger\n", "text1");
    else if ((int)stat1.st_size < (int)stat2.st_size)
        printf("%s is bigger\n", "text2");
    else
        printf("sizes are equal\n");
    printf("\n");
    return;
}

//두 개의 파일 블락 수를 비교하는 함수 작성
void blockcmp(){
    printf("block compare\n");
    if ((int)stat1.st_blocks > (int)stat2.st_blocks)
        printf("%s is bigger\n", "text1");
    else if ((int)stat1.st_blocks < (int)stat2.st_blocks)
        printf("%s is bigger\n", "text2");
    else
        printf("sizes are equal\n");
    printf("\n");
    return;
}

//두 개의 파일 수정 날짜를 비교하는 함수 작성
void datecmp(){
    
}

//두 개의 파일 수정 시간을 비교하는 함수 작성
void timecmp(){
    
}