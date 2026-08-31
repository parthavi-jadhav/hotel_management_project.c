#include<stdio.h>
#include<conio.h>

/*int main() {
    printf("\033[1;31mThis is bold RED text\033[0m\n");
    printf("\033[1;32mThis is bold GREEN text\033[0m\n");
    printf("\033[1;34mThis is bold BLUE text\033[0m\n");
    printf("\033[1;33mThis is bold YELLOW text\033[0m\n");
    printf("This is normal text\n");
    return 0;
}
    
int main() {
    printf("\033[31mThis is red text\033[0m\n");
    printf("\033[32mThis is green text\033[0m\n");
    printf("\033[33mThis is yellow text\033[0m\n");
    printf("\033[34mThis is blue text\033[0m\n");
    printf("\033[35mThis is magenta text\033[0m\n");
    printf("\033[36mThis is cyan text\033[0m\n");
    printf("This is normal text\n");
    return 0;
}*/
void main()
{int o,n,p;
    printf("\033[1;34m_____________...WELCOME TO SKYLINE HOTEL..._____________\033[0m\n");
    start: //label for goto
    printf("please select the room type of your choice from the following options: \n");
    printf("\033[33m1]single room(non AC,TV,1 bed)  \t 2]single room(AC,TV,1 bed) \n");
    printf("3]double room(non AC,TV,2 beds) \t 4]single room (AC,TV,2 beds)\n " );
    printf("5]exclusive room(AC, 2 TVs,3 beds) \t 6]deluxe room (AC,3 TVs,4 beds) \033[0m\n " );
    scanf("%d",&o);


//choosing type of room to stay//
printf("-----------------------------------------------------------------------------\n");

    switch(o)
    { 
        case 1: {printf("please state the duration of your stay in days:");
                 scanf("%d",&n);
                 p=600*n;
                 printf(" \033[32m\nthe expense of your stay will be : Rs.%d\033[0m",p);
                 break;
                }

        case 2: {printf("please state the duration of your stay in days:");
                 scanf("%d",&n);
                 p=800*n;
                 printf("\033[32m\nthe expense of your stay will be : Rs.%d\033[0m",p);
                break;
                }

        case 3: {printf("please state the duration of your stay in days:");
                 scanf("%d",&n);
                 p=1200*n;
                 printf("\033[32m\nthe expense of your stay will be : Rs.%d\033[0m",p);
                 break;
                }

        case 4: {printf("please state the duration of your stay in days:");
                 scanf("%d",&n);
                 p=1400*n;
                 printf("\033[32m\nthe expense of your stay will be : Rs.%d\033[0m",p);
                 break;
                }

        case 5: {printf("please state the duration of your stay in days:");
                 scanf("%d",&n);
                 p=2000*n;
                 printf("\033[32m\nthe expense of your stay will be : Rs.%d\033[0m",p);
                 break;
                }

        case 6: {printf("please state the duration of your stay in days:");
                 scanf("%d",&n);
                 p=2500*n;
                 printf("\033[32m\nthe expense of your stay will be : Rs.%d\033[0m",p);
                 break;
                }

        default:{printf("\033[31m\nplease enter valid option!\033[0m\n\n");
                 goto start;
                }


    }

// membership card//

 {
    char at;
    char pn[15];
    int choice;

    printf("\n-----------------------------------------------------------------------------\n");
    printf("Would you like to apply for our hotel's exclusive member card (y/n): ");
    printf("\033[35m\n• The benefits include: \n"
           "- 5 percent discount on every trip \n"
           "- Free access to the swimming pool \n"
           "- Free beverages from the cafeteria\033]0m \n");

    scanf(" %c", &at);

    if (at == 'y' || at == 'Y') {
        do {
            printf("\nEnter your choice: \n"
                   "1] Monthly membership fee = Rs. 4000 \n"
                   "2] Annual membership fee = Rs. 40,000\n");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("\nCongratulations! You have obtained your monthly membership card!!!\n");
                    printf("You will receive your membership credentials on your contact number.\n");
                    printf("\nPlease enter your contact number: ");
                    scanf("%s", pn);
                    break;

                case 2:
                    printf("\nCongratulations! You have obtained your yearly membership card!!!\n");
                    break;

                default:
                    printf("\033[31mInvalid option! Please try again.\033[0m\n");
            }
        } while (choice != 1 && choice != 2);
    } else {
        printf("\nWe respect your choice.\n");
    }

    
}



//access to swimmiing pool//
printf("\n-----------------------------------------------------------------------------");
char ans;
    printf("\nWould you like to opt for the swimming pool services? \t \033[1;31m (NOTE:Free for everyone)\033[0m \n(y/n):");
    scanf("%c",&ans);

    if (ans=='y' || ans=='Y')
    {printf("\nnoted! enjoy your time swimming.");}
    else
     printf("\nnoted! thank you for your reply.");

