 #include <stdio.h>
 #include <string.h>
//
// //�ṹ�壡����������������������������������������������������������������������������������������������������������������
// //ѧϰ��char int double ������ôȥ����һ���˰���
// //��=����+���+����+���֤����+����....
// //��=����+�۸�+������+....
// //���Ӷ���-�ṹ��-�����Լ����������һ������
// //����һ���ṹ������
// struct Book  //struct �ṹ��ؼ��֣�
// {
//     char name[20];//����һ�����֣�C���Գ������
//     int price;//����һ���۸�55
// };//�ֺű�ʾһ���ṹ�����
//
// int main()
// {
//     //���ýṹ�����ʹ���һ���ṹ�����
//     struct Book b1={"C���Գ������",55};
//     //.  �ṹ�����.��Ա
//     //->  �ṹ��ָ��->��Ա
//     //ָ��ķ�ʽ1�����ӣ�
//     struct Book* pb=&b1;  //���ɿ���ʹ��ָ���ӡ������
//     printf("%s\n",(*pb).name);
//     printf("%d\n",(*pb).price);
//
//     //ָ�뷽��2
//     printf("%s\n",pb->name);
//     printf("%d\n",pb->price);//->ָ�����
//
//     //��������
//     printf("����=%s\n",b1.name);//%s����һ���ַ���
//     printf("�۸�=%d\n",b1.price);
//     b1.price=15;
//     printf("�޸ĺ�ļ۸�:%d\n",b1.price);
//     strcpy(b1.name,"����������");
//     printf("%s\n",b1.name);
//     //���Ҫ�޸�name������Ҫʹ�ú���strcpy-string copy -�ַ�������-�⺯��-string.h��
//     return 0;
//
// }
//





// int main()
// {
//     //32λ��4g�ڴ��ַΪ4���ֽڣ�64λ��8g�ڴ�Ϊ8���ֽڡ�
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
// int main()   //ָ�룡������������������������������������������������
// {
//     int a=10;//�ĸ��ֽ�
//     int* p=&a;//ȡ��ַa //��һ�ֱ�����������ŵ�ַ�ġ���ָ�����������Ϊ�����ͣ�*����������int*���ַ���char*
//     printf("%p\n",&a);//%p �����ַ������,��������ĵ�ַΪ16��������
//     printf("%p\n",p);
//     *p=20;//*Ϊ�����ò�������ͨ����ַ�ҵ�a�����ҽ�a��ֵ��Ϊ20��
//     printf("%d\n",a);
//     char ch='w';
//     char* pc=&ch;
//     *pc='a';
//     printf("%c\n",ch);
//     printf("%d\n",sizeof(short int*));
//     return 0;
//
// }


//define �÷�
//// #define max 100
// //define ����һ����ʶ��������ʽ
//   //��max����Ϊ100��ֻҪ����max�ͱ���ֵΪ100��
// int main()
// {
//
//     int a=max;
//     printf("%d",a);
//     return 0;
// }
// //����������
// int Max (int y,int x)
// {
//     if(x>y)
//        return x;
//     else
//        return y;
// }
// //��Ķ���
// #define MAX(X,Y) (X>Y?X:Y)
// int main()
// {
//     int a=10;
//     int b=20;
//     //�����Ķ��巽ʽ
//     int max=Max(a,b);
//     printf("max=%d\n",max);
//
//     //��Ķ��巽ʽ
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
//                            //static ���κ���,Ҳ�Ǹı��˺��������򡪡���׼ȷ
//     return 0;              //�ı��˺������������ԣ�û�б�static���εĺ���һ������ⲿ�������ԣ����εı�Ϊ�ڲ��������ԣ�
// }
// int main()
// {
//     extern int a;  //exster �����ⲿ�����ģ�
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
// }                 //stadic ����ȫ�ֱ����ı��������þ�̬��ȫ�ֱ���ֻ�����Լ���Դ�ļ���ʹ�ã�����Դ�ļ���û����ʹ���ˡ�
// void test()      //stadic ���ξֲ�������
//                  //�ֲ������������ڱ䳤��
// {
//    static int a=1;//static ��a��Ϊһ����̬�ľֲ�������
//     a++;
//     printf("a=%d\n",a);
// }

//typedef �÷�
// int main()
// {
//     //typedef -���Ͷ���-�����ض��壻�൱��һ��������
//     typedef unsigned int u_int ;
//     unsigned int a=20;
//     u_int b=20;
//     printf("%d %d\n",a,b);
//     return 0;
// }
// int main()
// {
//    register int a=10;//�����a���ڼĴ�����ߣ���Ҫȡ���ڱ�������
//    a=-2;//int�������һ���з��ŵı���
//    //int��ʵ�� signed int ����signed��ʡ�Ե��ˣ�
//    unsigned int num=-1;//unsigned int ����һ���޷�������������ԶΪ������
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
// {   int a=3, b=5,e=0;//����Ϊ�棬0Ϊ��
//     int c=a&&e;
//     int d=a||e;
//     printf("%d %d\n",c,d);
//     return 0;
// }
//int main()
//{
//    int a=(int)3.14;//�����ͣ�ǿ��ת����
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
//     int b=~a;//~��λ��������λ��ȡ����
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
//        printf("�ܱ�2���� ");
//     if (n%3==0)
//        printf("�ܱ�3���� ");
//     if(n%5==0)
//        printf("�ܱ�5���� ");
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
//    printf("ѧ��������");
//    scanf("%d",&a);
//    printf("����%d��ѧ��������",a);
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
//    printf("������ݺ�������");
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
//    int a=3,c;//������Ϊ011
//    int b=5;//������Ϊ101
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
//        printf("�¼����Ұ���һ��һ��������(%d)\n",a);
//        a++;
//    }
//    return 0;
//}
//#include <math.h>
//
//int main()
//{   int a;
//
//   printf("�������Ƿ񰮳¼�����");
//   scanf("%d",&a);
//   if(a==520)
//       printf("�㰮�¼���������\n");
//   else if(a==5201314)
//       printf("һ���Ӱ��¼���\n");
//   else
//       printf("���ǰ���\n");
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
//   printf("������һ����������");
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
////         printf("��һ�д���%d\n",i);
////         i++;
////     }
////     if (i>=20000)
////     {
////         printf("���������");
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
