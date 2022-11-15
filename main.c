#include<stdio.h>
#include<stdlib.h>
int main() {
    int  a, b, c, d, e, f, g, h, i, j, k;
    char choice;
    float value;

    printf(" a. inch to centimetre\n b. feet to centimetre\n c. feet to meter \n d. yard to meter\n e. mile to kilometre\n f. ounce to gram\n g. pound to kilogram\n h. ton to kilogram\n i. pint to liter\n j. quart to liter\n k. gallon to liter\n");
    printf("\nPlease enter choice conversion (a-k): ");
    scanf("%c", &choice);

    switch (choice) {
        case 'a':
            printf("Enter Value in Inch\n");
            scanf("%d",&a);
            printf("Your value in Centimetres is %f\n",(a*2.54));
            break;
        case'b':
            printf("Enter Value in Feet\n");
            scanf("%d",&b);
            printf("Your value in Centimetres is %f\n",(b*30.48));
            break;
        case'c':
            printf("Enter Value in Feet\n");
            scanf("%d",&c);
            printf("Your value in Meters is %f\n",(c*0.3048));
            break;
        case'd':
            printf("Enter Value in Yard\n");
            scanf("%d",&d);
            printf("Your value in Meters is %f\n",(d*0.9144));
            break;
        case'e':
            printf("Enter Value in Miles\n");
            scanf("%d",&e);
            printf("Your value in Kilometres is %f\n",(e*0.9144));
            break;
        case'f':
            printf("Enter Value in Ounces\n");
            scanf("%d",&f);
            printf("Your value in Grams is %f\n",(f*28.349523));
            break;
        case'g':
            printf("Enter Value in Pounds\n");
            scanf("%d",&g);
            printf("Your value in Kilograms is %f\n",(g*0.453592));
            break;
        case'h':
            printf("Enter Value in Tons\n");
            scanf("%d",&h);
            printf("Your value in Kilograms is %f\n",(h*907.18474));
            break;
        case'i':
            printf("Enter Value in Pints\n");
            scanf("%d",&i);
            printf("Your value in Litters is %f\n",(i*0.473163));
            break;
        case'j':
            printf("Enter Value in Quarts\n");
            scanf("%d",&j);
            printf("Your value in Litters is %f\n",(j*0.946326));
            break;
        case'k':
            printf("Enter Value in Gallons\n");
            scanf("%d",&k);
            printf("Your value in Litters is %f\n",(k*3.785306));
            break;
        default:
            printf("Invalid value");
    }
}