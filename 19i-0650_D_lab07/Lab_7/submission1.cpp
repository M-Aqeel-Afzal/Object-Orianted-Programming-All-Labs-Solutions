
//Task 1

Point();
Point(int x1, int y1);
Point(const Point &copy);
int getX() const;
int getY() const;
void setX(int x1);
void setY(int y1);
//task2
Rectangle(int x, int y, int width, int height);
Rectangle(Point p, int width, int height);
Rectangle(const Rectangle &copy) ;
int getHeight()const;
int getWidth()const;
int getX()const;
int getY()const;
string toString();
bool contains(Point p);
Rectangle Union(Rectangle & rect);



//Task3
int GetCreditHoursCount(SemesterRegistration sr);
bool FindCourseInSemesterRegistration(SemesterRegistration sr,String Coursecode );
//task 4

Date(int year, int month, int day);
int getDay()const;
int getMonth()const;
int getYear()const;
bool isLeapYear()const;
string toString();
void add(const int &days);
void add(const int &months,const int &days);
void add(Date & date);
void subtract(const int &days);
void subtract(const int &months,const int &days);
void subtract(Date & date);
void addWeeks(const int &weeks);
int daysTo(const Date & other);
