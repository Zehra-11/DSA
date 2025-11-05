#include <stdio.h>

int main(){
    
    int array[]={10,20,30};
    int n=sizeof array /sizeof array[0];

    int max =array [0];

    for (int i=0;i<n;i++){
        if(array[i]> max){
            max =array[i];

        }
    }
    printf("the maximum value is: %d",max);
    return 0;
}