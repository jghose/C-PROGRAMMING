						#include<stdio.h>
					  int	main()
						{
						  float taka;
						printf("Enter ur amount of taka : ");
						scanf("%f",& taka);


						if(taka<250)
						{
                  printf("You can't travel todY");
						}

						else if(taka>=250 && taka<=350)
						{
						printf("then ur choice is train");
						}

						else if(taka>=400 && taka<=450)

						{
						printf("then ur possible choice is national travels");
						}

						else if(taka>=500)
						{
						printf("then ur final choice is green line");
						}


						return 0;
						}
