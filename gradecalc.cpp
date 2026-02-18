#include<iostream>
int main(){
    using namespace std;
    int marks;
    int choice;
    cout<<"select an option (1-3): \n";
    cout<<"1.Marks above 90\n";
    cout<<"2.Marks between 90-70\n";
    cout<<"3.Marks below 70\n";
    cin >> choice;

    cout<<"What are your marks?";
    cin>>marks;
    switch(choice){
        case 1:
        cout<<"YOU GOT AN A+!\n";
        break;
        case 2:
        cout<<"YOU GOT A B+!\n";
        break;
        case 3:
        cout<<"YOU GOT A C!\n";
        break;
        default:
        cout<<"INVALID INPUT!";
        break;
    }
return 0;
}