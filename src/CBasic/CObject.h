/***************************
@Author: Chunel
@Contact: chunel@foxmail.com
@File: CObject.h
@Time: 2021/4/26 8:12 下午
@Desc: 所有类型的父节点，其中run()方法必须实现
***************************/

#ifndef CGRAPH_COBJECT_H
#define CGRAPH_COBJECT_H

#include "CBasicDefine.h"
#include "CValType.h"
#include "CFuncType.h"

CGRAPH_NAMESPACE_BEGIN

class CObject {
public:
  
    explicit CObject() = default;
 
    virtual CStatus init() {
        CGRAPH_EMPTY_FUNCTION
    }

    // 流程处理函数
    virtual CStatus run() = 0;

     //  释放函数（对应原先deinit函数）
    virtual CStatus destroy() {
        CGRAPH_EMPTY_FUNCTION
    }

    virtual ~CObject() = default;
};

CGRAPH_NAMESPACE_END

#endif //CGRAPH_COBJECT_H
