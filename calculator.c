#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int divide(int x, int y) {
    if (y == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return x / y;
}

int exponent(int x, int y) {
    return (int)pow(x, y);  // This line adds the exponent operator (^)
}
char* decToHex(int dec) {
    char *hex = (char *)malloc(20 * sizeof(char));
    sprintf(hex, "%X", dec);
    return hex;
}


int hexToDec(const char *hex) {
    return (int)strtol(hex, NULL, 16);
}




int main() {
    int choice,x,y;
    printf("1 - Addition \n  2 - Subtraction \n 3 - Multiplication \n 4 -Division \n 5 - Exponent\n");
    printf("Enter the your choice:");
    scanf("%d",&choice);
    printf("Enter the two numbers:");
    scanf("%d %d ",&x,&y);
    switch (choice){
    	case 1:
    		printf("%d",(add(x,y));
    		break;
    	case 2:
    		printf("%d",(subtract(x,y)));
    		break;
    	case 3:
    		printf("%d",(multiply(x,y)));
    		break;
    	case 4:
    		printf("%d",(divide(x,y)));
    		break;
    	case 5:
    		printf("%d",(exponent(x,y)));
    		break;
        case 6:
            int decimalNumber;
    		printf("Enter a decimal number: ");
    		scanf("%d", &decimalNumber);
    		char *hexadecimal = decToHex(decimalNumber);
    		printf("Decimal: %d\n", decimalNumber);
    		printf("Hexadecimal: %s\n", hexadecimal);
    		free(hexadecimal);
        case 7:
            char hexadecimalNumber[20];
            printf("Enter a hexadecimal number (without '0x' prefix): ");
            scanf("%s", hexadecimalNumber);
            int decimal = hexToDec(hexadecimalNumber);
            printf("Hexadecimal: %s\n", hexadecimalNumber);
            printf("Decimal: %d\n", decimal);
    	default:
    		printf("Invalid number!!!");
    		
    }
    return 0;
}

