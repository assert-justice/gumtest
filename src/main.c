#include <stdio.h>
#include "test.h"
#include "test2/grr.h"
#include "tq84/add.h"
#include "tq84/answer.h"
// test
// created at: 2021-12-16
int main(){
    printf("hello world!\n");
    help();
    help2();
    
    setSummand(5);
    printf("5 + 7 = %d\n", add(7));
    printf("And the answer is: %d\n", answer());
    return 0;
}