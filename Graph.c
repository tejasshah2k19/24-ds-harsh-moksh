#include<stdio.h>
int graph[100][100];
int main(){
          int totalVertex;
          int i,j;
          int source;
     printf("\nHow many Vertex you want to enter");
     scanf("%d",&totalVertex);

     for (i = 0; i <totalVertex; i++)
     {
          for ( j = 0; j < totalVertex; j++)
          {
               printf("\n%d is connected with %d :-" ,i,j);
               scanf("%d",&graph[i][j]);
          } 
     }
     printf("\nEnter source :");
     scanf("%d",&source);
     
     for (j = 0; j < totalVertex; j++)
     {
               if(graph[source][j] == 1){
               printf("%d",j);
          }
     }
     return 0;
}