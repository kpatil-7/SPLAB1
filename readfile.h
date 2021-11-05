#define Header
#define MAXNAME 64

FILE *fptr;
char *filename;
int num, emp_id, lname_result, sal, found_id, found_ln;
char ch;
char emplname[MAXNAME];

struct employee
{
	int id;
	char first_name[MAXNAME];
	char last_name[MAXNAME];
	int salary;
} emp, emp1, emp2[1024];

void count_employees(char *);
void menu(char *);
void display_database(char *);
void id_finder(char *, int);
void lastname_finder(char *, char *);
void add_employee(char*);
int largest_id(char *);
void remove_employee(char *, int);
void matching_name(char *, char *);