// Sports auditorium//
printf("\n-----------------------------------------------------------------------------");
char ru;
int hi;
printf(" \nWould you like to enjoy our indoor sports auditorium services?  \033[1;31m(NOTE: Not free; fees will be counted in the overall reciept) \t \033[0m(y/n)");
scanf("%c",&ru);
if(ru=='y' || ru=='Y')
{ printf(" \nWe offer the following sports : \n \033[36m1]Badminton \t 2]Table tennis \t 3]Chess \t 4]Billiards \t 5]Cards  \033[0m");
  printf(" \n\nplease select your favourable time slot : 1] 8:00 AM to 10:00 AM  \t 2] 10:00 AM to 12:00 PM  \t 3] 1:00 PM to 3:00 PM \t 4] 3:00 PM to 5:00 PM \t 5]5:00 PM to 9:00 PM \n");
  scanf("%d",&hi);
  printf(" \nNOTED! ");

}
else
  printf(" \nNOTED! ");


// cafeteria services and restaurant//
printf("\n-----------------------------------------------------------------------------");
char an;
printf("\nWould you like to opt for our cafeteria or restaurant services?:(y/n) \n  \033[1;31m(note: cafeteria and restaurant are different; seperate payments needed in special orders)\033[0m");
scanf("%c",&an);

int op;
if (an =='y' || an=='Y')
{  printf (" \nwhich of the services combo do you prefer:\n \033[36m1] cafeteria only \t 2] restaurant only \t 3] both cafeteria and restaurant \n \033[0m");
   printf("\n\n****** CAFETERIA: provides you with exclusive and refreshing beverages and snacks \n RESTAURANT: provides you with heartwarming meals of your choice and unique cuisines.******\n");
   scanf("%d",&op);
   char yu;
   switch(op)
   {   case 1: { printf("\n \033[1;35m .....WELCOME TO OUR CAFETERIA..... \033[0m\n\033[34m To order for your favourite refreshments and snacks , we will send you the menu card to your hotel room when you check in to the hotel!\n THANK YOU! \033[0m" );
                printf(" \n\nwould you like to see the diferrent types of refreshments offered by us (y/n):");
                scanf(" %c",&yu);
        
                 printf(" \033[33m\nWe offer *hot beverages \t  *cold beverages \t *cocktails\t *bubble teas and much more....\033[0m");

               }
        case 2:{ printf ("\033[1;35m\n.....WELCOME TO OUR RESTAURANT.....\033[0m \n \033[34mTo order for your meals we will send the menu card to your hotel room when you check in to our hotel!\n THANK YOU!\033[0m");
                printf(" \n\nwould you like to see the diferrent types of cuisines offered by us (y/n):");
                scanf(" %c",&yu);

                if(yu=='y')
                 { printf("\033[33m\nWe offer *Chinese cuisine \t *Thai cuisine \t *Indian cuisine \t *French cuisine \t *Western cuisine and much more....\033[0m");
                }
               }     
                
        case 3:{ printf("\033[1;35m\n .....WELCOME TO OUR CAFETERIA & RESTAURANT.....\033[0m \n \033[34mo order for your favourite refreshments,snacks and meals , we will send you the menu card to your hotel room when you check in to the hotel!\n THANK YOU! \033[0m");
                printf(" \n\nWould you like to see the diferrent types of cuisines offered by us in the restaurant and refreshment types in cafeteria (y/n):");
                scanf(" %c",&yu);
                 if(yu=='y' || yu=='Y')
                 { printf("\nWe offer\033[33m *Chinese cuisine \t *Thai cuisine \t *Indian cuisine \t *French cuisine \t *Western cuisine and much more....\033[0m");
                   printf("\n\nWe also offer \033[33m*hot beverages \t  *cold beverages \t *cocktails\t *bubble teas and much more....\033[0m");

                 }
               }
    }
}

else
printf("\n\033[32m Don't worry! The lunch meals are now free for everyone.\033[0m");

printf("\n-----------------------------------------------------------------------------");
// payment mode and receipt accordingly//
char f;
int t;
  printf("\n \nDo you wish to proceed with the payment? (y/n):");
  scanf(" %c",&f);

  if (f=='y'||f=='Y')
  do {printf("\nWould you like to proceed with 1] online payment 2] Offline payment");
    scanf("%d",&t);
    switch(t)
    { case 1: {printf(" \n Please pay to the given account no. : 1133452678 \n \033[32mthank you for your payment & you will recieve the reciept on your contact no.\033[0m");
               break;}
      case 2: {printf(" \n Please proceed with the payment on arriving at our hotel.  Thank you . ");
              break;}
      default: {printf("\n\033[31mPlease select valid choice!\033[0m");}
    }
  }while(t!=1 && t!=2);

printf("\n-----------------------------------------------------------------------------");
// hotel room  no. alloted ; input from user for the alloted room no.//
 int num;
printf("\n\nPlease enter you contact no. to send you hotel and room no. details:");
scanf(" %d",&num);

printf("\n-----------------------------------------------------------------------------");
// Rating and thank you//
int star;
do{printf("\n \n \033[1;32m ***********_____PLEASE RATE OUR HOTEL WEBSITE_____*********** \033[0m \n  How many stars would you you like to rate us of of 5:\t");
scanf("%d",&star);
if(star<=5)
printf( "\nThank you for rating us! Enjoy your stay.");
else 
printf("\nPlease enter valid rating .");
}while(star>5);

printf("\n-----------------------------------------------------------------------------");
printf("\n  😊 💫 \033[33mTHANK YOU & VISIT AGAIN \033[0m 😊 💫");

getch();
}
