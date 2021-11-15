 #include <stdio.h>
 #include <string.h>
//
// //结构体！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
// //学习了char int double 但是怎么去描述一个人啊？
// //人=名字+身高+体重+身份证号码+年龄....
// //书=书名+价格+出版社+....
// //复杂对象-结构体-我们自己创造出来的一种类型
// //创建一个结构体类型
// struct Book  //struct 结构体关键字；
// {
//     char name[20];//命名一个名字：C语言程序设计
//     int price;//定义一个价格：55
// };//分号表示一个结构体结束
//
// int main()
// {
//     //利用结构体类型创建一个结构体变量
//     struct Book b1={"C语言程序设计",55};
//     //.  结构体变量.成员
//     //->  结构体指针->成员
//     //指针的方式1（复杂）
//     struct Book* pb=&b1;  //依旧可以使用指针打印出来；
//     printf("%s\n",(*pb).name);
//     printf("%d\n",(*pb).price);
//
//     //指针方法2
//     printf("%s\n",pb->name);
//     printf("%d\n",pb->price);//->指向符号
//
//     //正常描述
//     printf("书名=%s\n",b1.name);//%s输入一行字符串
//     printf("价格=%d\n",b1.price);
//     b1.price=15;
//     printf("修改后的价格:%d\n",b1.price);
//     strcpy(b1.name,"海底两万里");
//     printf("%s\n",b1.name);
//     //如果要修改name名字需要使用函数strcpy-string copy -字符串拷贝-库函数-string.h；
//     return 0;
//
// }
//





// int main()
// {
//     //32位即4g内存地址为4个字节；64位即8g内存为8个字节。
//    printf("%d\n",sizeof(char*));//4
//    printf("%d\n",sizeof(int*));//4
//    printf("%d\n",sizeof(short*));//4
//    printf("%d\n",sizeof(double*));//4
//     return 0;
// }

// int main()
// {
//     char ch;
//     while((ch=getchar())!='#')
//     {
//         putchar(ch);
//         ch=getchar();
//     }
//     return 0;
// }
// int main()   //指针！！！！！！！！！！！！！！！！！！！！！！！！！
// {
//     int a=10;//四个字节
//     int* p=&a;//取地址a //有一种变量是用来存放地址的——指针变量，类型为（类型）*，例：整形int*，字符型char*
//     printf("%p\n",&a);//%p 计算地址在哪里,计算出来的地址为16进制数；
//     printf("%p\n",p);
//     *p=20;//*为解引用操作符，通过地址找到a，并且将a的值改为20；
//     printf("%d\n",a);
//     char ch='w';
//     char* pc=&ch;
//     *pc='a';
//     printf("%c\n",ch);
//     printf("%d\n",sizeof(short int*));
//     return 0;
//
// }


//define 用法
//// #define max 100
// //define 定义一个标识符常量格式
//   //将max定义为100，只要遇到max就被赋值为100；
// int main()
// {
//
//     int a=max;
//     printf("%d",a);
//     return 0;
// }
// //函数的声明
// int Max (int y,int x)
// {
//     if(x>y)
//        return x;
//     else
//        return y;
// }
// //宏的定义
// #define MAX(X,Y) (X>Y?X:Y)
// int main()
// {
//     int a=10;
//     int b=20;
//     //函数的定义方式
//     int max=Max(a,b);
//     printf("max=%d\n",max);
//
//     //宏的定义方式
//     max=MAX(a,b);
//     //max(a>b?a:b);
//     printf("max=%d\n",max);
//     return 0;
// }
// extern int add(int,int);
// int main()
// {
//      int a=10;
//      int b=20;
//      int sum=add(a,b);
//      printf("sun=%d\n",sum);
//                            //static 修饰函数,也是改变了函数作用域——不准确
//     return 0;              //改变了函数的链接属性；没有被static修饰的函数一般聚义外部链接属性；修饰的变为内部链接属性；
// }
// int main()
// {
//     extern int a;  //exster 声明外部函数的；
//    printf("%d\n",a);
//     return 0;
// }
// void test();
// int main()
// {
//     int i=0;
//     while(i<5)
//     {
//         test();
//         i++;
//     }
//     return 0;
// }                 //stadic 修饰全局变量改变作用域；让静态的全局变量只能在自己的源文件中使用；出了源文件就没法在使用了。
// void test()      //stadic 修饰局部变量；
//                  //局部变量生命周期变长；
// {
//    static int a=1;//static 将a变为一个静态的局部变量；
//     a++;
//     printf("a=%d\n",a);
// }

