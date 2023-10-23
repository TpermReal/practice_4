//
// Created by 86187 on 2023/10/23.
//

#include "class.h"
#include<bits/stdc++.h>

using namespace std;

//定义构造函数
CStudent::CStudent() {
    mCount++;
    sprintf(mNo, "1728%04d", mCount);
    mpName = nullptr;
    for (int i = 0; i < 5; i++) mScore[i] = 0;
}

// 拷贝构造函数
CStudent::CStudent(const CStudent &zS) {
    strcpy(mNo, zS.mNo);
    mpName = new char[strlen(zS.mpName) + 1];
    strcpy(mpName, zS.mpName);
    for (int i = 0; i < 5; i++) mScore[i] = zS.mScore[i];
}

// 析构函数
CStudent::~CStudent() {
    delete[] mpName;
}

// 学生对象（学号姓名成绩）设置操作函数
void CStudent::SetStudent(const char* name, const int scores[5]) {
    mpName = new char[strlen(name) + 1];
    strcpy(mpName, name);
    for(int i=0; i<5; i++) mScore[i] = scores[i];
}

// 学生对象显示操作函数
void CStudent::ShowStudent() const {
    std::cout << "Student ID: " << mNo << "\n";
    std::cout << "Name: " << mpName << "\n";
    std::cout << "Scores: ";
    for(int i=0; i<5; i++) std::cout << mScore[i] << " ";
    std::cout << "\n";
}

// 学生成绩比较函数
void CStudent::CompareScore(const CStudent &zS) const {
    int thisTotal = 0, otherTotal = 0;
    for(int i=0; i<5; i++) {
        thisTotal += mScore[i];
        otherTotal += zS.mScore[i];
    }
    if(thisTotal > otherTotal) std::cout << mpName << " scored higher overall.\n";
    else if(thisTotal < otherTotal) std::cout << zS.mpName << " scored higher overall.\n";
    else std::cout << "Both students scored equal overall.\n";
}

int CStudent::mCount = 0;  // 初始化 static 成员变量