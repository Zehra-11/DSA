#include <stdio.h>

int main(){
    
    int array[]={1,2,3,4,5};
    int length=5;
    int temp =0;

    for (int i=0;i<(length/2);i++){
        temp=array[i];
        array[i]=array[length-i-1];
        array[length-i-1]=temp;
    }

    for(int i=0;i<5;i++){
        printf("%d\n",array[i]);
    }
    return 0;
}