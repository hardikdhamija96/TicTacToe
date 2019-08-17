#include<iostream>
using namespace std;

//bool gameend(int matrix[][])

//void changeplace(int c, matrix[][])
//{
	
//}

int main()
{
	cout<<"\t\t Tik Tak Toe"<<endl<<endl;
	
	cout<<"\t PLAYER 1 : [X]"<<endl;
	cout<<"\t PLAYER 2 : [0]"<<endl;
	
	char matrix[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	
	cout<<"\t\t     |     |     "<<endl;
	cout<<"\t\t"<<"  "<<matrix[0][0]<<"  |  "<<matrix[0][1]<<"  |  "<<matrix[0][2]<<"  "<<endl;
	cout<<"\t\t_____|_____|_____"<<endl;
	cout<<"\t\t     |     |     "<<endl;
	cout<<"\t\t"<<"  "<<matrix[1][0]<<"  |  "<<matrix[1][1]<<"  |  "<<matrix[1][2]<<"  "<<endl;
	//cout<<"\t\t     |     |     "<<endl;
	cout<<"\t\t_____|_____|_____"<<endl;
	cout<<"\t\t     |     |     "<<endl;
	cout<<"\t\t"<<"  "<<matrix[2][0]<<"  |  "<<matrix[2][1]<<"  |  "<<matrix[2][2]<<"  "<<endl;
	//cout<<"\t\t     |     |     "<<endl;
	cout<<"\t\t     |     |     "<<endl;
	
	char choicep1,choicep2;
	
	cout<<"PLAYER 1 TURN :"<<endl;
	cin>>choicep1;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(matrix[i][j]==choicep1)
			{
				matrix[i][j]='X';
			}
		}
	}
	
	cout<<"PLAYER 2 TURN :"<<endl;
	cin>>choicep2;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(matrix[i][j]==choicep2)
			{
				matrix[i][j]='0';
			}
		}
	}
	
	cout<<"\t\t     |     |     "<<endl;
	cout<<"\t\t"<<"  "<<matrix[0][0]<<"  |  "<<matrix[0][1]<<"  |  "<<matrix[0][2]<<"  "<<endl;
	cout<<"\t\t_____|_____|_____"<<endl;
	cout<<"\t\t     |     |     "<<endl;
	cout<<"\t\t"<<"  "<<matrix[1][0]<<"  |  "<<matrix[1][1]<<"  |  "<<matrix[1][2]<<"  "<<endl;
	//cout<<"\t\t     |     |     "<<endl;
	cout<<"\t\t_____|_____|_____"<<endl;
	cout<<"\t\t     |     |     "<<endl;
	cout<<"\t\t"<<"  "<<matrix[2][0]<<"  |  "<<matrix[2][1]<<"  |  "<<matrix[2][2]<<"  "<<endl;
	//cout<<"\t\t     |     |     "<<endl;
	cout<<"\t\t     |     |     "<<endl;
	
}
