#include<iostream>
#include<fstream>
#include<stdlib.h> 
#include<cstring>
#define M 5000
using namespace std;
class student
{
public:
      student(){}
      student(char na[10],char se[10],int n,int b,char t[12]):num(n),ban(b)
      {
            strcpy(sex,se);
            strcpy(name,na);
            strcpy(tel,t);
      }
      friend istream & operator >>(istream & is,student & s)
      {
            is>>s.name>>s.sex>>s.num>>s.ban>>s.tel;
            return is;
      }
      friend ostream & operator <<(ostream & os,student & s)
      {
            os<<s.name<<"  "<<s.sex<<"  "<<s.num<<"  "<<s.ban<<"  "<<s.tel<<endl;
            return os;
      }
      int getnum()
      {
            return num;
      }
      int getban()
      {
            return ban;
      }
      char *getsex()
      {
            char *s=new char[strlen(sex)];
            s=sex;
            return s;
      }
      char *getname()
      {
            char *p=new char[strlen(name)];
            p=name;
            return p;
      }
      char *gettel()
      {
            char *t=new char[strlen(tel)];
            t=tel;
            return t;
      }
private:
      char name[10];
      char sex[10];
      int num,ban;
      char tel[12];
};
int menu()
{
      char s[80];
      int c;
      cout<<"**************************    ��     ��     ��    ***************************"<<endl<<endl;
      cout<<"                  |            0.�˳���ǰ����           |                \n"<<endl;
      cout<<"                  |            1.����ѧ����Ϣ           |                \n"<<endl;
      cout<<"                 |            2.����ѧ�Ų�ѯ           |                \n"<<endl;
      cout<<"                  |            3.����������ѯ           |                \n"<<endl;
      cout<<"                  |            4.���ݰ༶��ѯ           |                \n"<<endl;
      cout<<"                  |            5.����ѧ������           |                \n"<<endl;
      cout<<"                  |            6.���༶������           |                \n"<<endl;
      cout<<"                  |            7.����ѧ��ɾ��           |                \n"<<endl;
      cout<<"                  |            8.����ѧ���޸�           |                \n"<<endl;
      cout<<"-----------------------------------------------------------------------------"<<endl;
      cout<<"                           �������Ĳ˵�ѡ����(0-8):"<<endl;
      cout<<"                                                              Designed by Peng"<<endl;
      for(;;)
      {
            gets(s);
            c=atoi(s);
            if(c>8)
                  cout<<"����������������룡:";
            else
                  break;
      }
      return c;
}
int enter(student t[])
{
      int i,n;
      system("cls");
      cout<<"                           ������ѧ����Ϣ����"<<endl;
      cin>>n;
      cout<<"                              ������ѧ����Ϣ\n"<<endl;
      cout<<"����           �Ա�         ѧ��         �༶          ��ϵ�绰"<<endl;
      fstream fs;
      fs.open("c:\\item.txt",ios::out);
      for(i=0;i<n;i++)
      {
            cin>>t[i];
            fs<<t[i];
      }
      fs.close();
      getchar();
      return n;
}
void search_num(student t[],int n)
{
      int i,nu,temp=-1000;
      system("cls");
      cout<<"���������ѧ����ѧ�ţ�"<<endl;
      cin>>nu;
      for(i=0;i<n;i++)
      {
            if(nu==t[i].getnum())
            {
                  cout<<"��ѧ����ϢΪ��"<<endl<<"���� �Ա� ѧ�� �༶ ��ϵ�绰"<<endl;
                  cout<<t[i];
                  temp=i;
            }
      }
      if(temp==-1000)
            cout<<endl<<endl<<"ѧ��Ϊ  "<<nu<<"  ��ѧ��������!"<<endl;
      getchar();
}
void search_ban(student t[],int n)
{
      int i,ba,temp=-1000;
      system("cls");
      cout<<"���������ѧ���İ༶�ţ�"<<endl;
      cin>>ba;
      cout<<"��ѧ����ϢΪ��"<<endl<<"���� �Ա� ѧ�� �༶ ��ϵ�绰"<<endl;
      for(i=0;i<n;i++)
      {
            if(ba==t[i].getban())
                  cout<<t[i];
            temp=i;
      }
      if(temp==-1000)
            cout<<endl<<endl<<"�༶Ϊ  "<<ba<<"  ��ѧ��������!"<<endl;
      getchar();
}
void search_name(student t[],int n)
{
      int i,temp=-1000;
      char na[20];
      system("cls");
      cout<<"���������ѧ����������"<<endl;
      cin>>na;
      for(i=0;i<n;i++)
      {
            if(strcmp(na,t[i].getname())==0)
            {
            cout<<"��ѧ����ϢΪ��"<<endl<<"���� �Ա� ѧ�� �༶ ��ϵ�绰"<<endl;
             cout<<t[i];
            temp=i;}
      }
      if(temp==-1000)
            cout<<endl<<endl<<"����Ϊ  "<<na<<"  ��ѧ��������!"<<endl;
      getchar();
}
void sort(student t[],int n)
{
      student p;int s;
      system("cls");
      cout<<"��ѡ���������(1��2):"<<endl;
      cin>>s;
      if(s==1)
      {cout<<"��ѧ����������������£�"<<endl;
      for(int i=0;i<n-1;i++)
      {for(int j=0;j<n-1-i;j++)
            {
                  if(t[j].getnum()>t[j+1].getnum())
                  {
                        p=t[j];
                        t[j]=t[j+1];
                        t[j+1]=p;      
                  }
            }
      }
      cout<<"���� �Ա� ѧ�� �༶ ��ϵ�绰"<<endl;
      for(int a=0;a<n;a++)
      {
            cout<<t[a];
      }
      }
      if(s==2)
      {cout<<"��ѧ�����򣨽���������£�"<<endl;
      for(int i=0;i<n-1;i++)
      {for(int j=0;j<n-1-i;j++)
            {
                  if(t[j].getnum()<t[j+1].getnum())
                  {
                        p=t[j];
                        t[j]=t[j+1];
                        t[j+1]=p;      
                  }
            }
      }
      cout<<"���� �Ա� ѧ�� �༶ ��ϵ�绰"<<endl;
      for(int a=0;a<n;a++)
      {
            cout<<t[a];
      }
      }
      getchar();
}
void count(student t[],int n)
{
      int i,c,temp=-1000;
      system("cls");
      fstream fs;
      fs.open("c:\\item.txt",ios::in);
      cout<<"��������ͳ�������İ༶��"<<endl;
      cin>>c;
      int s=0;
      for(i=0;i<n;i++)
      {
            fs>>t[i];
            if(c==t[i].getban())
            {
                  s++;
                  temp=i;
                  
            }
      }
      cout<<"�ð༶����Ϊ��"<<s<<endl;
      fs.close();
      if(temp==-1000)
            cout<<endl<<endl<<"�༶Ϊ  "<<c<<"  ��ѧ��������!"<<endl;
      getchar();
}
void change(student t[],int n)
{
      int id,i,temp=-1000,run=0;
      system("cls");
      cout<<"������Ҫ�޸ĵ�ѧ����ѧ�ţ�"<<endl;
      cin>>id;
      fstream fs;
      fs.open("c:\\item.txt",ios::in|ios::out);
      for(i=0;i<n;i++)
      {
            if(id==t[i].getnum())
            {
            cout<<"�޸�ǰ��ѧ����ϢΪ��"<<endl<<"���� �Ա� ѧ�� �༶ ��ϵ�绰"<<endl;
            cout<<t[i];
            temp=i;
            run=2000;}      
      }
      fs.close();
      if(run==2000)
      {fs.open("c:\\item.txt",ios::in|ios::out);
      cout<<"���������޸ĸ�ѧ������ϢΪ��"<<endl<<"���� �Ա� ѧ�� �༶ ��ϵ�绰"<<endl;
      cin>>t[i];
      fs<<t[i];
      fs.close();
      cout<<"�޸ĳɹ���"<<endl;}
        if(temp==-1000)
            cout<<endl<<endl<<"����Ϊ  "<<id<<"  ��ѧ��������!"<<endl;
      getchar();
}
int del(student t[],int n)
{
      int ber,temp=-1000,run=0;
      int i,j,nu;
      system("cls");
      cout<<"������Ҫɾ����ѧ����ѧ�ţ�"<<endl;
      cin>>ber;
      for(i=0;i<n;i++)
      {
            if(ber==t[i].getnum())
            {
                  temp=i;
                  run=2000;
            }
      }
      if(run==2000)
      {
      cout<<"ɾ����........"<<endl;
      cout<<"ɾ��������Ϊ��"<<endl<<"���� �Ա� ѧ�� �༶ ��ϵ�绰"<<endl;
      }
      fstream fs;
      fs.open("c:\\item.txt",ios::out);
      for(int x=0;x<n;x++)
      {
            if(ber==t[x].getnum())
            {
                  for(j=0;j<n;j++)
                  {
                        if(j==x)
                              continue;
                        else
                              fs<<t[j];
                        cout<<t[j];
                  }
            }
      }
      nu=n-1;
      fs.close();
      if(temp==-1000)
            cout<<endl<<endl<<"ѧ��Ϊ  "<<ber<<"  ��ѧ��������!"<<endl;
      getchar();
      return nu;
      
}
int main()
{
      student s[M];
      int length;
      for(;;)
      {
            system("cls");
            switch(menu())
            {
            case 0:exit(0);break;
            case 1:length=enter(s);break;
            case 5:sort(s,length);break;
            case 8:change(s,length);break;
            case 7:length=del(s,length);break;
            case 2:search_num(s,length);break;
            case 3:search_name(s,length);break;
            case 4:search_ban(s,length);break;
            case 6:count(s,length);break;
            }
            cout<<"���س��������˵�.."<<endl;
            getchar();
      }
      return 0;
}


