#include <stdio.h>
int num,need_number,arr[100],i,Ue_De;
int main(){

while (1)
{

    printf("1.You Want To Create Array Please Press 1 \n");
    printf("2.You Want To Modify Array Please Press 2 \n");
    printf("3.You Want To Display The Arrays  Please Press 3 \n"); 
    printf("4.You Want To Exit Please Press 4 \n");
    printf("Please Type Your Number 1,2,3,4 : ");
    scanf("%d",&num);


    if (num==1){
        printf("Totally You Need A Numbers");
        scanf("%d",&need_number);
        for (int i = 0; i < need_number; i++)
        {printf("Enter %d Number :",i+1);
            scanf("%d",&arr[i]);
        }
        }  

    else if (num ==2){
                printf("1.Update Element: Press 1 \n"); 
                printf("2.Delete Element: Press 2 \n");
                printf("Please Press 1 or 2 :");
                scanf("%d",&Ue_De);
                switch (Ue_De){
                     case 1: {
            int index, new_value;
            printf("Enter the index (0 to %d) of the element you want to update: ", need_number - 1);
            scanf("%d", &index);
            if (index >= 0 && index < need_number) {
                printf("Enter the new value for element at index %d:  ", index);
                scanf("%d", &new_value);
                arr[index] = new_value;
                printf("Element at index %d has been updated to %d  \n", index, new_value);
            } else {
                printf("Invalid index!\n");
            }
            break;
        }
        case 2: {
            int index;

            printf("Enter the index (0 to %d) of the element you want to delete: ", need_number - 1);
            scanf("%d", &index);

            if (index >= 0 && index < need_number) {
                for (int i = index; i < need_number - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                need_number -=1;
                printf("Element at index %d has been deleted\n", index);
            } else {
                printf("Invalid index!\n");
            }
            break;
        }
        default:
        printf("Your Number Invalid");
            }
            }
          
    else if (num == 3)
    {
        if (need_number == 0)
        {
            printf("You Are Not Create Array Please Create Array \n \n");
        }
        else{
             for (int i = 0; i < need_number; i++)
        {
            printf("array [%d] =%d \n", i, arr[i]);
        }

        }
        
       
        
    }
    else if (num ==4)
    {
        printf("Your Program is Successefully Exit");
        return 0;
    }
    else{
        printf("Invalid Output");
    }
}


}
