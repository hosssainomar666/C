#include <stdio.h>

struct Employee {
    int eid;
    char ename[50];
    char designation[50];
    float salary;
};

int main() {
    int n, i;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    
    struct Employee emp[n];
    
    // Input details of employees
    for (i = 0; i < n; i++) {
        printf("Enter details of employee %d:\n", i+1);
        printf("Employee ID: ");
        scanf("%d", &emp[i].eid);
        printf("Name: ");
        scanf("%s", emp[i].ename);
        printf("Designation: ");
        scanf("%s", emp[i].designation);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
    
    // Print details of employees with salary above 5000
    printf("\nEmployees with salary above 5000:\n");
    for (i = 0; i < n; i++) {
        if (emp[i].salary > 5000) {
            printf("Employee ID: %d\n", emp[i].eid);
            printf("Name: %s\n", emp[i].ename);
            printf("Designation: %s\n", emp[i].designation);
            printf("Salary: %.2f\n", emp[i].salary);
            printf("\n");
        }
    }
    
    return 0;
}
