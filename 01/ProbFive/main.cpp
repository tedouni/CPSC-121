//WEEK ONE EX FIVE


#include <iostream>
using namespace std;
#include "cmath"
#include "iomanip"

int main(void)
{
    double loanAmount;
    int numberOfPayments;
    double monthlyPayment;
    double interestPaid;
    double annualInterestRate;
    double monthlyInterestRate;
    double amountPaidBack;
    
    //input
    cout<<"Enter the amount of the loan:";
    cin>>loanAmount;
    cout<<"Enter the number of payments:";
    cin>>numberOfPayments;
    cout<<"Enter the annual interest rate (decimal):";
    cin>>annualInterestRate;
    
    //calculations
    
    monthlyInterestRate=annualInterestRate/12;
    
    monthlyPayment=  ((monthlyInterestRate*pow(1+monthlyInterestRate, numberOfPayments))*loanAmount)
                    /(pow(monthlyInterestRate+1, numberOfPayments)-1);
    
    amountPaidBack=monthlyPayment*numberOfPayments;
    
    interestPaid=amountPaidBack-loanAmount;
    
    //outputs
    cout<<fixed<<setprecision(2);
    cout<<"Loan Amount:";
    cout<<setw(10)<<"$ "<<loanAmount<<endl;
    cout<<"Monthly Interest Rate:";
    cout<<fixed<<setprecision(0)<<setw(7)<<monthlyInterestRate*100<<"%"<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Number of Payments:";
    cout<<setw(11)<<numberOfPayments<<endl;
    cout<<"Monthly Payments:";
    cout<<setw(7)<<"$ "<<monthlyPayment<<endl;
    cout<<"Amount Paid Back:";
    cout<<setw(5)<<"$ "<<amountPaidBack<<endl;
    cout<<"Interest Paid:";
    cout<<setw(9)<<"$ "<<interestPaid<<endl;
    
    return 0;
}

