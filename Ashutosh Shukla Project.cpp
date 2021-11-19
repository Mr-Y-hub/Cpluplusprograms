#include <iostream>
using namespace std;
class Tool
{
	public:
	int strength;
	char type;
	void setstrength(int);	
};
void Tool :: setstrength (int a)
{
	//strength=
}
class Scissor:public Tool{
	int scissorstrength;
	int splayer;
	public:
		Scissor(int a=0,int pl)
		{
		scissorstrength=a;
		splayer=pl;	
		}
		
};
class Rock:public Tool{
	int rockstrength,rplayer;
	public:
		Rock(int a=0,int pl)
		{
		rockstrength=a;
		rplayer=pl;	
		}
	
};
class Paper:public Tool{
	int paperstrength,pplayer;
		public:
		Paper(int a=0,int pl)
		{
		paperstrength=a;	
		pplayer=pl;
		}
};
class collection : public Rock, public Paper, public Scissor 		
{
  	public:
  		int rockf ()
  		{   
  		      	
		  }
};

int main()
{	
	int n;
	char a[20];
	cout<<"\t\t This is the Game of Rock, Paper and Scissor"<<endl;
	cout<<" Enter r for rock, p for paper, s for scissor"<<endl;
	cout<<" \t\t How many player are in Game "<<endl;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cout<<" Player "<<i+1<<endl;
	    cin>>a[i];
	}
	for (int i=0;i<n;i++)
	{
	
	if (a[i]='r')
	Rock r(15,i+1);
	if (a[i]='p')
	Paper p(7,i+1);
	if (a[i]='s')
	Scissor s(5,i+1);
}
	
	
	
		
}
