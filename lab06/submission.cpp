//Task 1

Complex(double = 0, double = 0);
Complex( Complex & copy);
void setReal(double);
double getReal() ;
void setImaginary(double);
double getImaginary() ;
Complex addComplex( double r);
Complex addComplex( Complex &c1);
Complex subComplex( double r);
Complex subComplex( Complex &c1);
Complex mulComplex( double r);
Complex mulComplex( Complex &c1);


//Task 2

Holiday();
Holiday( string &n, int d,  string &m);
bool setName( string &s);
string getName() ;
bool setDay(int u);
int getDay() ;
bool setMonth( string &p);
string getMonth() ;
bool inSameMonth ( Holiday &a, Holiday &b);//globle function
double avgDate(Holiday arr[], int size);//globle function

