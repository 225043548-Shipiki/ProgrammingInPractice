#include <stdio.h>

int main() {
    float basicSalary;
    float housingAllowance;
    float transportAllowance;
    float tax;  
    float grossSalary;
    float netSalary;

    printf("Enter basic salary: %.2f\n");
    scanf("%f", &basicSalary);

    printf("Enter housing allowance: %.2f\n");
    scanf("%f", &housingAllowance);

    printf("Enter transport allowance: %.2f\n");
    scanf("%f", &transportAllowance);

    tax = 0.15;

    grossSalary = basicSalary + housingAllowance + transportAllowance;
    netSalary = grossSalary - (grossSalary * tax);

    printf("Gross Salary: %.2f\n", grossSalary);
    printf("Net Salary: %.2f\n", netSalary);

    return 0;
}