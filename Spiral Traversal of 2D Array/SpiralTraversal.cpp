#include <iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter number of rows:";
    cin>>row;
    cout<<"\nEnter number of columns:";
    cin>>col;
    int a[row][col];
    cout<<"\nEnter "<<row*col<<" elements:";
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            cin>>a[i][j];
    cout<<"\nEntered 2D array is:\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            cout<<a[i][j]<<"  ";
        cout<<"\n";
    }
    int d=0,top=0,bottom=row-1,left=0,right=col-1;
    cout<<"\nSpliral Traversal:\n";
    while(top<=bottom && left<=right)
    {
        if(d==0)
        {
            for(int i=left;i<=right;i++)
                cout<<a[top][i]<<" ";
            top++;
        }
        if(d==1)
        {
            for(int i=top;i<=bottom;i++)
                cout<<a[i][right]<<" ";
            right--;
        }
        if(d==2)
        {
            for(int i=right;i>=left;i--)
                cout<<a[bottom][i]<<" ";
            bottom--;
        }
        if(d==3)
        {
            for(int i=bottom;i>=top;i--)
                cout<<a[i][left]<<" ";
            left++;
        }
        d=(d+1)%4;
    }
    return 0;
}
