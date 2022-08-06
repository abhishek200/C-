/* Student name: _________________ 
 * Student number: _______________
 * Class: 1225_91693
 */
 
typedef struct student{
  char *name;  /* student name */
  char *number; /* student number */
  struct student *previous; /*pointer to previous node */
  struct student *next; /* pointer to next node */
}Student;

void print (Student*);

void print_reverse (Student *);

Student * add (Student *, char *, char *);

Student * delete (Student *, char *);

