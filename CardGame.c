#include <stdio.h>
#define SIZE 8
    //           i 
int masterD[] = {10, 5, 25, 22, 63, 63, 22, 9};
int playerA[SIZE]; //{  0   1 2 3 }
int playerB[SIZE];//{0 1 2 3 }

void distribute(){

        // playerA : 10 25 63 22 
        
        // playerB : 5 22 63 9 
    int i;
    int j=0;
    int k=0;

    for(i=0;i<SIZE;i++){
        if(i %2 == 0 ){
            //even 
            playerA[j++] = masterD[i];
        }else{
            //odd 
            playerB[k++] = masterD[i];
        }
    }

}

void display(){
    //playerA print 
    int i;
    printf("\nPlayerA Deck : ");
    for(i=0;i<SIZE;i++){ 
        if(playerA[i] == 0 ){
            break;
        }
        printf(" %d",playerA[i]);
    }
    //playerB print 
    
    printf("\nPlayerB Deck : ");
    for(i=0;i<SIZE;i++){
        if(playerB[i] == 0 ){
            break;
        }
        printf(" %d",playerB[i]);
    }
}
int main()
{
    distribute();
    display();
    return 0;
}