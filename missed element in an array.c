#include <stdio.h>
 
void main()
{
    int n, i, j, c, t, b;
 
    printf("Enter size of array : ");
    scanf("%d", &n);
    int array[n - 1];     /* array size-1 */
    printf("Enter elements into array : \n");
    for (i = 0; i < n - 1; i++)    
        scanf("%d", &array[i]);
    b = array[0];
    for (i = 1; i < n - 1; i++)
        b = b ^ array[i];
    for (i = 2, c = 1; i <= n; i++)
        c = c ^ i; 
    c = c ^ b;  
    printf("Missing element is : %d \n", c);
}


Repeatation of element :

#include<stdio.h>
int main() 
{ 
    int arr[] = {20, 30, 10, 2, 10, 20, 30, 11}; 
    int n = sizeof(arr)/sizeof(arr[0]); 

    int visited[n];
 
    for(int i=0; i < n; i++){
        
        // only if unvisited
        if(visited[i] == 0){
            int count = 1;
          
            for(int j = i+1; j < n; j++) { 
				// if appears again in the array 
				if(arr[i] == arr[j]) 
				{ // increase count & mark index visited 
					count++; 
					visited[j] = 1; 
				} 
			} // 
			
            if(count > 1)
                printf("%d ",arr[i]);
        }
    }
   return 0; 
}


