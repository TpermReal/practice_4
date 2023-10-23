//
// Created by 86187 on 2023/10/23.
//

#ifndef PRACTICE_4_CLASS_H
#define PRACTICE_4_CLASS_H
class CStudent{
    char mNo[9]; //学号
    char *mpName; //姓名
    int mScore[5]; //五门功课成绩
    static int mCount; //学生对象计数
public:
    CStudent(); //构造函数
    CStudent(const CStudent& zS); //拷贝构造函数
    ~CStudent(); //析构函数
    void SetStudent(const char* name, const int scores[5]); //学生对象（学号姓名成绩）设置操作函数
    void ShowStudent() const; //学生对象显示操作函数
    void CompareScore(const CStudent &zS) const; //学生成绩比较函数 1
    void CompareScore(const CStudent *pS) const; //学生成绩比较函数 2
};
#endif //PRACTICE_4_CLASS_H