//typedef 用法
// int main()
// {
//     //typedef -类型定义-类型重定义；相当于一个改名卡
//     typedef unsigned int u_int ;
//     unsigned int a=20;
//     u_int b=20;
//     printf("%d %d\n",a,b);
//     return 0;
// }
// int main()
// {
//    register int a=10;//建议把a放在寄存器里边，主要取决于编译器；
//    a=-2;//int定义的是一个有符号的变量
//    //int其实是 signed int 其中signed被省略掉了；
//    unsigned int num=-1;//unsigned int 定义一个无符号数，该数永远为正数；
//    printf("%d",num);
//     return 0;
// }
// int main()
// {  int a=20,b=20;
//    int max=0;
//    max=a>b?a:b;
//    printf("max=%d\n",max);
//     return 0;
// }
// int main()
// {   int a=3, b=5,e=0;//非零为真，0为假
//     int c=a&&e;
//     int d=a||e;
//     printf("%d %d\n",c,d);
//     return 0;
// }
//int main()
//{
//    int a=(int)3.14;//（类型）强制转换；
//    printf("%d\n",a);
//    return 0;
//}


//int main()

//{
//    int a=10;
//    int b=a++;
//    int c=++a;
//    printf("%d %d %d\n",a,b,c);
//    return 0;
//}
//// int main()
// {
//     int a=0;
//     int b=~a;//~按位（二进制位）取反；
//     printf("%d\n",b);
//     return 0;
// }
// int main()
// {
//     int i,n,j,a;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//\n
//     {
//         for(j=1;j<=i;j++)
//         {
//
//             printf("%d ",j);
//
//
//         }
//         printf("\n");
//     }
//     return 0;
// }
//
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     if(n%2==0)
//        printf("能被2整除 ");
//     if (n%3==0)
//        printf("能被3整除 ");
//     if(n%5==0)
//        printf("能被5整除 ");
//     return 0;
// }
//int main()
//{
//    int a,b,c,t;
//    scanf("%d%d%d",&a,&b,&c,&t);
//    if(a<b)
//    {   t=a;
//        a=b;
//        b=t;
//    }
//    if(a<c)
//    {
//        t=c;
//        c=a;
//        a=t;
//    }
//    if(b<c)
//    {
//        t=c;
//        c=b;
//        b=t;
//    }
//    printf("%d %d %d\n",a,b,c);
//    return 0;
//}
//int main()
//{
//    double a;
//    scanf("%lf",&a);
//    if(a<300)
//        printf("1.00 %.2lf",a);
//    else if(300<=a&&a<=500)
//        printf("0.90 %.2lf",a*0.90);
//    else if(500<a&&a<800)
//        printf("0.70 %.2lf",a*0.70);
//    else
//        printf("0.50 %.2lf",a*0.50);
//    return 0;
//}
//
// int main()
// {  double a,b,c;
//    scanf("%lf%lf%lf",&a,&b,&c);
//    if(a+b>c&&a+c>b&&b+c>a)
//           printf("yes");
//    else
//           printf("no");
//    return 0;
// }
//int main()
//{
//    double r,s,c;
//    double n=3.14;
//    scanf("%lf",&r);
//    s=n*pow(r,2);
//    c=2*n*r;
//    printf("r=%.2lf s=%.2lf c=%.2lf\n",r,s,c);
//
//    return 0;
//}
////int main()
////{
////    int a,b=0,c=0,d=0,i,f;
//    printf("学生人数：");
//    scanf("%d",&a);
//    printf("输入%d个学生分数：",a);
//    for (i=1;i<=a;i++)
//    {   scanf("%d",&f);
//        if(f<=60)
//            b++;
//        else if(60<f&&f<=70)
//            c++;
//        else
//            d++;
//    }
//   printf("b=%d ,c=%d , d=%d\n",b,c,d);
//
//    return 0;
//}
//int main()
//{
//    int a,b;
//    printf("输入年份和月数：");
//    scanf("%d%d",&a,&b);
//    switch(b)
//    {
//        case 1: case 3: case 5:case 7:case 8:case 10:case 12: printf("31");break;
//
//        case 2: printf("28");break;
//
//        case 4:case 6: case 9:case 11: printf("30");break;
//
//    }
//    return 0;
//}
//int main()
//{
//    int i,n,m,j,k;
//    scanf("%d%d",&m,&n);
//    for(i=n;i>0;i--)
//
//    {
//        for(j=i-1;j>0;j--)
//        {
//            printf("%c",' ');
//        }
//        for(k=1;k<=m;k++)
//        {
//            printf("%c",'*');
//        }
//            printf("\n");
//    }
//
//    return 0;
//}
//
//int main()
//{   int arr1[10]={0};
//    char arr2[10]={'a'};
//    int b,sz;
//    char ch;
//    sz=sizeof(arr1)/sizeof(arr(0));
//    printf("sz=%d\n",sz);
//    printf("%d\n",sizeof (arr1));
//    printf("%d\n",sizeof(arr2));
//    printf("%d\n",sizeof b);
//    printf("%d\n",sizeof(char));
//
//    return 0;
//}
//
//int main ()
//{
//    int a=3,c;//二进制为011
//    int b=5;//二进制为101
//    c=a&b;
//    printf("%d\n",c);
//    printf("%d\n",a|b);
//    printf("%d\n",a^b);
//    return 0;
//}

