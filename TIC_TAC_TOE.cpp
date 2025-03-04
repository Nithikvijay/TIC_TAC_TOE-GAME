#include<bits/stdc++.h>

using namespace std;

bool checkforwin(char mat[3][3],int player)
{
    char toCheck;
    if(player ==1)
    {toCheck ='O';}
    else toCheck ='X';
    bool flag = false;
    for(int i=0;i<3;i++)
    {
        if(mat[i][0]==toCheck && mat[i][1]==toCheck && mat[i][2]==toCheck )
        flag =true;
        if(mat[0][i]==toCheck && mat[1][i]==toCheck && mat[2][i]==toCheck )
        flag =true;
    }
        if(mat[0][0]==toCheck && mat[1][1]==toCheck && mat[2][2]==toCheck )
        flag =true;
        if(mat[0][2]==toCheck && mat[1][1]==toCheck && mat[2][0]==toCheck )
        flag =true;
    return flag;    

}

bool checktie(char mat[3][3])
{
    bool flag = true;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        if(mat[i][j]=='.')
        flag=false;

    }
    return flag;
}


int main()
{
    char mat[3][3];

    for(int i=0 ;i<3;i++){
        for(int j=0 ;j<3;j++)
        mat[i][j]='.';
    }

    bool flag = false;
    int player =1;

    while(!flag)
    {   cout<<endl;
        for(int i=0 ;i<3;i++){
            for(int j=0 ;j<3;j++)
            cout<<mat[i][j]<<" ";
            cout<<endl;
        } 
        cout<<endl;

        int row,col;
        cout<<"Enter your choice player "<<player <<endl;
        cout<<"row : ";     
        cin>>row;     
        cout<<"col : ";     
        cin>>col;

        if(mat[row-1][col-1]!='.')
        {cout<<"this block is already filled ,please enter another choice"<<endl;
        continue;
        }  

        if(player==1)
        {mat[row-1][col-1]='O';}

        else
        {mat[row-1][col-1]='X';}

         if(checkforwin(mat,player))
         {
            cout<<"player "<<player <<" wins "<<endl;
            break;
         }
         if(checktie(mat))
         {
             cout<<"the game is tie \n";
             break;
         }
         if(player==1)
         player =2;
         else 
         player =1;      

    }
    
    return 0;
}
