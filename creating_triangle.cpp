#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	/**
	
	For a triangle a-b-c edged ;

	a + b > c > |a-b|
	
	a + c > b > |a-c|
	
	b + c > a > |b-c|  are the rules for being a triangle.
	
	Let's play a game :) User enters some values for each edge and program calculates whether it couled be a triangle.
	
	You can try classic right triangle forms like 3-4-5,8-15-17,5-12-13,7-24-25 to see whether program works properly.
	
	Enjoy !!!
	
	**/
	
	int edges[2],i,edge_1,edge_2,edge_3;
	
	char loop='Y';
	
	while(loop=='Y')
	{
		for(i=0;i<3;i++)
	{
		printf("Enter the value for %d. edge of triangle :",i);
		scanf("%d",&edges[i]);
	}
	
	
	printf("The side lenghts you entered are as follows : ");
	for(i=0;i<3;i++)
	{
		printf("%d ",edges[i]);
	}
	
	if(abs(edges[0]-edges[1])<edges[2] && edges[2]<edges[0]+edges[1])
	{
		if(abs(edges[0]-edges[2])<edges[1] && edges[1]<edges[0]+edges[2])
		{
			if(abs(edges[1]-edges[2])<edges[0] && edges[0]<edges[1]+edges[2])
			{
				printf("\n %d-%d-%d triangle was created.",edges[0],edges[1],edges[2]);
			}
			
			else
			{
				printf("\n %d-%d-%d triangle can not be created !!!",edges[0],edges[1],edges[2]);
			}
		}
		else
		{
			printf("\n %d-%d-%d triangle can not be created !!!",edges[0],edges[1],edges[2]);
		}
		
	}
	else
	{
		printf("\n %d-%d-%d triangle can not be created !!!",edges[0],edges[1],edges[2]);
	}
	
	printf("\nWould you like to continue ?(Y/N):");
	scanf(" %c",&loop);
	}
	
	printf("Program is being closed...");
	
	return 0;
}
