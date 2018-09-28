#include <stdio.h>
#include <stdlib.h>

void Nashik()
{
    printf("\nGrape's city");
}
void Nagpur()
{
    printf("\nOrange's city");
}
void Konkan()
{
    printf("\nMango's city");
}

void menu()
{
    printf("\n 0= Menu");
    printf("\n 1= Nashik");
    printf("\n 2= Nagpur");
    printf("\n 3= Konkan");
    printf("\n -1= Exit");

}


void main()
{
    int ch=0;
    void (*city)();

    printf("Hello!\n");
    while(1)
    {
		if(ch == -1)
			break;
        switch(ch)
        {
            case 0: 
                menu();
                break;
            
            case 1:
                city = Nashik;
                city();
                break;
            
            case 2:
                city = Nagpur;
                city();
                break;
            
            case 3:
                city = Konkan;
                city();
                break;
                
        } //end switch
        
        printf("\n Enter u r choice: ");
        scanf("%d",&ch);
    }//end while
    
}