#include <stdio.h>
void display(int array[],int size){
    for (int i=0;i<size;i++){
        printf("%d\n",array[i]);
    }
}

int insert(int array[],int size,int element,int index){
    for (int i=size -1;i>=index;i--){
        array[i+1]=array [i];
      
    }
    array[index]=element;
    size +=1;
}
int main(){
    int array[]={10,20,30};
    int size,element,index;
    printf("before insertion:\n");
    display(array,3);
  
    printf("after insertion:\n");
    insert(array,3,45,2);
    display(array,4);
    
    return 0;
}
