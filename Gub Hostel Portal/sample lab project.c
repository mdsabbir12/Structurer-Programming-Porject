#include<stdio.h>

int i,j;
int main_exit;
struct {
    char name[60];
    long int ID_No;
    long int phone;
    float amount;
    int day,month,year;
    }add,fee;


void new_student()

{

    FILE *student;

    student=fopen("student record.text","a+");
    account_no:
    system("cls");
    printf("\n\n\t\t\t\xB2\xB2\xB2\ ADD STUDENT  \xB2\xB2\xB2\xB2");

    printf("\n\n\n\t\t Student ID number:");
    scanf("%ld",&add.ID_No);
    printf("\n\t\t Student name:");
    scanf("%s",&add.name);
    printf("\n\t\t Phone number: ");
    scanf("%ld",&add.phone);
    printf("\n\t\t Today's date(mm/dd/yyyy):");
    scanf("%d/%d/%d",&add.month,&add.day,&add.year);


        fprintf(student,"%ld    %s    %ld    %d/%d/%d \n",add.ID_No,add.name,add.phone,add.month,add.day,add.year);


    fclose(student);
    printf("\nAccount created successfully!");
    goinvalid:
    printf("\n\n\n\t\t press 1 and go to the main menu:");
    scanf("%d",&main_exit);
    system("cls");
    if (main_exit==1)
        menu();
    else
        {
            printf("\nInvalid!\a");
            goto goinvalid;
        }
}

void hostel_fee()

{

    FILE *student;

    student=fopen("student record.text","a+");
    account_no:
    system("cls");
    printf("\n\n\t\t\t\xB2\xB2\xB2  Hostel Pay  \xB2\xB2\xB2\xB2");

    printf("\n\n\n\t\t Student ID number:");
    scanf("%ld",&fee.ID_No);
    printf("\n\t\t Student name:");
    scanf("%s",&fee.name);
    printf("\n\t\t Amount:");
    scanf("%f",&fee.amount);
    printf("\n\t\t Today's date(mm/dd/yyyy):");
    scanf("%d/%d/%d",&fee.month,&fee.day,&fee.year);


        fprintf(student,"%ld    %s    %0.2f       %d/%d/%d  \n",fee.ID_No,fee.name,fee.amount,fee.month,fee.day,fee.year);


    fclose(student);
    printf("\n\t\t successfully paid!!");
    invalid:
    printf("\n\n\n\t\t press 1 and go to the main menu:");
    scanf("%d",&main_exit);
    system("cls");
    if (main_exit==1)
        menu();
    else
        {
            printf("\nInvalid!\a");
            goto invalid;
        }
}
/*void view_list()
{
    FILE *student;
    student=fopen("student record.text","r");
    int test=0;
    system("cls");
    printf("\nStudent ID     \tNAME\t\tPHONE or Amount\t\tDate\n");

    while(fscanf(student,"%ld    %s    %ld      %d/%d/%d  \n",&add.ID_No,&add.name,&add.phone,&add.month,&add.day,&add.year)!=feof(student))
       {
           printf("\n%ld     \t%s    \t%ld    \t\t%d/%d/%d \n",add.ID_No,add.name,add.phone,add.month,add.day,add.year);
           test++;
       }

    fclose(student);
    if (test==0)
        {   system("cls");
            printf("\nNO RECORDS!!\n");}

    toinvalid:
     printf("\n\nPress 1 and go to the main menu:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else
        {
            printf("\nInvalid!\a");
            goto toinvalid;
        }
}*/

void home()
{
    menu();
}

void deciplene()
{
    printf("\n\n\t\t\t\t\t \xB2\xB2\xB2  DISCIPLINE  \xB2\xB2\xB2");


    printf("\n\n\t\t 1.The student have to keep their university ID card always with them.");
    printf("\n\n\t\t 2.No outsider is allowed to enter into stay in the room of a resident ");
    printf("\n\n\t\t   except prior permission of the authority.");
    printf("\n\n\t\t 3.While leaving the room resident should ensure that the switches of");
    printf("\n\n\t\t   the lights and fans are off.");
    printf("\n\n\t\t 4.If any student loves listening to music, he has to use headphone so ");
    printf("\n\n\t\t   as not to disturb other students.");
    printf("\n\n\t\t 5.Timings for Cafeteria:");
    printf("\n\n\t\t   (a) Breakfast-7:00AM to 9:30AM ");
     printf("\n\n\t\t   (b) Lunch-12:30PM to 3:00PM ");
      printf("\n\n\t\t   (c) Dinner-7:30PM to 9:30PM ");
    printf("\n\n\t\t 6.No resident is allowed to be the absent to be absent from the hostel ");
    printf("\n\n\t\t   after 10:00PM to 6:00AM except with a prior permission.");
    privious:
     printf("\n\n\n\t\t press 1 and go to the main menu:");
    scanf("%d",&main_exit);
    system("cls");
    if (main_exit==1)
        menu();
    else
        {
            printf("\nInvalid!\a");
            goto privious;
        }
}


