//Salary calculator

#include <stdio.h>

int main() {
    int id;
    float work_hr, salary_per_hr, employee_slry;

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%d", &id);
    printf("Input the working hrs: ");
    scanf("%f", &work_hr);
    printf("Salary amount/hr: ");
    scanf("%f", &salary_per_hr);

    employee_slry = work_hr * salary_per_hr;

    printf("Employees ID = %d\n", id);
    printf("Salary = U$: %.2f\n", employee_slry);

    return 0;
}