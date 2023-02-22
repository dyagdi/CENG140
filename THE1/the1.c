





#include <stdio.h>

int main()
{
	
	int i, j, k;
	int length = 0;
	int number_of_tribes = 0;
	int width = 0;
	int height = 0;
	int first_time = 0;
	int left_position = 0;
	int speed = 0;
	int interval = 0;
	int number_of_attacks = 0;
	int tribe[7] = {0};
	int wall[100000];
	int right_position = 0;

	scanf("%d", &length);
	scanf("%d", &number_of_tribes);
	
	for (i = 0; i< length+1; i++)
	{
	    wall[i] = 1;
	}

	
	for(i = 0; i < number_of_tribes; i++)
	{
		scanf(" %d %d %d %d %d %d %d ", &width, &height, &first_time, &left_position, &speed, &interval, &number_of_attacks);
		
		right_position = width + left_position;
		
		if( speed > 0)
		{
			for (j = 0; j<number_of_attacks-1; j++)
			{
				right_position += interval * speed;
			}	
				if( right_position > length)
			{
				right_position = length+1;
			}
				
			
			
			
			for( j = left_position; j<right_position; j++)
			{
				if(height> wall[j])
				{
					wall[j] += (height - wall[j]);
				}
				else if(wall[j]> height)
				{
				    wall[j] = wall[j];
				}
			}
		}
		else if( speed < 0)
		{
			for(j = 0; j<number_of_attacks-1; j++)
			{
				left_position -= interval*(-speed) ;
			}			
			if( left_position <0)
			{
				left_position = 0;
			}
			
			
			
			
			for(j = right_position-1; j >= left_position; j--)
			{
				if(height > wall[j])
				{
					wall[j] += (height - wall[j]);
				}
				else if(wall[j]> height)
				{
				    wall[j] = wall[j];
				}
			}
		}
	}
printf("%d", wall[0]);	
	
	for( k = 1; k<length+1; k++)
	{
	    printf(" %d", wall[k]);
	}


printf("\n");
return 0;	
}
























#include <stdio.h>

int main()
{
	
	int i, j, k, l;
	int length = 0;
	int number_of_tribes = 0;
	int width = 0;
	int height = 0;
	int first_time = 0;
	int left_position = 0;
	int speed = 0;
	int interval = 0;
	int number_of_attacks = 0;
	int wall[100000];
	int right_position = 0;
   

	scanf("%d", &length);
	scanf("%d", &number_of_tribes);
	
	for (i = 0; i< length+1; i++)
	{
	    wall[i] = 1;
	}

	
	for(i = 0; i < number_of_tribes; i++)
	{
		scanf("%d %d %d %d %d %d %d", &width, &height, &first_time, &left_position, &speed, &interval, &number_of_attacks);
		
		right_position = width + left_position;
    
		
		if( speed >= 0)
		{
           
			for (j = 0; j < number_of_attacks; j++)
			{
				
                
                for( l = left_position; l < right_position; l++)
			    {
                    if (l >= 0 && l < length + 1)
                    {
                        if(height > wall[l])
                        {
                            wall[l] += (height - wall[l]);
                        }
                        else if(wall[l] >= height)
                        {
                            wall[l] = wall[l];
                    }
                    }
			    }

                right_position += interval * speed;
                left_position += interval * speed;


			}
			

			
            
		}
		else if( speed < 0)
		{
			for(j = 0; j<number_of_attacks; j++)
			{
				

                for(l = right_position - 1; l >= left_position; l--)
			    {
                    if (l >= 0 && l < length + 1)
                    {
                        if(height > wall[l])
                        {
                            wall[l] += (height - wall[l]);
                        }
                        else if(wall[l] >= height)
                        {
                            wall[l] = wall[l];
                        }
                    }
			    }

                left_position -= interval*(-speed);
                right_position -= interval * (-speed);
			}			
			
          
			
			
		}
	}
    
    	
	
	for(k = 0; k < length + 1; k++)
	{
	    if (k == length)
        {
            printf("%d\n", wall[k]);
        }

        else
        {
            printf("%d ", wall[k]);
        }
        
	}
return 0;	
}


