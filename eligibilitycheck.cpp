#include<iostream.h>
#include<conio.h>
int main()
{
   int age;
       cout<<"enter your age:";
       cin>>age;
       if(age>=18)
       {
       cout<<"you are eligible for voting:";
       }
       else
       {
       cout<<"you are noneligible for voting:";
       cout<<"wait for"<<18-age<<"year(s):";
       }
       return 0 ;
       }
