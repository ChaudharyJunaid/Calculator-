/*Assignment # 2 
  Name: Muhammad Junaid Iqbal
 BSCS  Section D*/
 #include<iostream>
 using namespace std;
 int main ()
 {int x;
 int y;
 char choice;
 while(true)
 {
 
 cout<<"Enter your first number :";
 cin>>x;
cout<<"Enter your second number :";
cin>>y;
cout<<"Enter your sign :";
cin>> choice;
if(choice =='+')
cout<<"Your Answer is :"<<x+y<<endl;
else
if(choice =='-')
cout<<"Your Answer is :"<<x-y<<endl;
else
if(choice =='*')
cout<<"Your Answer is :"<<x*y<<endl;
else
if(choice =='/')
cout<<"Your Answer is :"<<x/y<<endl;
else
if(choice =='%')
cout<<"Your Answer is :"<<x%y<<endl;
else
break;
}
cout<<"Invalid Operation"<<endl;
}
