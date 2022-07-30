#include<bits/stdc++.h>
using namespace std;
int a=0,b=0,c=0;
int func1(int x);
void func2(int *x,int y);
void func3(int x,int *y);
int main(){
	a = 2017 % 47;
	cout<<a<<endl;
	func3(a,&b);
	func2(&a,b);
}
int func1(int p){
	
	c = p+a;
	func2(&a,b);
	return c;
}
void func2(int *x,int b){
	*x *=2;
	b = func3(a,x);
	cout<<b<<endl;
}
int func3(int c,int *n){
	c = 2;
	return ++(*n)**n;
}