void food_menu()
{
    printf("\n\n\t\t\t\t\t \xB2\xB2\xB2  FOOD MENU  \xB2\xB2\xB2\n\n");


    printf("\n\tDay       \tBreakfast\t\tLunch\t\t\t\tDinner\n");

    printf("\n\tSatarday  \tRice+potatoes+Dal\tRice+Fish+Dal\t\t\tRice+Egg+Dal\n");
    printf("\n\tSunday    \tRice+vegetable+Dal\tRice+chicken+Dal\t\tRice+Egg+Dal\n");
    printf("\n\tMonday    \tkhechori+Egg\t\tRice+Fish+Dal\t\t\tRice+potatoes+Dal\n");
    printf("\n\tTuesday   \tRice+Egg+Dal\t\tRice+Chicken+Dal\t\tRice+Chicken+Dal\n");
    printf("\n\tWetnesday \tkhecori+Egg\t\tRice+Fish+Dal\t\t\tRice+Vegetable+Dal\n");
    printf("\n\tThusday   \tRice+Potatoes+Dal\tRice+Chicken+Dal\t\tRice+Egg+Dal\n");
    printf("\n\tFriday    \tRice+Vegetable+Dal\tPRice+Chicken+Dal\t\tRice+Vegetable+Dal\n");







    privious:
     printf("\n\n\n\t\t press 1 and go to the main menu:");
    scanf("%d",&main_exit);
    system("cls");
    if (main_exit==1)
        menu();
    else
        {
            printf("\nInvalid!\a");
            goto privious;
        }
}

void menu()
{
    int select;
    system("color 2");
    printf("\n\n\n\t\t\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6");
    printf("\n\t\t\xB6\xB6\xB6\xB6\xB6\xB6\xB2                                        \xB2\xB6\xB6\xB6\xB6\xB6\xB6");
    printf("\n\t\t\xB6\xB6\xB6\xB6\xB6\xB6\xB2  WELCOME TO GUB STUDENT HOSTEL PORTAL  \xB2\xB6\xB6\xB6\xB6\xB6\xB6");
    printf("\n\t\t\xB6\xB6\xB6\xB6\xB6\xB6\xB2                                        \xB2\xB6\xB6\xB6\xB6\xB6\xB6");
    printf("\n\t\t\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6\xB6");
    printf("\n\n\t\t\t\t \xB6\xB6\xB6\xB6  Main Menu  \xB6\xB6\xB6\xB6\n\n\t\t 1. Home\n\t\t 2. New Student\n\t\t 3. Food Menu\n\t\t 4. Hostel fee\n\t\t 5. Discipline");
    printf("\n\n\t\tEnter your choice 1,2,3,4 or 5: ");
    scanf("%d",&select);
    system("cls");
    switch(select)
    {
        case 1:home();
        break;
        case 2:new_student();
        break;
        case 3:food_menu();
        break;
        case 4:hostel_fee();
        break;
        case 5:deciplene();
        break;
        //case 6:view_list();
    }


}

void repassward()
{
    char  passward[10],demopass[]="Fakir25*$";
    int n,i,pass;
    printf("\n\t\tPlease login by Current Passward: ");
    scanf("%s",&passward);
    pass=strcmp(passward,demopass);
    if(pass==0)
    {

        printf("\n\t\tSuccessfully login !!");
        system("cls");
        menu();

    }
    else
    {
       printf("\n\t\tWorng Passward !!!");
       printf("\n\t\tPlease press 1 and Input current passward : ");
        scanf("%d",&n);
        if (n==1)
        {
            system("cls");
            repassward();
        }
        else
        {
            system("cls");
            repit();
        }
    }

}
void repit()
{
    int n;
    printf("\n\t\tPlease press 1: ");
    scanf("%d",&n);
    if (n==1)
    {
        system("cls");
        repassward();
    }
    else
    {
        printf("\n\t\tPlease press 1 and Input current passward : ");
        scanf("%d",&n);
        if (n==1)
        {
            system("cls");
            repassward();
        }
        else
        {
            system("cls");
            repit();
        }
    }
}


int main()
{
    char  passward[10],demopass[]="Fakir25*$";
    int n,i,pass;
    printf("\n\t\tPlease login by Current Passward: ");
    scanf("%s",&passward);
    pass=strcmp(passward,demopass);
    if(pass==0)
    {

        printf("\n\t\tLoading ");
        for(i=0; i<6; i++)
        {

            printf(".");
        }

        printf("\n\t\tSuccessfully login !!");
        system("cls");
        menu();

    }
    else
    {
        printf("\n\t\tWorng Passward !!!");
        printf("\n\t\tPlease press 1 and Input current passward : ");
        scanf("%d",&n);
        if (n==1)
        {
            system("cls");
            repassward();
        }
        else
        {
            system("cls");
            repit();
        }
    }

getch();
}

