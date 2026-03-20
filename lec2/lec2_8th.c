#include <stdio.h>

int main(){
    int var_floor = 3;
    int var_ho = 4;
    if(var_floor %2 ==1){
        if(var_ho %2 ==1){
            printf("need to use ev1.\n");
        }
    }
        if(var_floor %2 ==0){
        if(var_ho %2 ==1){
            printf("need to use ev3.\n");
        }
    }
        if(var_floor %2 ==0){
        if(var_ho %2 ==0){
            printf("need to use ev4.\n");
        }
    }
        if(var_floor %2 ==1){
        if(var_ho %2 ==0){
            printf("need to use ev2.\n");
        }
    }



    return 0;
}