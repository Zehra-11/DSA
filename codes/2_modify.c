#include <stdio.h>

int main(){
    
    int array[]={10,20,30};
    int n= sizeof array/ sizeof array[0];

    for (int i =0;i <n ;i++){

        printf("%d\n",array[i]+5);
    }

    return 0;
}