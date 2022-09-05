#include<iostream>
#include"Matrix.cpp"
using namespace std;
int main(int argc, char **argv) {
	int r,c,v,m;
		cout<<"enter rows"<<endl;
		cin>>r;
		while(r<0)
		{
			cout<<"wrong input please again"<<endl;
			cin>>r;
		}

		cout<<"enter colums"<<endl;
			cin>>c;
			while(c<0)
					{
						cout<<"wrong input please again"<<endl;
						cin>>c;
					}




			Matrix c1(r,c),c2(r,c),c3(r,c),c4(r,c);
			for(int j=0;j<r;j++)
								{
									for(int k=0;k<c;k++){
										cout<<"enter value which you want to set for Matrix 1 at["<<j<<"]["<<k<<"]"<<endl;
															cin>>v;
										c1.setp(v,j,k);
									}
								}
cout<<"\n\n\n\n"<<endl;
			for(int j=0;j<r;j++)
											{

												for(int k=0;k<c;k++){
													cout<<"enter value which you want to set for Matrix 2 at["<<j<<"]["<<k<<"]"<<endl;
																				cin>>v;
													c2.setp(v,j,k);
												}
											}
			cout<<"Matrix one is: \n"<<endl;
			cout<<c1;
			cout<<"Matrix two is: \n"<<endl;
			cout<<c2;
			cout<<"functionality of operator ++ as pre incriment(increment in Matrix one)"<<endl;
			++c1;
			cout<<c1;
			cout<<"functionality of operator ++ as post incriment(increment in Matrix one)"<<endl;
						cout<<c1++;

						cout<<"functionality of operator + (adding Matrix one and two into another Matrix three"<<endl;
									c3=c1+c2;
									cout<<c3;
									cout<<"functionality of operator - (subtracting Matrix one and two into another Matrix three"<<endl;
																		c3=c1-c2;
																		cout<<c3;
																		cout<<"functionality of operator * (Multiplying Matrix one and two into another Matrix three"<<endl;
																											c3=c1*c2;
																										cout<<c3;
				cout<<"functionality of operator = "<<endl;
				c1=c2;
				cout<<"now c1 after assignment"<<endl;
				cout<<c1;
				cout<<"functionality of operator == "<<endl;
				bool b=c1==c2;
				if(b)
				cout<<"true"<<endl;
				else
					cout<<"false"<<endl;
				cout<<"functionality of operator += "<<endl;
				c1+=c2;
				cout<<"now c1 after operation of +="<<endl;
								cout<<c1;
				cout<<"functionality of operator -= "<<endl;
				c1-=c2;
								cout<<"now c1 after operation of -="<<endl;
												cout<<c1;
				cout<<"fcuntionality for >> operator"<<endl;
			cout<<"input for Matrix four"<<endl;
					cin>>c4;
					cout<<"fcuntionality for << operator"<<endl;
					cout<<"output for Matrix four"<<endl;
										cout<<c4;
										int g,h;
cout<<"functionality for setting value at certain index operator is "<<endl;
cout<<"enter row index"<<endl;
cin>>g;
cout<<"enter colum index"<<endl;
cin>>h;

c1(g,h);
cout<<c1;
	return 0;
}
