#include <iostream>
using namespace std;
#define MAX 10
class Matrix
{ private:
	int nrow,ncol;
  public:
  	void rowcolumn(int &nrow , int &ncol){
  		cout<<"\t\tEnter matrix rows and columns "<<endl;
	cout<<"\t\t";cin>>nrow;
	cout<<"\t\t";cin>>ncol;
	cout<<"\t\tMatrix rows\t"<<nrow<<endl;
	cout<<"\t\tMatrix Column\t"<<ncol<<endl;
  		 }
	void Getmatrix (int &nrow , int &ncol, int A[][10])
		{	
	cout<<"\t\tEnter matrix"<<endl;
			for ( int i=0;i<nrow;i++)
			{  cout<<"\t\t";
				for( int j=0;j<ncol;j++)
			{
					cin>>A[i][j];
				}
			}
		}
	void Showmatrix (int &nrow , int &ncol, int A[][10] )
	{ cout<<"\t\t";
			for ( int i=0;i<nrow;i++)
			{   
				for( int j=0;j<ncol;j++)
				cout<<A[i][j]<<" ";
				cout<<endl;
				cout<<"\t\t";
			}
	}
	void Transpose(int &nrow , int &ncol, int A[][10])
	{cout<<" \t\tTranspose of matrix "<<endl;
	c	for ( int i=0;i<ncol;i++)
			{   
	out<<"\t\t";
				for( int j=0;j<nrow;j++)
				cout<<A[j][i]<<" ";
				cout<<endl;
				cout<<"\t\t";
			}	
	}
	void sum ( int m, int n , int A1[][10] , int A2[][10])
	{  cout<<"\t\t Sum of matrix"<<endl;
	 cout<<"\t\t"; 
		for ( int i=0;i<m;i++)
			{ 
				for( int j=0;j<n;j++)
				cout<<A1[i][j]+A2[i][j]<<" ";
				cout<<endl;
				cout<<"\t\t";
			}
	
	
		}
	void Product (int m, int n, int o, int A1[][10],int A2[][10])
	{   int mul[MAX][MAX];
		cout<<"multiply of the matrix=\n";    
		for(int i=0;i<m;i++)    
			{    
		for(int j=0;j<n;j++)    
		{    
			mul[i][j]=0;    
			for(int k=0;k<n;k++)    
			{    
				mul[i][j]+=A1[i][k]*A2[k][j];    
					}	    
						}    
								}      
						Showmatrix(m,o,mul);
	}
	
	
	void menu(){ char c;
	int m,n,o,p,a;
		int A1[MAX][MAX],A2[MAX][MAX];

		
		
		do{
		cout<<"\t\t\t\tMENU\t\t"<<endl;
		int ch;
		
		cout<<"\t\tPress 1 for Transpose Matrix"<<endl;
		cout<<"\t\tPress 2 for sum of Matrix"<<endl;
		cout<<"\t\tPress 3 for Product of matrix"<<endl;
		cout<<"\t\t";cin>>ch;
		switch(ch){
			case 1: 	rowcolumn( m, n);
	                 Getmatrix( m, n, A1);
					Transpose(m,n,A1);
					break;
		case 2:      rowcolumn( m, n);
	                 Getmatrix( m, n, A1);
	                 cout<<"\t\t\tATTENTION !! \n \t\tFOR SUM - THEN NUMBER OF ROWS AND COLUMN SHOULD BE SAME "<<endl;
	                rowcolumn(o,p);
	                if (m!=o || n!=p )
	                    throw "error";
	                Getmatrix(o,p,A2);
		            sum(o,p,A1,A2);
					break;
			case 3: 
					rowcolumn( m, n);
	                 Getmatrix( m, n, A1);
	                 cout<<" \t\tFOR PRODUCT NUMBER OF COLUMN IN FIRST MATRIX SHOULD BE SAME AS IN NUMBER OF ROWS IN SECOND MATRIX"<<endl;
	                 rowcolumn( o,p);
					 Getmatrix(o,p,A2);
					 if ( n != o)
					throw ("Error");
                    Product(m,n,p,A1,A2);
				break;
			default : cout<<"\t\tYou have entered  a wrong choice"<<endl;
			
		}
cout<<"\t\tPress Y to continue or any other key to exit "<<endl;
cout<<"\t\t";cin>>c;
}

while ( c=='Y' || c=='y');
}

};
int main()
{
	Matrix m;
try{
	m.menu();
}
catch ( const char * msg)
{
		cout<<msg<<endl;
	}
	}
