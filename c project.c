


#include<stdio.h>
int ch;
struct medecine
{

 char MedName [20];
 int  medprice;

}med[5];
int c=0;

struct Customer
{
 char Name [20];
 char medname [20];
 int  Price;
 int  medno;
}cust[100];
int index=0;


struct Date
{
 int day;
 int month;
 int year;
}d[10];


void medecinerecords()
{

    FILE *P;
    P=fopen("pharm.txt","a");

    if (P==NULL)
    {
        printf("error");
    }

    else
    {
        printf("\t\t\t\t\t\tMEDECINES AVAILABLE\n\n");
        printf("\t\t\t\t\t\t*****************\n");

        printf("Enter the medecines we have in the stock:\n");
        scanf("%s",&med[c].MedName);
        printf("Enter the Medecine price:\n");
        scanf("%d",&med[c].medprice);

        fprintf(P,"\n%s\t%d\n",med[c].MedName,med[c].medprice);
        fclose(P);

    }
        printf("\nRECORDING DONE SUCCESSFULLY\n");
}

        void medecineview()
   {


       FILE *k;
     k=fopen("pharm.txt","r");

     int i;


{

  printf("\n Medecine_Name\t Medecine_price\n Date_Recorded\n===========\t   \n===========\t   ============\n");

 do{
       fscanf(k,"\n%s\t\t\t%d\n",&med[c].MedName,&med[c].medprice);
       printf("\n%s\t\t\t%d\n",med[c].MedName,med[c].medprice);
  }
        while(!feof(k));
}

   }

 void medecinemain()
 {

    do
    {

        printf("\n1.>>> Medecine_Record \n2.>>> Medecine_Display \n3.>>> Display client Purchase  \n4.>>> Journal   \n5.>>> Search\n   \n6.>>> Exist\n   ");
        printf("Enter your choice: ");

        scanf("%d",&ch);
        	system("cls");
        switch(ch)
        {

        case 1:
           medecinerecords();
            break;
        case 2:
              medecineview();
            break;
        case 3:
     customerview();
     break;
        case 4:
         journal();
            break;
            case 5:
     	 main();
            break;

        default:
            printf("ENTRY IS INCORRECT!! PLEASE TRY AGAIN!!\n");
        }
    }
    while( ch != 0);
 }

 void pass()
 {
    int pass;
    printf("Enter the password: ");
    scanf("%d",&pass);

    if(pass==000)
    {
          printf("\n\t\tWELCOME ADMIN TO MEDECINE SYSTEM\n");
          printf("\n\t\t=========\n");
          medecinemain();

    }
    else
    {
        printf("incorrect password! please try again");
        main();

     }

 }

 void pass2()
 {
    int pass;
    printf("Enter the password: ");
    scanf("%d",&pass);

    if(pass==000)
    {
          printf("\n\t\tWELCOME SELLER TO MEDECINE SYSTEM\n");
          printf("\n\t\t=========\n");
          customermain();

    }
    else
    {
        printf("incorrect password! please try again");
        main();

     }

 }


void customerrecords()
{

     FILE *L;
    L=fopen("customer.txt","a");

    if (L==NULL)
    {
        printf("error");
    }

    else
    {

      printf("Enter the date: (Day/Month/year): \n");
      scanf("%d%d%d", &d[0].day, &d[1].month, &d[2].year);

      printf("Enter your Name:\n");
      scanf("%s",&cust[index].Name);

      printf("Enter your Name:");
      scanf("%s",&cust[index].Name);

      printf("Enter medecine Name:");
      scanf("%s",&cust[index].medname);

      printf("Enter medecine price:");
      scanf("%d",&cust[index].Price);

      printf("Enter medecine number:");
      scanf("%d",&cust[index].medno);

     fprintf(L,"\n\t%s\t%s\t%d\t%d\n",cust[index].Name,cust[index].medname,cust[index].Price,cust[index].medno);



     fclose(L);
    }
    printf("\n\n");
     printf("\nRECORD DONE SUCCESSFULLY\n");
}


void customerview()

{
     FILE *M;
 M=fopen("customer.txt","r");

 int i;


{
    printf("\t\t\t\t\t\tMEDECINE PLACE\n");
    printf("\t\t\t\t\t\t................\n");



  printf("\n \t\t\t\t\t\t\t\t\tDate:%d/%d/%d",d[0].day,d[1].month, d[2].year);

  printf("\n CUSTOMER_NAME\t MEDECINE_NAME\t MEDECINE_NUMB\t MEDECINE_PRICE\n");
  printf("  \n==========\t============\t==========\t=============\n");


 do{
            fscanf(M,"\n %s\t\t%s\t\t\t%d\t\t%d\n",cust[index].Name,&cust[index].medname,&cust[index].Price,&cust[index].medno);
            printf("\n %s\t\t%s\t\t\t%d\t\t%d\n",cust[index].Name,&cust[index].medname,&cust[index].Price,&cust[index].medno);
  }
       while(!feof(M));
}

}
void journal()
{
    char journal[400];
    FILE *L;
      L=fopen("customer.txt","w");
    while (!feof(L))
    {
        fgets(journal,355, L);
        puts(journal);
    }
    fclose(L);
}


void customermain()

{

    do
    {
        int ch;
        printf("\t WELCOME TO Medecine_SHOP\n");
        printf("\t***********************\n");

        printf("\n1.Enter Your Purchase \n2. Display your purchase \n3. Display Available Medecines\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        	system("cls");

        switch(ch)
        {


        case 1:
           customerrecords();
            break;
        case 2:
           customerview();
            break;

        case 3:
           medecineview();
        break;
        case 4:
        	main();
            break;

        default:
            printf("WRONG ENTRY! PLEASE TRY AGAIN!!");
        }
    }
    while( ch != 0);


}

int main()
 {
     do
    {
    printf("\n\t\t\tWELCOME TO MEDICAL SHOP \n");
    printf("\n\t\t---------------------------\n");
    printf("Choose according to your category\n\n");
	printf("1. PHARMACIST\n2. SELLER\n\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    	system("cls");
        switch(ch)
        {
        case 1:
            pass();
            break;
        case 2:
            pass2();
            break;
        default:
            printf("INVALID INPUT! PLEASE TRY AGAIN!!");

        }
    }
    while(ch != 0);
 }
