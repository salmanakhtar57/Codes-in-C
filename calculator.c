# include <stdio.h>

int main() {
    
    char op;
    int num1, num2; 
    float result;
    
    printf("Enter operator: +, -, *, /: ");
    scanf("%c", &op);

     if (op == '/' )  
    {  
        printf(" You selected: Division\n");  
    }  
    else if(op == '*')  
    {  
        printf(" You selected: Multiplication\n");  
     }  
       
    else if(op == '-')  
    {  
        printf(" You selected: Subtraction\n");  
     }  
        else if(op == '+')  
    {  
        printf(" You selected: Addition\n");  
     }     

    printf("Enter first operand: \n");
    scanf("%d", &num1);

    printf("Enter second operand: \n");
    scanf("%d", &num2);

    switch(op) {

    case '+':  
            result = num1 + num2;  
            printf (" Addition of %d and %d is: %.2f", num1, num2, result);  
            break;  
          
        case '-':  
            result = num1 - num2;
            printf (" Subtraction of %d and %d is: %.2f", num1, num2, result);  
            break;  
              
        case '*':  
            result = num1 * num2;  
            printf (" Multiplication of %d and %d is: %.2f", num1, num2, result);  
            break;            
          
        case '/':   
            result = num1 / num2;
            printf (" Division of %d and %d is: %.2f", num1, num2, result);  
            break;  
            
        default:
            printf (" Something is wrong!! Please check the options ");               
    } 

  return 0;
}
