#include <iostream>
using namespace std;
int change(int a,int b){
	if (a-b < 0){
		int c;
		c=a;
		a=b;
		b=c;
	}
	return a-b;
}
struct people{
	int many;
	int LONG;
}x[10005];
int main(){
	int a;
	cin >> a;
	int tot=0,sum=0,b=0,c;
	for (int i=1;i<=a;++i){		
		cin >> x[i].many >> x[i].LONG;
		if (x[i].many*x[i].LONG > b){
			b=x[i].many*x[i].LONG;
			c=i;
		}
		tot == x[i].LONG;
		x[i].LONG += tot;						
	}
	for (int i=1;i<=a;++i){
		int d;
		d = change(x[c].LONG,x[i].LONG);
		sum += x[i].many*d;
	} 
	cout << sum;
	return 0;
}
