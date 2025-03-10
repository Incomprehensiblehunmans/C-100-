//学生信息71.

#include <stdio.h>
#include <stdlib.h>

struct Student {    // 定义结构体
    int num;
    char name[20];
    char sex[5];
    int age;
};

void input(struct Student *stu) {
    printf("请输入学生信息(学号 姓名 性别 年龄)：\n");
    printf("学号：");
    scanf("%d", &stu->num);
    printf("姓名：");
    scanf("%s", stu->name);
    printf("性别：");
    scanf("%s", stu->sex);
    printf("年龄：");
    scanf("%d", &stu->age);
    printf("\n");
}

void output(struct Student *stu) {
    printf("学号：%d\n", stu->num);
    printf("姓名：%s\n", stu->name);
    printf("性别：%s\n", stu->sex);
    printf("年龄：%d\n", stu->age);
    printf("\n");
}

int main() {
    printf("依此输入3名学生信息：\n");
    struct Student stu[3];

    for (int i = 0; i < 3; i++) {
        input(&stu[i]);     // 传入结构体指针
    }

    printf("3名学生信息为：\n");
    for (int i = 0; i < 3; i++) {
        output(&stu[i]);
    }

    return 0;
}