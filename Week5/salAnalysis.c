#include <stdio.h>

int main() {

    //declare variables
    float salary;
    float totalSalary = 0;
    float highestSalary = 0;
    float lowestSalary = 0;
    float averageSalary;

    for(int i = 1; i <= 50; i++) {

        //capture salary of each employee
        printf("Enter salary for employee %d: ", i);
        scanf("%f", &salary);

        //calculate total salary
        totalSalary += salary;

        //determine highest and lowest salary
        if(i == 1) {
            highestSalary = salary;
            lowestSalary = salary;
        } else {
            if(salary > highestSalary) {
                highestSalary = salary;
            }
            if(salary < lowestSalary) {
                lowestSalary = salary;
            }
        }
    }

     //calculate average salary
        averageSalary = totalSalary / 50;

        //display results
        printf("\n--- Salary Report ---\n");
        printf("Total Salary: %.2lf\n", totalSalary);
        printf("Highest Salary: %.2lf\n", highestSalary);
        printf("Lowest Salary: %.2lf\n", lowestSalary);
        printf("Average Salary: %.2lf\n", averageSalary);

        return 0;

    }