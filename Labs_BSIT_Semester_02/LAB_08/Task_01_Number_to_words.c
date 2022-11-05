#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void inWords(int digit);
void tenPlace(int digit);
void tenToTwenty(int num);
void numberToWords(num);
int main()
{
    int num = 0;
    do
    {
        printf("Enter any number upto 5 digit : ");
        scanf("%d", &num);
        if (num > 99999)
            printf("Invalid Input ! ");
    } while (num > 99999);
    printf("%d  =  ", num);
    numberToWords(num);
    printf("only.");
    return 0;
}
void numberToWords(num)
{
    int flagSign = 0, temp = 0,digitTemp = 0;
    int digit[6];
    if (num < 0)
    {
        num = num * -1;
        printf("Negative ");
    }
    temp = num;
    for (int i = 0; i < 6 && temp != 0; i++)
    {
        digitTemp = temp % 10;
        digit[i] = digitTemp;
        temp = temp / 10;
        if (temp == 0)
            digit[i + 1] = 0;
    }

    if (num == 0)
    {
        printf("Zero");
    }
    else if (num < 10)
    {
        inWords(num);
    }
    else if (num > 10 && num < 20)
    {
        tenToTwenty(num);
    }
    else if (num < 100)
    {
        tenPlace(digit[1]);
        inWords(digit[0]);
    }
    else if (num < 1000)
    {
        if (digit[1] == 1)
        {
            inWords(digit[2]);
            if (digit[2] != 0)
                printf("Hundrad ");
            if (digit[1] + digit[0] != 0)
                printf("and ");
            tenToTwenty(digit[0]+10);
        }
        else
        {
            inWords(digit[2]);
            if (digit[2] != 0)
                printf("Hundard ");
            if (digit[1] + digit[0] != 0)
                printf("and ");
            tenPlace(digit[1]);
            inWords(digit[0]);
        }
    }
    else
    {
        if (digit[4] == 0)
            inWords(digit[3]);
        else if (digit[3] == 0)
            tenPlace(digit[4]);
        else if (digit[4] == 1)
            tenToTwenty(digit[4] * 10 + digit[3]);
        else
        {
            tenPlace(digit[4]);
            inWords(digit[3]);
        }
        printf("Thousand ");
        if (digit[1] == 1)
        {
            inWords(digit[2]);
            if (digit[2] != 0)
                printf("Hundrad ");
            if (digit[1] + digit[0] != 0)
                printf("and ");
            tenToTwenty(digit[0] + 10);
        }
        else
        {
            inWords(digit[2]);
            if (digit[2] != 0)
                printf("Hundard ");
            if (digit[1] + digit[0] != 0)
                printf("and ");
            tenPlace(digit[1]);
            inWords(digit[0]);
        }
    }
}
void inWords(int digit)
{
    switch(digit)
    {
    case 1:
        printf("One ");
        break;
    case 2:
        printf("Two ");
        break;
    case 3:
        printf("Three ");
        break;
    case 4:
        printf("Four ");
        break;
    case 5:
        printf("Five ");
        break;
    case 6:
        printf("Six ");
        break;
    case 7:
        printf("Seven ");
        break;
    case 8:
        printf("Eight ");
        break;
    case 9:
        printf("Nine ");
        break;
    default:
        return;
    }
}
void tenPlace(int digit)
{
    switch (digit)
    {
    case 1:
        printf("Ten ");
        break;
    case 2:
        printf("Twenty ");
        break;
    case 3:
        printf("Thirty ");
        break;
    case 4:
        printf("Forty ");
        break;
    case 5:
        printf("Fifty ");
        break;
    case 6:
        printf("Sixty ");
        break;
    case 7:
        printf("Seventy ");
        break;
    case 8:
        printf("Eighty ");
        break;
    case 9:
        printf("Ninety ");
        break;
    default:
        return;
    }
}
void tenToTwenty(int num)
{
    switch (num)
    {
    case 11:
        printf("Eleven ");
        break;
    case 12:
        printf("Twelve ");
        break;
    case 13:
        printf("Thirteen ");
        break;
    case 14:
        printf("Fourteen ");
        break;
    case 15:
        printf("Fifteen ");
        break;
    case 16:
        printf("Sixteen ");
        break;
    case 17:
        printf("Seventeen ");
        break;
    case 18:
        printf("Eighteen ");
        break;
    case 19:
        printf("Nineteen ");
        break;
    default:
        return;
    }
}