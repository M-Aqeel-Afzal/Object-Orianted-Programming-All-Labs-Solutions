#include<iostream>
#include"Matrix.cpp"
using namespace std;
int main(int argc, char **argv) {
	int r,c,v,m;
	cout<<"enter rows"<<endl;
	cin>>r;
	cout<<"enter colums"<<endl;
		cin>>c;
		cout<<"enter value which you "<<endl;
				cin>>v;
				cout<<"enter value of flag for checking post functionallity "<<endl;
								cin>>m;

		Matrix c1(r,c);
		for(int j=0;j<r;j++)
							{
								for(int k=0;k<c;k++){
									c1.setp(v,j,k);
								}
							}
		for(int j=0;j<r;j++)
									{
										for(int k=0;k<c;k++){
											cout<<c1.getp(j,k)<<" ";
										}
										cout<<endl;
									}
		cout<<"Matrix after pre increment"<<endl;
		c1=++c1;
		for(int j=0;j<r;j++)
											{
												for(int k=0;k<c;k++){
													cout<<c1.getp(j,k)<<" ";
												}
												cout<<endl;
											}
		cout<<"Matrix after post increment"<<endl;
		c1=c1++;
				for(int j=0;j<r;j++)
													{
														for(int k=0;k<c;k++){
															cout<<c1.getp(j,k)<<" ";
														}
														cout<<endl;
													}
				cout<<"value of flag after post increment"<<endl;
				cout<<m<<endl;
				cout<<"Matrix after pre decrement"<<endl;
						c1=--c1;
						for(int j=0;j<r;j++)
															{
																for(int k=0;k<c;k++){
																	cout<<c1.getp(j,k)<<" ";
																}
																cout<<endl;
															}
						cout<<"Matrix after post increment"<<endl;
								c1=c1--;
								for(int j=0;j<r;j++)
																	{
																		for(int k=0;k<c;k++){
																			cout<<c1.getp(j,k)<<" ";
																		}
																		cout<<endl;
																	}
								cout<<"value of flag after post increment"<<endl;
								cout<<m<<endl;
	return 0;
}
