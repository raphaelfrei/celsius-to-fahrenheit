//Created by Raphael Frei - 2021
#include <stdio.h>

void main(){

    int temp = 0;

    system("cls");
    printf("Created by Raphael Frei - 2021\n");


    printf("Insert the Temperature:\n");
    scanf("%d", &temp);

    Choose(temp);

}

void Choose(int temp){
    
    int choice = 0;

    printf("-----------\n1 to convert to Celsius.\n2 to convert to Fahrenheit.\n");
    scanf("%d", &choice);

    if(choice == 1){
        ToCelsius(temp);

    }else if(choice == 2){
        ToFahrenheit(temp);

    }else{
        printf("Invalid %d choice, returning...\n", choice);
        system("pause");

        main();
    }
}

void ToFahrenheit(int temp){
    system("cls");
    printf("Created by Raphael Frei - 2021\n");

    int fahr = ((160 + (9 * temp)) / 5), choice = 0;

    printf("%d Celsius is %d Farenheit\n", temp, fahr);

    printf("-----------\nDo you want to convert another temperature? \n(1 for YES, anything else for NO)\n");
    scanf("%d", &choice);

    if(choice == 1){
        main();

    }else{

    }
}

void ToCelsius(int temp){
    system("cls");
    printf("Created by Raphael Frei - 2021\n");

    int cels = (((5 * temp) - 160) / 9), choice = 0;

    printf("%d Farenheit is %d Celsius\n", temp, cels);

    printf("-----------\nDo you want to convert another temperature? \n(1 for YES, anything else for NO)\n");
    scanf("%d", &choice);

    if(choice == 1){
        main();

    }else{

    }
}