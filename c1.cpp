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
      cout<<"**************************    主     菜     单    ***************************"<<endl<<endl;
      cout<<"                  |            0.退出当前程序           |                \n"<<endl;
      cout<<"                  |            1.输入学生信息           |                \n"<<endl;
      cout<<"                 |            2.根据学号查询           |                \n"<<endl;
      cout<<"                  |            3.根据姓名查询           |                \n"<<endl;
      cout<<"                  |            4.根据班级查询           |                \n"<<endl;
      cout<<"                  |            5.根据学号排序           |                \n"<<endl;
      cout<<"                  |            6.按班级计人数           |                \n"<<endl;
      cout<<"                  |            7.根据学号删除           |                \n"<<endl;
      cout<<"                  |            8.根据学号修改           |                \n"<<endl;
      cout<<"-----------------------------------------------------------------------------"<<endl;
      cout<<"                           输入您的菜单选项编号(0-8):"<<endl;
      cout<<"                                                              Designed by Peng"<<endl;
      for(;;)
      {
            gets(s);
            c=atoi(s);
            if(c>8)
                  cout<<"输入错误，请重新输入！:";
            else
                  break;
      }
      return c;
}
int enter(student t[])
{
      int i,n;
      system("cls");
      cout<<"                           请输入学生信息条数"<<endl;
      cin>>n;
      cout<<"                              请输入学生信息\n"<<endl;
      cout<<"姓名           性别         学号         班级          联系电话"<<endl;
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
      cout<<"请输入查找学生的学号："<<endl;
      cin>>nu;
      for(i=0;i<n;i++)
      {
            if(nu==t[i].getnum())
            {
                  cout<<"该学生信息为："<<endl<<"姓名 性别 学号 班级 联系电话"<<endl;
                  cout<<t[i];
                  temp=i;
            }
      }
      if(temp==-1000)
            cout<<endl<<endl<<"学号为  "<<nu<<"  的学生不存在!"<<endl;
      getchar();
}
void search_ban(student t[],int n)
{
      int i,ba,temp=-1000;
      system("cls");
      cout<<"请输入查找学生的班级号："<<endl;
      cin>>ba;
      cout<<"该学生信息为："<<endl<<"姓名 性别 学号 班级 联系电话"<<endl;
      for(i=0;i<n;i++)
      {
            if(ba==t[i].getban())
                  cout<<t[i];
            temp=i;
      }
      if(temp==-1000)
            cout<<endl<<endl<<"班级为  "<<ba<<"  的学生不存在!"<<endl;
      getchar();
}
void search_name(student t[],int n)
{
      int i,temp=-1000;
      char na[20];
      system("cls");
      cout<<"请输入查找学生的姓名："<<endl;
      cin>>na;
      for(i=0;i<n;i++)
      {
            if(strcmp(na,t[i].getname())==0)
            {
            cout<<"该学生信息为："<<endl<<"姓名 性别 学号 班级 联系电话"<<endl;
             cout<<t[i];
            temp=i;}
      }
      if(temp==-1000)
            cout<<endl<<endl<<"姓名为  "<<na<<"  的学生不存在!"<<endl;
      getchar();
}
void sort(student t[],int n)
{
      student p;int s;
      system("cls");
      cout<<"请选择升序或降序(1或2):"<<endl;
      cin>>s;
      if(s==1)
      {cout<<"按学号排序（升序）完成如下："<<endl;
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
      cout<<"姓名 性别 学号 班级 联系电话"<<endl;
      for(int a=0;a<n;a++)
      {
            cout<<t[a];
      }
      }
      if(s==2)
      {cout<<"按学号排序（降序）完成如下："<<endl;
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
      cout<<"姓名 性别 学号 班级 联系电话"<<endl;
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
      cout<<"请输入想统计人数的班级："<<endl;
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
      cout<<"该班级人数为："<<s<<endl;
      fs.close();
      if(temp==-1000)
            cout<<endl<<endl<<"班级为  "<<c<<"  的学生不存在!"<<endl;
      getchar();
}
void change(student t[],int n)
{
      int id,i,temp=-1000,run=0;
      system("cls");
      cout<<"请输入要修改的学生的学号："<<endl;
      cin>>id;
      fstream fs;
      fs.open("c:\\item.txt",ios::in|ios::out);
      for(i=0;i<n;i++)
      {
            if(id==t[i].getnum())
            {
            cout<<"修改前该学生信息为："<<endl<<"姓名 性别 学号 班级 联系电话"<<endl;
            cout<<t[i];
            temp=i;
            run=2000;}      
      }
      fs.close();
      if(run==2000)
      {fs.open("c:\\item.txt",ios::in|ios::out);
      cout<<"请输入你修改该学生的信息为："<<endl<<"姓名 性别 学号 班级 联系电话"<<endl;
      cin>>t[i];
      fs<<t[i];
      fs.close();
      cout<<"修改成功！"<<endl;}
        if(temp==-1000)
            cout<<endl<<endl<<"姓名为  "<<id<<"  的学生不存在!"<<endl;
      getchar();
}
int del(student t[],int n)
{
      int ber,temp=-1000,run=0;
      int i,j,nu;
      system("cls");
      cout<<"请输入要删除的学生的学号："<<endl;
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
      cout<<"删除中........"<<endl;
      cout<<"删除后数据为："<<endl<<"姓名 性别 学号 班级 联系电话"<<endl;
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
            cout<<endl<<endl<<"学号为  "<<ber<<"  的学生不存在!"<<endl;
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
            cout<<"按回车返回主菜单.."<<endl;
            getchar();
      }
      return 0;
}


