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
    
    return 1;
}
int main(){
    int array[5]={10,20,30};
    int size,element,index;

    printf("before insertion:\n");
    display(array,3);
  
    printf("after insertion:\n");
    insert(array,3,5,0);
    size +=1;

    display(array,4);
    
    return 0;
}



//chatgpt

#include <stdio.h>

void display(int array[], int size){
    for (int i = 0; i < size; i++){
        printf("%d\n", array[i]);
    }
}

// insert function returns the new size
int insert(int array[], int size, int element, int index){
    // shift elements to the right
    for (int i = size - 1; i >= index; i--){
        array[i + 1] = array[i];
    }
    // insert the new element
    array[index] = element;
    size += 1;   // increase size
    return size; // return new size
}

int main(){
    int array[10] = {10, 20, 30}; // array with extra space
    int size = 3, element, index;
    
    printf("Before insertion:\n");
    display(array, size);
  
    // insert 5 at index 0
    size = insert(array, size, 5, 0);
    
    printf("After insertion:\n");
    display(array, size);
    
    return 0;
}
