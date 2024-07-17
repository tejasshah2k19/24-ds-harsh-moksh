#include <stdio.h>

int change1(int p)// 6000:10
{
    p++;//11 
    printf("\n%d",p);// 11
    return p; 
}

int change2(int p)//7000 :10
{
    p++;//11
    printf("\n%d",p);// 11
    return p; 
}
int change3(int p)// 9000:12
{
    p++;//13
    printf("\n%d",p);// 13
    return p; 
} 
int main()
{
    int p=10; // 5000 : 12 
    change1(p);//
    p = change2(p);
    p = change3(p); 
    change3(p); //12
    printf("\nFianl p = %d",p);
    return 0; 
}//



//search(int a[],int key)//{10,20,30,40,50}{70} => not found , {50} found 