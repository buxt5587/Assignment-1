#include <iostream>
#include <string>

typedef struct Student {
    int id;
    char *f_name;
    char *l_name;
    int n_assignments;
    double *grades;
} Student;

void CalculateStudentAverage(void *object, double *avg);

int main(int argc, char **argv)
{
    return 0;
}

void CalculateStudentAverage(void *object, double *avg)
{

}
