void cfunc1();
void cfunc1(void);
float cfunc2();
float cfunc2(long a, int b);

typedef double (^double_bin_op_block)(double, double);
double_bin_op_block cfunc3(double (^)(double, double));

float cfunc4();

void exit(int);

double pow(double x, double y);

int puts(const char *);

typedef struct {
  int inode;
} FILE;

FILE *fopen(const char *, const char *);

inline int createSomething(void);

int renamed(int) __asm("_something_else");

void param_pointer(int *p);
void param_const_pointer(const int *p);

void param_void_pointer(void *p);
void param_const_void_pointer(const void *p);

void decay_param_array(int p[]);
void decay_param_const_array(const int p[]);

// FIXME: These two should work some day, too.  Right now we don't import
// function types.
void decay_param_func(void g(int));
void decay_param_nested(void g(int p[]));

