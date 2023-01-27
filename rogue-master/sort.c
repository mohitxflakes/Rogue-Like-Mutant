#include <stdio.h>

void Insertionsort(int array[],int size)
{
    for(int i; i< size; i++){

        int tmep = array[i];
        int position = i-1 ;

        while(position >= 0)
        {
            if(array[position] > tmep)
            {array[position+1] = array[position];
            position -= 1 ;}

            else { break;}
        }

        array[position] = tmep;
    }
}


int main(){

    int array[] = {4,7,3,12,2};
    Insertionsort(array,5);
    printf("%d ",array[0]);
    printf("%d ",array[1]);
    printf("%d ",array[2]);
    printf("%d ",array[3]);
    printf("%d ",array[4]);

    return 0;
}