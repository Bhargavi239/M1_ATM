#include<stdio.h>
#include<stdbool.h>  
bool again = true;
int option;
int pin=2309,enteredpin;
float balance=5000;
int choose;
void mainMenu();
void checkBalance( float);
float moneyWithdraw(float);
float moneyDeposit(float );
void errorMessage();
void menuExit();
int main(){
  while(again){ 
    while(pin != enteredpin){//this loop for entered pin//
    printf("\nPlease enter you pin : ");
    scanf("%d",&enteredpin);
    if(enteredpin != pin){//if entered pin is not equal to your entered pin it showes Invalid pin//
    
      printf("Invalid pin!!!");//it displayes the invalid pin //
      printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
      }
    }
    mainMenu();
    scanf("%d",&option);
        switch (option) {
            case 1://In this case it showes the balance in your account//
            	system("CLS");
                checkBalance(balance);
                break;
            case 2://In this case it showes the money deposited  in your account//
            	system("CLS");
                balance = moneyDeposit(balance);
                break;
            case 3://In this case it showes the how much money withdrawed from your account//
            	system("CLS");
                balance = moneyWithdraw(balance);
                break;
            
            case 4://In this case it exits from the function main menu//
            	system("CLS");
                menuExit();
                return 0;
                
            default:
                errorMessage();
                break;
        }
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to do another transaction:\n");//here in this line it askes the whether you want another transtion or not//
        printf("< 1 > Yes\n");//when you enter 1 it displayes Yes//
        printf("< 2 > No\n");//when you enter 2 it displayes No//
        scanf("%d", &choose);
        
        system("CLS");
        
        
        
        if (choose == 2) {//This condition for when ever you enter 2 the loop exit //
            again = false;
            menuExit();
            
        }
       
}
    return 0;
}
void mainMenu() {//This function for selecting your options//
    
    printf("*******Hello!******\n");//It displayes Hello//
    printf("***Welcome to ATM Banking****\n\n");//It displayes Welcome to ATM Banking//
    printf("*Please choose one of the options below*\n\n");//It displayes choose one of the options below//
    printf("< 1 >  Check Balance\n");//If you enter 1 it displayes check balance//
    printf("< 2 >  Deposit\n");//If you enter 2 it displayes Deposit//
    printf("< 3 >  Withdraw\n");//If you enter 3 it displayes withdraw//
    printf("< 4 >  Exit\n\n");//If you enter 4 it displayes exit//
    
}
void checkBalance(float balance) {//this function for float values in check balance//
    printf("You Choose to See your Balance\n");
    printf("\n\n****Your Available Balance is:   Rs%.2f\n\n", balance);
    
}

float moneyDeposit(float balance) {//this function for float values in deposit//
    float deposit;
    printf("You choose to Deposit a money\n");
    printf("Your Balance is: %.2f\n\n", balance);
    printf("**Enter your amount to Deposit\n");
    scanf("%f", &deposit);
    
    
    balance += deposit;//It will add your deposit money to your balance//
    
    printf("\n****Your New Balance is:  Rs%.2f\n\n", balance);//It will display your new balance//
    return balance;//It will return your new balance//
    
}

float moneyWithdraw(float balance) {//this function for float values in moneywithdraw//
    float withdraw;
    bool back = true;//this condition for if withdraw is more than balance //
    printf("You choose to Withdraw a money\n");//It displayes the withdraw a money//
    printf("Your Balance is: %.2f\n\n", balance);//It displayes the your balance//
    
    while (back) {//This loop while go back because your withdraw is more than your balance//
    printf("Enter your amount to withdraw:\n");//It displayes enter your money to withdraw for another time//
    scanf("%f", &withdraw);
    
    
    if (withdraw < balance) {//this condition for if withdraw is less than balance //
        back = false;
        balance -= withdraw;//It remove your withdrawed amount from your balance//
        printf("\nYour withdrawing money is:  Rs%.2f\n", withdraw);//It displayes your withdrawed amount//
        printf("**Your New Balance is:   Rs%.2f\n\n", balance);//It displayes your new balance//
        
    }
    
        else  {//this condition if the above condition failes//
        
        printf("+++You don't have enough money+++\n");//It displaces you dont have enough money in your account//
        printf("Please contact to your Bank Customer Services\n");//It dispalyes cotact to your bank customer//
        printf("**Your Balance is:   Rs%.2f\n\n", balance);//after that is displayes your balance//
    
    }
    }
    return balance; //It will return the balance//  
}

void menuExit() {//The function will exit//
    printf("--------------Take your receipt!!!------------------\n");//It displayes take your receipt//
    printf("-----Thank you for using ATM Banking Machine!!!-----\n");//It displayes Thank you for using ATM banking Machine //
  }
  void errorMessage() {}
