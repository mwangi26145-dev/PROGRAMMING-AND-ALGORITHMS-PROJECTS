/*
Name:Mwangi Samuel
REG:CT100/G/26145/25
Description:Proograme for mobile data bundle purchase
*/

#include <stdio.h>

int main()
{
	int choice,cost;
	printf("select data bundle:\n");
	printf("1.100MB @ 50 KES\n");
	printf("2.500MB @ 200 KES\n");
	printf("3.1GB @ 350 KES\n");
	printf("4.2GB @ 600 KES\n");
	
	printf("Enter your choice (1-4):");
	scanf("%d",& choice);
	//Use switch statement to display bundle selected and cost
    
	switch(choice)
	{
	case 1:
		printf("You selected 100MB cost=50 KES\n");
		break;
	case 2:	
		printf("You selected 500MB cost=200 KES\n");
		break;
	case 3:
		printf("You selected 1GB cost=350 KES\n");
		break;
	case 4:
		printf("You selected 2GB cost=600 KES\n");	
		break;
	default:
		printf("Invalid choice\n");


	}
	return 0;
}