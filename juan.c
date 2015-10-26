#include<studio.h>

int	apuntador1[5] = {1,2,3,4,5};
int	apuntador2[5];
int *ptr;

void copy(int *ptr);

{ 
		int i;
		for( i=0;i<5;i++);
		{
		apuntador2[i]= *ptr+i;
		}
			
}
int main()
{
	ptr=arreglo1;
	copy(ptr);
	int i;
	for(1=0;i<5;i++)
	{
	printf("%d\n",arreglo2[i]);
	}
		
	
	
}