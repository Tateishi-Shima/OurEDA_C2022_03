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
//һά������������
//1 2 3 4 5 6 7 8 9 10
//int main(void)
//{
//    int a[10]={0};
//    for(int i=0;i<=9;i++) scanf("%d",&a[i]);
////    for(int i=0;i<=9;i++) scanf("%d",a+i);
//    for(int i=0;i<=9;i++) printf("%d ",a[i]);
//    return 0;
//}

//��ά������������
//1 2 3 4 5 6 7 8 9 10 11 12
//int main(void)
//{
//    int a[3][4];    //3�У�0-2��4�У�0-3��
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


//ð������
//ð�����������Ƚϵ�Ԫ����û�б��������Ԫ��--->
//int main()
//{
//    int array[10]={9,4,2,1,3,5,7,6,10,8};
//    for(int i=0;i<9;i++){//���ƱȽ��ִΣ�һ�� n-1 ��
//        for(int j=0;j<9-i;j++)
//        {//�����������ŵ�Ԫ�ؽ��бȽ�
//            if(array[j] > array[j+1])
//            {
//                //����ǰԪ�رȺ�һ��Ԫ�ش�������Ԫ�ؽ���λ��
//                int temp = array[j];
//                array[j] = array[j+1];
//                array[j+1] = temp;
//            }
//        }
//    }
//    for(int i=0;i<=9;i++) printf("%d ",array[i]);   //������
//    return 0;
//}
///*
////��9.4
//int main()
//{
//    int i,j;
//    float sum;
//    float score[3][5];     /*�洢�ɼ�*/
//    float courseAverage[3];   /*�洢ÿ�ſγ�ƽ���ɼ�*/
//    /*����ɼ�*/
//    for(i=0;i<3;i++)
//        for (j=0; j < 5; j++)
//            scanf("%f", &score[i][j]);
//
//    /*����ɼ���*/
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
//            sum=0;             /*����ÿ�ſγ�ƽ���ɼ�ǰsum��0*/
//            for(j=0;j<5;j++)   /*����ÿ��ѭ��������һ����ÿ�еĺ�*/
//                sum+=score[i][j];
//            courseAverage[i]=sum/5;
//        }
//    /*����ɼ���*/
//    for(i=0;i<3;i++)
//        printf("%f\t",courseAverage[i]);
//    return 0;
//}



//�ַ�����ֱ�Ӷ���
//int main()
//{
//    char p[] ="123456"; //�����޸ĵ���ʽ
////    char *p ="123456" //�����޸ĵ���ʽ
//    p[0]='s';
//    printf("%s",p);
//    return 0;
//}

//�ַ����鳤�Ⱥ��ַ�������
//int main()
//{
////    char str[20]="TEST";
//    char str[20]="abc\228\n\\\'\"";
//    printf("�ַ����鳤�ȣ�%d\n",(int)(sizeof(str)/sizeof(char)));
//    printf("�ַ������ȣ�%d", (int)strlen(str));
//    return 0;
//}

//strstr����ʵ��
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
//        printf("%s\n", ret);  //��� bcdefg
//    }
//    return 0;
//}

//����ת��
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