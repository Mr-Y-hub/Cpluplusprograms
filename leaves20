#include<iostream>
using namespace std;
class leaves{
	private:
		int m,i;
		public:
		leaves(int a,int b){
			m=a;
	        i=b;
		}
		int calc_l();
		
};


int leaves::calc_l(){
	return ((i*(m-1))+1);
}
int main(){
	
	int m,i;
	cout<<"enter m:";
			cin>>m;
			cout<<"enter i: ";
			cin>>i;
			
			leaves obj(m,i);
	
	int leaves_num=obj.calc_l();
	cout<<"number of leaves is: "<<leaves_num;
}