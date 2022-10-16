#include    <stdio.h>
#include    <string.h>
#include    <math.h>

//int main()
//{
//    int a[10];
//    a[10]={1,9,1,0,8,1,0};
//    for(int i=0;i<10;i++) printf("%d ",a[i]);
//    return 0;
//}
//一维数组的输入输出
//1 2 3 4 5 6 7 8 9 10
//int main(void)
//{
//    int a[10]={0};
//    for(int i=0;i<=9;i++) scanf("%d",&a[i]);
////    for(int i=0;i<=9;i++) scanf("%d",a+i);
//    for(int i=0;i<=9;i++) printf("%d ",a[i]);
//    return 0;
//}

//二维数组的输入输出
//1 2 3 4 5 6 7 8 9 10 11 12
//int main(void)
//{
//    int a[3][4];    //3行（0-2）4列（0-3）
//    for(int i=0;i<3;i++)
//        for(int j=0;j<4;j++)
//            scanf("%d",&a[i][j]);
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            printf("%d ",a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//冒泡排序
//冒泡排序两两比较的元素是没有被排序过的元素--->
//int main()
//{
//    int array[10]={9,4,2,1,3,5,7,6,10,8};
//    for(int i=0;i<9;i++){//控制比较轮次，一共 n-1 趟
//        for(int j=0;j<9-i;j++)
//        {//控制两个挨着的元素进行比较
//            if(array[j] > array[j+1])
//            {
//                //若当前元素比后一个元素大，则将两个元素交换位置
//                int temp = array[j];
//                array[j] = array[j+1];
//                array[j+1] = temp;
//            }
//        }
//    }
//    for(int i=0;i<=9;i++) printf("%d ",array[i]);   //输出结果
//    return 0;
//}
///*
////例9.4
//int main()
//{
//    int i,j;
//    float sum;
//    float score[3][5];     /*存储成绩*/
//    float courseAverage[3];   /*存储每门课程平均成绩*/
//    /*输入成绩*/
//    for(i=0;i<3;i++)
//        for (j=0; j < 5; j++)
//            scanf("%f", &score[i][j]);
//
//    /*输出成绩表*/
//
//    for(i=0;i<3;i++)
//    {
//        for (j = 0; j < 5; j++)
//            printf("%f\t", score[i][j]);
//        printf("\n");
//    }
//
//    for(j=0;j<5;j++)
//        for(i=0;i<3;i++)
//        {
//            sum=0;             /*计算每门课程平均成绩前sum置0*/
//            for(j=0;j<5;j++)   /*行内每列循环，计算一行中每列的和*/
//                sum+=score[i][j];
//            courseAverage[i]=sum/5;
//        }
//    /*输出成绩表*/
//    for(i=0;i<3;i++)
//        printf("%f\t",courseAverage[i]);
//    return 0;
//}



//字符串的直接定义
//int main()
//{
//    char p[] ="123456"; //可以修改的形式
////    char *p ="123456" //不可修改的形式
//    p[0]='s';
//    printf("%s",p);
//    return 0;
//}

//字符数组长度和字符串长度
//int main()
//{
////    char str[20]="TEST";
//    char str[20]="abc\228\n\\\'\"";
//    printf("字符数组长度：%d\n",(int)(sizeof(str)/sizeof(char)));
//    printf("字符串长度：%d", (int)strlen(str));
//    return 0;
//}

//strstr函数实例
//int main(){
//    char a[] = "abcdefg";
//    char b[] = "bc";
//    char* ret = strstr(a, b);
//    if (ret == NULL)
//    {
//        printf("Can not find!\n");
//    }
//    else
//    {
//        printf("%s\n", ret);  //输出 bcdefg
//    }
//    return 0;
//}

//进制转换
int main()
{
    int a=0;
    char str[1001]={0};
    scanf("%d %s",&a,str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]!=48)
        {
            if(i != 0) printf("+");
            printf("%d*%d^%d",str[i]-48,a, strlen(str)-i-1);
        }
    }
    return 0;
}
//2 10101