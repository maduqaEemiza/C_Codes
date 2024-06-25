#include <stdio.h>

int kmm()
{
    float input;
    int num;
    printf("1.Km      <->  Miles\n");
    printf("2.Miles      <->  Km\n");

    printf("Enter the numeber against the choices:\n");
    scanf("%d", &num);
    if (num == 1)
    {

        printf("Enter in Km:\t");
        scanf("%f", &input);
        printf("Value in Miles is :\t%.3f", input / 1.6);
    }
    else
    {
        printf("Enter in Miles:\t");
        scanf("%f", &input);
        printf("Value in Km is :\t%.3f", input * 1.6);
    }
}
int inf()
{
    float input;
    int num;
    printf("1.Inches  <->  Foot\n");
    printf("2.Foot  <->  Inches\n");

    printf("Enter the numeber against the choices:\n");
    scanf("%d", &num);
    if (num == 1)
    {

        printf("Enter in Inches:\t");
        scanf("%f", &input);
        printf("Value in Feet is :\t%.3f", input / 12);
    }
    else
    {
        printf("Enter in Feet:\t");
        scanf("%f", &input);
        printf("Value in Inches is :\t%.3f", input * 12);
    }
}
int cmin()
{
    float input;
    int num;
    printf("1.cm      <->  Inches\n");
    printf("2.Inches      <->  cm\n");

    printf("Enter the numeber against the choices:\n");
    scanf("%d", &num);
    if (num == 1)
    {

        printf("Enter in cm:\t");
        scanf("%f", &input);
        printf("Value in Inches is :\t%.3f", input / 2.54);
    }
    else
    {
        printf("Enter in Inches:\t");
        scanf("%f", &input);
        printf("Value in cm is :\t%.3f", input * 2.54);
    }
}
int pkg()
{
    float input;
    int num;
    printf("1.Pound   <->  Kg\n");
    printf("2.Kg      <->  Pound\n");

    printf("Enter the numeber against the choices:\n");
    scanf("%d", &num);
    if (num == 1)
    {

        printf("Enter in Pound:\t");
        scanf("%f", &input);
        printf("Value in Kg is :\t%.3f", input * .454);
    }
    else
    {
        printf("Enter in Kg:\t");
        scanf("%f", &input);
        printf("Value in Miles is :\t%.3f", input / .454);
    }
}
int inm()
{
    float input;
    int num;
    printf("1.Inches      <->  Metres\n");
    printf("2.Metres      <->  Inches\n");

    printf("Enter the numeber against the choices:\n");
    scanf("%d", &num);
    if (num == 1)
    {

        printf("Enter in Inches:\t");
        scanf("%f", &input);
        printf("Value in Metres is :\t%.4f", input * 0.0254);
    }
    else
    {
        printf("Enter in Miles:\t");
        scanf("%f", &input);
        printf("Value in Km is :\t%.4f", input / 0.0254);
    }
}

int main()
{
    int choice;
    printf("Welcome to Unit Converter.Here are your choices:\n");
    int i = 0;
    do
    {
        
        
        if(i != 0)
        {
            printf("\n\nTry Converting More....\n\n");
        }

        printf("\n\n");
        printf("1.Km      <->  Miles\n");
        printf("2.Inches  <->  Foot\n");
        printf("3.cm      <->  Inches\n");
        printf("4.Pound   <->  Kg\n");
        printf("5.Inches  <->  Metres\n");
        printf("Enter \"0\" to Quit.\n");
        printf("Enter the number against the choices:\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            kmm();
        }
        else if (choice == 2)
        {
            inf();
        }
        else if (choice == 3)
        {
            cmin();
        }
        else if (choice == 4)
        {
            pkg();
        }
        else if (choice == 5)
        {
            inm();
        }
        i++;
    } while (choice != 0);

    printf("\n\nThank you for using the converter!!");
    return 0;
}