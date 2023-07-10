#include<stdio.h>
#include<stdlib.h>
void main()
{
   int a,b;
   system("clear");
   printf("\n 1.B.Tech ");
   printf("\n 2.Degree ");
   printf("\n enter your selection: ");
   scanf("%d",&a);
   switch(a)
   {
        case 1:
                printf("\n you have chosen B.Tech:");
                printf("\n 1. Computer science B.Tech: ");
                printf("\n 2. Information Technologies B.Tech: ");
                printf("\n 3. Electronical and Communications B.Tech: ");
                printf("\n 4. Electrical and Electronics: ");
                printf("\n choose which one you want:");
                scanf("%d",&a);
                switch(a)
                {
                     case 1:
                                printf("\n you have choosen Computer Science:");
                               break;
                     case 2:
                                printf("\n you have choosen Information Technologies:");
                               break;
                     case 3:
                                 printf("\n you have choosen Electronical and Communications:");
                               break;
                     case 4:
                                  printf("\n you have choosen Electrical and Electronics:");
                               break;
                     default:
                               printf("\n you have choosen invalid option:");
                  }
                  
        case 2:   
                printf("\n you have choosen Degree:");
                printf("\n 1. Bsc Computers: ");
                printf("\n 2. Bsc General: ");
                printf("\n 3. Bsc Agriculture: ");
                printf("\n 4. Bsc Bio-Tech: ");
                printf("\n 5. Bcom Computers: ");
                printf("\n 6. Bcom General: ");
                printf("\n 7. B.A General: ");
                printf("\n 8. B.A Computers: ");
                printf("\n choose which one you want:");
                scanf("%d",&b);
                switch(b)
                {
                     case 1:
                                printf("\n you have choosen Bsc Computers:");
                               break;
                     case 2:
                                printf("\n you have choosen Bsc General:");
                               break;
                     case 3:
                                 printf("\n you have choosen Bsc Agriculture:");
                               break;
                     case 4:
                                  printf("\n you have choosen Bsc Bio-Tech:");
                               break;
                     
                     case 5:
                                printf("\n you have choosen Bcom Computers:");
                               break;
                     case 6:
                                printf("\n you have choosen Bcom General:");
                               break;
                     case 7:
                                 printf("\n you have choosen B.A General:");
                               break;
                     case 8:
                                  printf("\n you have choosen B.A Computers:");
                               break;
                     default:
                               printf("\n you have choosen invalid option");
                 }
 

              
                    default:
                            printf("\n you have choosen a wrong option");
             }
    }
             
