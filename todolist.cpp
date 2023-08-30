#include <iostream>
#include <string>

using namespace std;

int main()
{
    int count =1;
    int task_count=0;
    char choice;
    char case_choice;
    int task_no;
    string status[20];
    string task_perform[100];
   while(true)
    {
    cout<<"______**SHALL WE BEGIN**\n______";
    cout<<"what tast you want to perform"<<endl<<
            "1: TASK NEED TO BE ADDED"<<endl<<
            "2: REMOVE TASK"<<endl<<
            "3:EXIT\n";
            cin>>task_no;
    switch(task_no)
    {
        if(task_no<1 && task_no>3)
        {cout<<"INVALID";}
        case 1:
        while(true)
        {
            cin.ignore();
            cout<<"Enter TASK:\n";
            getline(cin, task_perform[task_count]);
            cout<<"Enter Status\n";
            getline(cin, status[task_count]);
            task_count++;
            cout<<"DO YOU WANT TO CONTINUE YES->y or NO->n \n";
            cin>>choice;
            if(choice=='n')
            {
                break;
            }
        }
        break;
        case 2:
        cout<<"FOLLOWING TASKS HAVE BEEN ENTERED\n";
        cout<<"These are the following tasks\n";
         for(int i=0;i<task_count;i++)
         {
           cout<<task_perform[i]<<"\t"<<status[i]<<"\n";
         }
        cout<<"Which task you want to remove\n";
        cin>>count;
        //update task
        for(int i=count;i<task_count;i++)
        {   cout<<"TASK REMOVED:\t"<<task_perform[i]<<"\tstatus: COMPLETED\n";
            break;
        }
        for(int i=count;i<task_count;i++)
        {
            task_perform[i]=task_perform[i+1];
            status[i]=status[i+1];
        }
        break;

        case 3:
        cout<<"ENDED\n";
        cout<<"FINALLY:"<<endl<<"These are the following tasks\n";
         for(int i=0;i<task_count;i++)
         {
           cout<<task_perform[i]<<"\t"<<status[i]<<"\n";
         }

        break;
    }
    if(task_no==3)
    {break;}
    cout<<"WHAT DO YOU WANT TO DO NEXT?? \n";
    }
    cout<<"EXIT";
    return 0;
    
}