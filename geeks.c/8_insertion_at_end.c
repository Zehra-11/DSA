#include <stdio.h>

void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
        
    }
     printf("\n");
}

int end(int array[],int size,int capacity,int element,int index){
    if(size>=capacity){
        return 0;
    }
    else{
        array[size]=element;

    }
    size +=1;
    return size;
}

int main()
{
    int size,capacity,element,index;
    int array[10] = {10, 20, 30, 40};

    display(array, 4);

     size =end(array,4,10,50,4);

     display(array,size);
    
    return 0;
}
