//
//  main.c
//  C-Learn
//
//  Created by Keven on 2020/3/23.
//  Copyright © 2020 YunQue. All rights reserved.
//

#include <stdio.h>
#define Lower  0
#define Upper   300
#define Step 20 /**步长*/
#define IN 1
#define OUT 0
void test123(void);
void testIsNum(void);
void testCountAny(void);
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    /**当fahr=0,20, ...,300时，分别打印华氏温度与摄氏温度对照表*/
    float fathr,celsius;
    fathr = Lower;
    printf("华氏温度\t 摄氏温度\n");
    //    while (fathr <= upper) {
    //        celsius = (5.0 /9.0) * (fathr-32);
    //        printf("%3.0f\t%6.1f\n",fathr,celsius);
    //        fathr = fathr + step;
    //    }
    /**for 循环*/
//    for (fathr = 0; fathr <= 300; fathr =fathr +20) {
//        celsius = (5.0 /9.0) * (fathr-32);
//        printf("%3.0f\t%6.1f\n",fathr,celsius);
//    }
    /**practice*/
    for (fathr = Upper; fathr >= Lower; fathr =fathr - Step) {
           celsius = (5.0 /9.0) * (fathr-32);
           printf("%3.0f\t%6.1f\n",fathr,celsius);
       }
    /**摄氏温度转华氏温度*/
    //    celsius = -6.7;
    //    fathr = (celsius * 9.0 / 5.0)+ 32;
    //    printf("%3.0f\t%6.1f\n",fathr,celsius);
    //    return 0;
    /**getchar 与 putchar*/
    int c;
//    while ((c = getchar())!= EOF) {//true
////          while (c = getchar() != EOF) { //false
////      while (c = (getchar()!= EOF)) {//false
//        putchar(c);
//        c= getchar();
//    }
/**打印EOF*/
    printf("%d\n",EOF);
    /**统计字符长度*/
//    long nc = 0;
//    while (getchar()!=EOF) {
//        ++nc;
//        printf("%ld\n",nc);
//    }
//    double nc;
//    for (nc =0; getchar()!= EOF; ++nc) {
//        printf("%.0f\n",nc);
//    }
//    test123();
//    testIsNum();
    testCountAny();
    
}
void test123(){
    printf("test123===统计行数，单词数，字符数\n");
    int c,n1,nw,nc,state;
    state = OUT;
    n1 = nw = nc =0;
    while ((c = getchar())!=EOF) {
     
         putchar(c);
        nc++;//统计字符
        if (c == '\n') {
            ++n1;
        }
        if (c == ' '|| c == '\t' || c == '\n') {
            state = OUT;
        }else if (state ==OUT){
            state = IN;
            ++nw;//统计单词数
            putchar(c);
        }
    }
    printf("%d %d %d \n",n1,nw,nc);
    char a = '9';
    int x = (int)(a - '0');
    printf("%d",x);

}
/**判断输入的是数字*/
void testIsNum(){
    int c;
    while ((c = getchar())!=EOF) {
        if (c>= '0' && c <= '9') {
            printf("你输入的是:%d\n",c-'0');
        }
    }
}
/**统计各个数字,空白符（包括空格符，制表符以及换行符）的出现次数*/
void testCountAny(){
    int c,i,nwhite,nother;
    int ndigit[10];
    nwhite = nother = 0;
    for (i = 0; i<10; i++) {
        ndigit[i] = 0;
    }
    while ((c = getchar())!=EOF) {
        if (c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }
    printf("digits ==");
    for (i = 0; i<10; i++) {
        printf(" %d",ndigit[i]);
    }
    printf(",white space = %d,other = %d\n",nwhite,nother);
}
