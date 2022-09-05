#include<string>
#include<iostream>
#include"animal.h"
#include"Dolphin.h"
#include"Zebra.h"
using namespace std;
int main()
{
string s1="fee";
string s2="jin";
Zebra z1(s1,5),z2;//by perimized constractor
z1.print();



Dolphin d1(s2,6),d2;//by perimized constractor
d1.print();





z2.Zebra::set_value(s1,7);//by default constrator
z2.print();






d2.Dolphin::set_value(s2,9);//by default constrator
d2.print();


return 0;
}