//
//int main ()
////
//
//int main()
//{
//
//    int a=0;
//    scanf("%d",&a);
//    while(a<=180721)
//    {
//        printf("陈嘉利我爱你一生一世！！！(%d)\n",a);
//        a++;
//    }
//    return 0;
//}
//#include <math.h>
//
//int main()
//{   int a;
//
//   printf("请表达你是否爱陈嘉利：");
//   scanf("%d",&a);
//   if(a==520)
//       printf("你爱陈嘉利！！！\n");
//   else if(a==5201314)
//       printf("一辈子爱陈嘉利\n");
//   else
//       printf("还是爱你\n");
//    return 0;
//}
//
//

//
//
////int even (int n);
////
//int main()
//{  int sum,n,i;
//   printf("请输入一批正整数：");
//   scanf("%d",&n);
//  while(n>0)
//  {
//     if(even(n)==0)
//     {
//         sum=sum+n;
//     }
//     scanf("%d",&n);
//  }
//
//  printf("sum=%d\n",sum);
//
//
//
//    return 0;
//}
//
//  int even (int n)
//  {
//      if(n%2==0)
//         return 1;
//      else if(n%2!=0)
//        return 0;
//
//  }






//
//int is (int m,int n);
//
//int main()
//{   int sum,m,n;
//    printf("enter m(1<=m) and n(n<=1000) :");
//    scanf("%d%d",&m,&n);
//    sum=is(m,n);
//    printf("sum=%d\n",sum);
//
//
//    return 0;
//}
//int is(int m,int n)
//{   int i,b,c,d,e=0;
//    for(i=m;i<=n;i++)
// {      b=i%10;
//        c=i/100;
//        d=i/10%10;
//        if(i==pow(b,3)+pow(c,3)+pow(d,3))
//        e++;
//
// }
//    return e;
//}
//
////int main()
////{int i;
////scanf("%d",&i);
////   switch(i)
////   {
////       case 1 :printf("%c\n",'\x31');break;
////   }
////
////
////    return 0;
////}
//
//
//
//
//
//
//
////
////int main()
////{
////     int i=0;
////     while(i<20000)
////     {
////         printf("打一行代码%d\n",i);
////         i++;
////     }
////     if (i>=20000)
////     {
////         printf("你是最棒的");
////     }
////
////    return 0;
////}
//
//
//
//
//
//

//
//int main()
//{
//    int i=0;
//    char arr1[]="abc";
////    char arr2[]={'a','b','c','\0'};
//    while(i<5)
//    {
//        printf("%c ",arr2[i]);
//        i++;
//    }
//
//    printf("%d\n",strlen(arr1));
//    printf("%d\n",strlen("c:\test\32\test.c"));
//    printf("%c\n",'\x61');
//    printf("%c\n",arr2[1])
//    return 0;
//}
