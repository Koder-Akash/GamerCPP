#include <iostream>
#include <cstdlib>
#include<windows.h>


using namespace std;

int main()
{
    int length = 130;
    
    int rand();
    
    cout<<"Enter track length: "<<length<<endl;
    
    //cin>>length;

    while(1)
    {
        int temp = rand()%length; // 0 to l-1(l)
        
        cout<<"START";
        
        for(int i=0; i < length; i++)
        {
        
            if(i==temp)
                cout<<"|";

            else
                cout<<".";
                        
        }

        cout<<"END"<<endl;

        Sleep(1);

        if(temp == length-1)
        {   
            break;
        }

    }
        
    return 0;
}