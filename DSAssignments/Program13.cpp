/*
    Name :- Yash Patidar
    ROll NO:- 20558
    Mail:- yash.20558@sscbs.du.ac.in
*/


#include<iostream>
using namespace std;

int main()
{
    int x[4],y[4],dis[4],con[4],NOR[4],NAND[4],Cond[4],Bicond[4],Negx[4],Negy[4],exor[4],exnor[4];
    cout<<"Program to display truth tables"<<endl;
    cout<<" Please Enter the Value between 0 and 1"<<endl;
    //DO-while  Loop
    char ch;
    do
    {
        for(int i=0;i<4;i++)
        {
            cout<<"Enter the"<<" "<<(i+1)<<" "<<"value of x and y"<<endl;
            try
            {
                /* code */
                cin>>x[i]>>y[i];
                if (x[i] > 1 || x[i] < 0 || y[i] > 1 || y[i] < 0)
                     throw("");
            }
            catch(const std::exception& e)
            {
                cout<<"Error occured";
            }
                        
            dis[i]=x[i]|y[i];
            con[i]=x[i]&y[i];
            NOR[i]=!dis[i];
            NAND[i]=!con[i];
            Cond[i]=!x[i]|y[i];
            Bicond[i]=((!x[i]|y[i])&(!y[i]|x[i]));
            Negx[i]=!x[i];
            Negy[i]=!y[i];
            exor[i]=x[i]^y[i];
            exnor[i]= !(x[i]^y[i]);

        }

        cout<<"X |Y  |OR |AND|NOR|NAND|COND|BICOND|NEGX|NEGY|EXOR|EXNOR"<<endl;
        for(int i=0;i<4;i++)
        {
            cout<<x[i]<<" | "<<y[i]<<" | "<<dis[i]<<" | "<<con[i]<<" | "<<NOR[i]<<" | "<<NAND[i]<<"  | ";
            cout<<Cond[i]<<"  |"<<Bicond[i]<<"     |"<<Negx[i]<<"   |"<<Negy[i] <<"   |"<<exor[i]<<"   |"<<exnor[i]<<endl;
        }

        cout<<"Do you want to continue (y/n)"<<endl;
        cin>>ch;
    }while(ch=='y');

    return 0;
}
