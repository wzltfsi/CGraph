/***************************
@Author: Chunel
@Contact: chunel@foxmail.com
@File: GraphManager.h
@Time: 2022/2/1 5:18 下午
@Desc: 
***************************/

#ifndef CGRAPH_GRAPHMANAGER_H
#define CGRAPH_GRAPHMANAGER_H


#include <string>

#include "../CBasic/CBasicInclude.h"

CGRAPH_NAMESPACE_BEGIN

template<typename T,
        std::enable_if_t<std::is_base_of<GraphObject, T>::value, int> = 0>
class GraphManager : public CObject {
protected:
    //  添加一个object
    virtual CStatus add(T* object) {
        CGRAPH_NO_SUPPORT
    }

    // 删除一个object
    virtual CStatus remove(T* object) {
        CGRAPH_NO_SUPPORT
    }

    // 查找一个object
    virtual CBool find(T* object) const {
        return false;
    }

    // 创建一个object
    virtual CStatus create(const std::string& key) {
        CGRAPH_NO_SUPPORT
    }

    //  获取一个object
    virtual T* get(const std::string& key) {
        return nullptr;
    }

    // 重置所有object
    virtual CStatus reset() {
        CGRAPH_NO_SUPPORT
    }

    // 获取大小信息
    [[nodiscard]] virtual CSize getSize() const {
        return 0;
    }

    // 清空所有object，必须实现的内容
    virtual CStatus clear() = 0;

    // 执行函数，默认为执行失败
    CStatus run() override {
        CGRAPH_NO_SUPPORT
    }
};

CGRAPH_NAMESPACE_END

#endif //CGRAPH_GRAPHMANAGER_H
