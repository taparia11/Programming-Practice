#include<iostream>
using namespace std;
int main()
{
    float total_classes,attended_classes,required_classes,current_percent,final_percent,final_total_classes,final_attended_classes;
    cout<<"Enter Total Classes : ";
    cin>>total_classes;
    cout<<"Enter Attended Classes : ";
    cin>>attended_classes;
        current_percent = attended_classes/total_classes*100;
    for (int i = 0;i<50 ; i++)
    {
        final_total_classes = total_classes + i;
        final_attended_classes = attended_classes + i;
        final_percent= final_attended_classes/final_total_classes*100;
        if (final_percent>75)
        {
            required_classes = final_attended_classes - attended_classes;
            cout<<"Initial Total classes : "<<total_classes<<endl;
            cout<<"Initial attended classes : "<<attended_classes<<endl;
            cout<<"Initial Total classes percentage : "<<current_percent<<"%"<<endl;
            cout<<"Final Total classes : "<<final_total_classes<<endl;
            cout<<"Final attended classes : "<<final_attended_classes<<endl;
            cout<<"Initial Total classes percentage : "<<final_percent<<"%"<<endl;
            cout<<"Final required classes : "<<required_classes<<endl;
            break;
        }
        
    }
    getchar;
    // cin>>total_classes;
    return 0;
}