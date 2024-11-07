#include <stdio.h>

int main() {
    float hoursWorked, hourlyWage;
    float grossPay, taxes, netPay;
    float regularPay, overtimePay;
    
    
    printf("Enter hours worked in a week: ");
    scanf("%f", &hoursWorked);
    
    printf("Enter hourly wage: ");
    scanf("%f", &hourlyWage);
    
    
    if(hoursWorked <= 40) {
       
        grossPay = hoursWorked * hourlyWage;
    } else {
        
        regularPay = 40 * hourlyWage;
        
        
        overtimePay = (hoursWorked - 40) * (hourlyWage * 1.5);
        
        grossPay = regularPay + overtimePay;
    }
    
    
    if(grossPay <= 600) {
        
        taxes = grossPay * 0.15;
    } else {
        
        taxes = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }
    
    
    netPay = grossPay - taxes;
    
    
    printf("\nPayroll Summary:\n");
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netPay);
    
    return 0;
}