#include <stdio.h>

typedef struct PersonData{
    unsigned char age;
    unsigned char weight;
    unsigned short height;
} personData;

#define INDEX_AGE    0
#define INDEX_WEIGHT 1
#define INDEX_HEIGHT 2

int main(){

    unsigned char data[] = {24,60,0,1};

    personData * person1 = (personData *) data;


    printf("age of the person : %d\n",data[INDEX_AGE]);
    printf("weight of the person : %d\n",data[INDEX_WEIGHT]);
    printf("height of the person : %d\n",data[INDEX_HEIGHT]);
    printf("age of the person : %d\n",person1->age);
    printf("weight of the person : %d\n",person1->weight);
    printf("height of the person : %d\n",person1->height);
    

    return 0;
}