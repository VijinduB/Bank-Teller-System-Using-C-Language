#include <stdio.h>
#include <conio.h>

char name[10];
int Pswrd, key;

void getlist();
void getkeyone();
void getkeytwo();
void getkeythree();
void getkeyfour();
void getkeyfive();
int main()
{
    printf("\t*************   Southern Bank    **************\t\n\n");


    printf("Enter user name    \t:");
    scanf("%s", &name);
    printf("Enter your password\t:");
    scanf("%d", &Pswrd);

    printf("\n\n%s",name);
    if(Pswrd==1996)
    {
    printf(" You are now log in.\n\n");
    getlist();
    for( ;; )
    {
    printf("\nEnter Key\t:");
    scanf("%d", &key);
    if(key==10)
    {
        printf("\t\tYou are now Log Out*\n\n\n\n*******************************************************");
        break;
    }
    if (key==01)
        getkeyone();

    if (key==02)
        getkeytwo();

    if (key==03)
        getkeythree();

    if (key==04)
        getkeyfour();

    if (key==05)
        getkeyfive();

    }
    }
    else
        printf("Invalid password\n\n");
    getch();
    return 0;
}


void getlist()
{
    printf("\n\t*****Teller System [Southern Bank]*****\n\n");
    printf("**************************\n**********************\n");
    printf("[01]=====Cash Deposit\n");
    printf("[02]=====Cash Withdrawal\n");
    printf("[03]=====Account Update\n");
    printf("[04]=====Accounts Opening\n");
    printf("[05]=====Bill Payments\n");
    printf("[10]=====Log out\n");
    printf("**********************\n**************************\n\n");

}

void getkeyone()
{
    int Accnum;
    float dep, bal, tot=0;
    printf("Enter Account number\t:");
    scanf("%d", &Accnum);
    printf("Enter Deposit amount\t:");
    scanf("%f", &dep);
    printf("Enter main balance of account\t:");
    scanf("%f", &bal);
    tot=bal+dep;
    printf("Account number:%d\nDeposited amount:%.2f\nMain balance:%.2f\n", Accnum,dep,tot);
}

void getkeytwo()
{
    int Accnum;
    float wd, bal, tot=0;
    printf("Enter Account number            \t:");
    scanf("%d", &Accnum);
    printf("Enter withdrawal amount         \t:");
    scanf("%f", &wd);
    printf("Enter current balance of account\t:");
    scanf("%f", &bal);
    if(wd<bal)
    {
    tot=bal-wd;
    printf("\n\nAccount number   :%d\nwithdrawal amount:%.2f\nMain balance     :%.2f\n", Accnum,wd,tot);
    }
    else
    {
        printf("\n\n*Your withdrawal amount greater than current balance please withdraw lower amount than current account balance*\n\n");
    }
}

void getkeythree()
{
    int Accnum;
    float bal, tot=0;
    printf("Enter Account number            \t:");
    scanf("%d", &Accnum);
    //hardcode amounts just for example for this project
    printf("\nYou have withdrawal 1500.00\n");
    printf("You have deposit    500000.00\n");
    printf("You have deposit    500.00\n");
    printf("You have withdrawal 50000.00\n");
    printf("You have deposit    1500.00\n");
    printf("You have deposit    4500.00\n");
    printf("You have deposit    550.00\n");
    printf("You have withdrawal 5500.00\n");
    printf("You have interest   100.45\n");
    printf("You have withdrawal 1500.00\n");
    printf("You have deposit    11500.00\n");
    printf("You have tax        45.20\n");
    printf("You have deposit    28000.00\n\n");
    printf("Enter balance of passbook\t:");
    scanf("%f", &bal);
    tot=bal-1500+500000+500-50000+1500+4500+550-5500+100.45-1500+11500-45.20+28000;
    printf("\nCurrent total balance %.2f rupees\n\n",tot);

}

