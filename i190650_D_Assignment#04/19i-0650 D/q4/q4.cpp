#include"Polynomial.cpp"
#include<iostream>
using namespace std;
int main(int argc, char **argv) {
	int dgri1,dgri2;
	cout<<"enter degree of 1st polynomial"<<endl;
	cin>>dgri1;
	cout<<"enter degree of 2nd polynomial"<<endl;
		cin>>dgri2;
	Polynomial p1(dgri2),p2(dgri2);



	cout<<" *************functionality of >> operator********** \n\n"<<endl;//functionality of cin operator
	cout<<"values for 1st polynomial\n\n"<<endl;
	cin>>p1;
	cout<<"values for 2nd polynomial\n\n"<<endl;
		cin>>p2;



		cout<<" *********functionality of << operator********** \n\n"<<endl;//functionality of cout operator
		cout<<"1st polynomial is: "<<p1<<endl;
		cout<<"2nd polynomial is: "<<p2<<endl;



		cout<<" *********functionality of = operator********** \n\n"<<endl;//functionality of = operator
		Polynomial p3=p2;
		cout<<p3;
		cout<<" *********functionality of == operator********** \n\n"<<endl;//functionality of == operator
				bool b=p3==p2;

				if(b)
					cout<<"Yes both polynomial are same"<<endl;
				else
					cout<<"No both polynomial are not same"<<endl;
				 b=p3==p1;

								if(b)
									cout<<"Yes both polynomial are same"<<endl;
								else
									cout<<"No both polynomial are not same"<<endl;




								cout<<" *********functionality of + operator********** \n\n"<<endl;//functionality of + operator
								Polynomial p4=p2+p1;

								cout<<"resultant polynomial is :\n\n "<<endl;
								cout<<p4;



								cout<<" *********functionality of - operator********** \n\n"<<endl;//functionality of - operator
																Polynomial p5=p2-p1;
																cout<<"resultant polynomial is :\n\n "<<endl;
								cout<<p5;




								cout<<" *********functionality of += operator********** \n\n"<<endl;//functionality of += operator
																								p2+=p1;
																								cout<<"resultant polynomial is :\n\n "<<endl;
																cout<<p2;




										cout<<" *********functionality of -= operator********** \n\n"<<endl;//functionality of -= operator
											p2-=p1;
											cout<<"resultant polynomial is :\n\n "<<endl;
											cout<<p2;
		return 0;
}


















