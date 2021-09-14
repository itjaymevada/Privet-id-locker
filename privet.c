// this file is made for those who are in school or collage and they loss their passwords. after using this file thay can remember any time. 
#include <stdio.h>
#include <conio.h>
int main()
{
    long int i;
    int p;
    int end;
    printf("\n--------------------------------");
    printf("\n*****--PRIVET-ID-LOCKER--****");
    printf("\n-----****--WELCOME--****-----");
    printf("\n--------------------------------");
    printf("\nEnter your code:");
    scanf("%ld", &i);
    system("cls");
    // Write your file's password hare in if statement
    // starting password is 0001
    if (i == 0001)
    {
        // if you don't want any of this option then comment it
        printf("\n--------------------------------");
        printf("\n1. email id ");
        printf("\n2. second eamil id");
        printf("\n3. insta id  ");
        printf("\n4. second insta id ");
        printf("\n5. snap  id ");
        printf("\n6. Git hub id  ");
        printf("\n7. Teams id ");
        printf("\n8. GTU student management id / GTU student portal id");
        printf("\n9. GTU 100 point id");
        printf("\n10. Digital Gujarat id");
        printf("\n11. Bank AC NO.");
        printf("\n12. Design Engineering Pro. Id\n");
        printf("\n--------------------------------");
        printf("\nEnter the choice that you want to know:\n");
        scanf("%d", &p);
        system("cls");
        switch (p)
        {
        // write your ids and passwords in printf function as per the upper options
        case 1:
        printf("\n--------------------------------");
            printf("\nemail id:");
            printf("\npassword:\n");
            printf("\n--------------------------------");
            break;
        case 2:
        printf("\n--------------------------------");
            printf("\nsecond email id :");
            printf("\npassword:\n");
            printf("\n--------------------------------");
            break;
        case 3:
        printf("\n--------------------------------");
            printf("\n insta id:");
            printf("\npassword: \n");
            printf("\n--------------------------------");
            break;
        case 4:
        printf("\n--------------------------------");
            printf("\n second insta id:");
            printf("\npassword:\n");
            printf("\n--------------------------------");
            break;
        case 5:
        printf("\n--------------------------------");
            printf("\n sanp id:");
            printf("\npassword:\n");
            printf("\n--------------------------------");
            break;
        case 6:
        printf("\n--------------------------------");
            printf("\n GIT Hub id:");
            printf("\npassword:\n");
            printf("\n\t--------------------------------");
            break;
        case 7:
        printf("\n\t--------------------------------");
            printf("\nTeams id:");
            printf("\npassword:\n");
            printf("\n--------------------------------");
            break;
        case 8:
        printf("\n--------------------------------");
            printf("\n GTU student management id:");
            printf("\npassword:\n");
            printf("\nGTU student portal: \n");
            printf("\n id:");
            printf("password:/n");
            printf("\n--------------------------------");
            break;
        case 9:
        printf("\n--------------------------------");
            printf("\n GTU 100 point id: ");
            printf("\npassword:\n");
            printf("\n--------------------------------");
            break;
        case 10:
        printf("\n--------------------------------");
            printf("\nDigital gujarat  id:");
            printf("\npassword:\n");
            printf("\n--------------------------------");
            break;
        case 11:
        printf("\n--------------------------------");
            printf("\n Bank AC no: ");
            printf("\n ATM code:");
            printf("\n IFSC:");
            printf("\n M-connect code:");
            printf("\n M-pin: \n");
            printf("\nG-pay: ");
            printf("\n password:");
            printf("\ngpay password:\n");
            printf("\n--------------------------------");
            break;
        case 12:
        printf("\n\t--------------------------------");
            printf("\n Design Engineering sub id :");
            printf("\n password:\n");
            printf("\n--------------------------------");
            break;

        default:
            printf("\nYou choose wrong option!!");
            break;
        }
        // Make sure that no one take your code file other wise he or she will know your data
    }
    else
    {
        printf("\nWrong code entered!!\n");
        printf("\nYou are unable to open this!!\n");
    }
    printf("\nPlease Enter any number to Exit:");
    scanf("%d", &end);
    system("cls");
    printf("\n\n You Entered %d\n\n Thank You!!\n", end);
    return 0;
}