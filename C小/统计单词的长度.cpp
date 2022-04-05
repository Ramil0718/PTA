#include <stdio.h>

int main(void){
    int num, space, is_print = 0,all_space=1;
    char ch;
    num = space = 0;
    
    
    while ((ch = getchar()) != '\n') {
        if (ch != ' ') {
            all_space=0;
            num++;
            is_print = 0;
        }else{
            if (! is_print) {
                if (num) {
                    printf("%d ", num);
                    is_print = 1;
                }
            }
            num = 0;
        }
    }
    if (num) {
            printf("%d ", num);
            is_print = 1;
        }else if(all_space){
            printf("0 ");
        }
    return 0;
}
