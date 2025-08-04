#include<iostream>
using namespace std;

int main()
{
     string name;
     int age;
     float height;
     char favorite_letter;

     cout<< "ENTER NAME:" <<endl;
     cin>>name;
     cout<< "ENTER AGE" <<endl;
     cin>>age;
     cout<< "ENTER height" <<endl;
     cin>>height;
     cout<< "FAVOURITE LETTER"<<endl;
     cin>>favorite_letter;

     cout<< name <<endl;
     cout<< (float)age <<endl;
     cout <<(int)height<<endl;
     cout<<(int)favorite_letter<<endl;

	return 0;
}