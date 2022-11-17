/*
Project Specification:
   1.The Code's version is Test version
   2.Combine Destructors And Classes to Realize the Statistics of Personnel information and Print it out
   Author : ning wang
   Company: Kunlun Tech
*/
#include <string.h>
#include <iostream>
#include <Windows.h>

using namespace std;
//定义一个类
class  stud
{
private://私有成员
    int num;
    char name[12];
    char sex;
public: //公有成员
     stud(int n,const char nam[],char s);//声明构造函数
    ~ stud();
     void display();//声明构造函数
};

//构造函数，获取用户数据
 stud:: stud(int n,const char nam[],char s)
{
    num = n;
    strcpy(name,nam);
    sex = s;
}

//析构函数，用于释放内存
 stud::~ stud()
{
    cout << "stud has been destructed!" << endl;//通过输出提示信息告诉我们析构函数确实被调用了
}

// Function:成员函数，输出对象的数据
// #param In void Out void
void stud::display(void)//函数重载
{
   cout << "number:" << num <<endl;
   cout << "name:" << name <<endl;
   cout << "sex:" << sex << endl;
}
//主函数
int main(){
    stud stud1(10001,"Wang-Li",'f'),stud2(10002,"Zhang-Long",'m');//定义两个类的对象
    stud1.display();
    stud2.display();
    system("pause");
    return 0;
}