void getkeyfour()
{
    int typ,atyp,tot=0;
    char name[20],fname[50],address[50],bday[8],age,Id[10],tel[10];
    float dep;
    printf("Which account do customer wants to open?\n");
    printf("\t[01]------Savings\n\t[02]------Fixed Deposit");
    printf("\nSelect account type :");
    scanf("%d", &typ);
    if(typ==01)
    {
    printf("Name with initials\t:");
    scanf("%s", &name);
    printf("\nPermanent Address:");
    scanf("%s", &address);
    printf("\nBirth day(DD/MM/YYYY):");
    scanf("%s", &bday);
    printf("\nAge greater than 18?(y/n)");
    scanf("\n%c", &age);
    if(age=='y')
    {
    printf("\n******products for customers");
    printf("\n\t[01]--+18Yes");
    printf("\n\t[02]--NormalAcc");
    printf("\n\t[03]--womensfortune");
    printf("\n\t[04]--olderpersons");
    printf("\nWhich product customer needs to open?");
    scanf("%d", &atyp);
    printf("\nNIC number:");
    scanf("%s", &Id);
    }
    else
    {
    printf("\nBirth registered number:");
    scanf("%s", &Id);
    }
    printf("\nContact number:");
    scanf("%s", &tel);

    printf("\n**Successfully Registered\n");
    printf("\nAccount Number\t:12345*****\n");
    printf("Name\t\t\t:%s\n",name);
    }
    if(typ==02)
    {
    printf("Name with initials\t:");
    scanf("%s", &name);
    printf("\nPermanent Address:");
    scanf("%s", &address);
    printf("\nBirth day(DD/MM/YYYY):");
    scanf("%s", &bday);
    printf("\nSelect time period for your deposit");
    printf("\n[01]--03 Months");
    printf("\n[02]--06 Months");
    printf("\n[03]--12 Months\n");
    printf("Selected product\t:");
    scanf("%d", &atyp);
    printf("\nContact number\t:");
    scanf("%s", &tel);
    printf("\nEnter deposit amount\t:");
    scanf("%f",&dep);
    switch(atyp)
    {
    case 01:
    {
        tot=dep+dep*(8/100);
    }
    case 02:
    {
        tot=dep+dep*10/100;
    }
    case 03:
    {
        tot=dep+dep*12/100;
    }
    }
    printf("\n\n**Successfully opened fixed deposit account\n\n");
    printf("\nAccount Number\t:22345*****\n");
    printf("Name\t\t\t:%s\n",name);
    printf("\nDeposited amount is %.2f rupees\n",dep);
    printf("After selected time period you will receive %d rupees.\n\n",tot);
    }
}

void getkeyfive()
{
    int typ;
    float cash,bill,bal;
    printf("Select type of bill:\n***************");
    printf("\n[01]====CEB");
    printf("\n[02]====MOBITEL");
    printf("\n[03]====DIALOG");
    printf("\n[04]====SLT\n***************\n");

    printf("\nEnter type of bill\t:");
    scanf("%d",&typ);

    if(typ==01||typ==02||typ==03||typ==04)
    {

    if(typ==01)
    {
        printf("\n**Welcome to CEB online bill payment**\n");
        printf("\nEnter cash given by customer\t:");
        scanf("%f",&cash);
        printf("\nEnter amount of bill\t:");
        scanf("%f",&bill);
        bal=cash-bill;
        printf("\nPayment have successfully completed**");
        printf("\nBalance\t:%.2f rupees.\n\n",bal);
    }
    if(typ==02)
    {
        printf("\n**Welcome to Mobitel online bill payment**\n");
        printf("\nEnter cash given by customer\t:");
        scanf("%f",&cash);
        printf("\nEnter amount of bill\t:");
        scanf("%f",&bill);
        bal=cash-bill;
        printf("\nPayment have successfully completed**");
        printf("\nBalance\t:%.2f rupees.\n\n",bal);

    }
    if(typ==03)
    {
        printf("\n**Welcome to Dialog online bill payment**\n");
        printf("\nEnter cash given by customer\t:");
        scanf("%f",&cash);
        printf("\nEnter amount of bill\t:");
        scanf("%f",&bill);
        bal=cash-bill;
        printf("\nPayment have successfully completed**");
        printf("\nBalance\t:%.2f rupees.\n\n",bal);
    }
    if(typ==04)
    {
        printf("\n**Welcome to Slt online bill payment**\n");
        printf("\nEnter cash given by customer\t:");
        scanf("%f",&cash);
        printf("\nEnter amount of bill\t:");
        scanf("%f",&bill);
        bal=cash-bill;
        printf("\nPayment have successfully completed**");
        printf("\nBalance\t:%.2f rupees.\n\n",bal);
    }
    }
    else
    {
    printf("sorry! invalid bill type.*\n\n\n");
    }
}
