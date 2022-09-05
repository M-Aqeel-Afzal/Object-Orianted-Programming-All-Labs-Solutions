#include<iostream>
#include<string>
#include"TeleDirectory.h"
using namespace std;
int main()
{
//////////////////Default
cout<<"functionality through Default cnstractor\n\n"<<endl;
TeleDirectory d1;
d1.writeDirectory("Abid","Lahore","04530000670");
d1.writeDirectory("Aqeel","Bhakkar","04530010001");
d1.writeDirectory("Adil","karachi","04530000000");
d1.printDirectory();
cout<<"Functionality of searchby name Function\n\n"<<endl;
cout<<d1.searchByName("Adil")<<endl;
cout<<"Functionality of searchby Number Function\n\n"<<endl;
cout<<d1.searchByNumber("04530010001")<<endl;








//////////////////Paramitrized
cout<<"functionality through Primetrized cnstractor\n\n"<<endl;
TeleDirectory d2("","","");
d2.writeDirectory("Ali","Lahore","04530000000");
d2.writeDirectory("Ali","Bhakkar","04530000001");
d2.writeDirectory("Khan","karachi","04530000000");
d2.printDirectory();
cout<<"Functionality of searchby name Function\n\n"<<endl;
cout<<d2.searchByName("Khan")<<endl;
cout<<"Functionality of searchby Number Function\n\n"<<endl;
cout<<d2.searchByNumber("04530000001")<<endl;
return 0;
}
