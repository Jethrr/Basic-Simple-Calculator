#include<stdio.h>

int main()
{
    int operation, n1, n2;
    
    printf("\t\t\t\t\t============CALCULATOR==============\n");
    printf("\t\t\t\t\t\tChoose Operator\n");
    printf("\t\t[1]Addition\t\t[2]Subtraction\t\t[3]Division\t\t[4]Multiplication\n\n");
    
    do{
    printf("Enter Operator: ");
    scanf("%d", &operation);
    printf("Enter First Number: ");
    scanf("%d", &n1);
    printf("Enter Second Number: ");
    scanf("%d", &n2);
    
        switch(operation){
            case 1:
            printf("======================");
            printf("\n%d + %d = %d", n1, n2,(n1+n2));
                break;
            case 2:
                printf("======================");
                printf("\n%d - %d = %d", n1, n2,(n1-n2));
                break;
            case 3:
                printf("======================");
                if(n2 != 0.0)
                printf("\n%d/%d = %d", n1, n2, (n1/n2));
                break;
            case 4:
                
                 printf("======================");
                 printf("\n%d * %d = %d", n1, n2,(n1*n2));
                break;
            default:
                printf("INVALID OPERATOR PLEASE TRY AGAIN\n");
    }
    }while(operation < 1 || operation > 4);
    return 0;
}
