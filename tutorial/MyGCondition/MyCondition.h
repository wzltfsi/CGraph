/***************************
@Author: Chunel
@Contact: chunel@foxmail.com
@File: MyCondition.h
@Time: 2021/6/19 10:17 下午
@Desc: 
***************************/

#ifndef CGRAPH_MYCONDITION_H
#define CGRAPH_MYCONDITION_H

#include "../../src/CGraph.h"

class MyCondition : public CGraph::GCondition {

public:
 
    // 计算需要返回第n个信息 ,  执行最后一个，返回-1即可。 超出-1和size之间的范围，则不执行
    // 表示在condition中，需要执行第几个。 0表示第0个；1表示第1个；以此类推, -1 表示最后一个, 其中，CIndex is for [int]
    CIndex choose () override {
        return 1;
    }
};

#endif // CGRAPH_MYCONDITION_H
