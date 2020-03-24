//
//  main.c
//  C-Learn-day02
//
//  Created by Keven on 2020/3/24.
//  Copyright © 2020 YunQue. All rights reserved.
//

#include <stdio.h>
int power(int m, int n);
void temperature(void);
int getLine(char line[], int maxline);
void copy(char to[],char from[]);
int lower (int m);
void test123(int c);
#define MAXLINE 1000 /**maximum input line length*/
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("函数的使用!\n");
    for (int i = 0; i<10; ++i) {
        printf("%d %d %d\n",i,power(2, i),power(-3, i));
    }
    printf("温度的准换\n");
    temperature();
    printf("获取最长的行\n");
//    int len;/**current line length*/
//    int max;/**maximum length seen sofar*/
//    char line[MAXLINE];/**current input line*/
//    char longest[MAXLINE];/**longest line saved here*/
//    max = 0;
//    while ((len = getLine(line, MAXLINE)) >0) {
//        if (len > max) {
//            max = len;
//            copy(longest, line);
//        }
//        if (max >0) {
//            printf("%s",longest);
//        }
//    }
     printf("char 类型转换 int 类型\n");
    lower(32);
    test123(15);
    return 0;
}
//计算base的n次冥
int power(int base,int n)
{
    //    int i, p;
    //    p = 1;
    //    for (i = 1; i <= n ; ++i)
    //        p = p * base;
    //        return p;
    /**style2*/
    int p;
    for (p = 1; n >0  ; --n)
        p = p * base;
    return p;
}
//practice 温度的转换
void temperature(){
    float fahr,celsius;
    float lower,upper,step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 /9.0)*(fahr-32.0);
        printf("%3.0f,%6.1f\n",fahr,celsius);
        fahr = fahr +step;
    }
}

/// read a line into s, return length
int getLine(char s[], int lim){
    int c = 0,i;
    for (i = 0; i < lim -1 && (c = getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i ;
    
}
void copy(char to[],char from[])
{
    int i ;
    i = 0;
    while ((to[i] = from[i])!= '\0') {
        ++i;
    }
}
/**char 类型转换 int 类型*/
int lower(int c )
{
    if (c >= 'A' && c <='Z') {
        return c + 'a' - 'A';
    }else{
        return c;
    }
}
void test123(int n)
{
       int i;
    char a [15];
    for (i = 0; i<n; i++) {
        a[i] = i;
    }
 
    for (i = 0; i<n; i++) {
//        printf("%6d%c",a[i], (i%10==9 !! i == n-1) ? '\n' : ' ');
    }
}
