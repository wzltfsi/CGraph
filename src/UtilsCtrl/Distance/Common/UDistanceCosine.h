/***************************
@Author: Chunel
@Contact: chunel@foxmail.com
@File: UDistanceCosine.h
@Time: 2022/4/3 00:33
@Desc: cosine距离
***************************/

#ifndef CGRAPH_UDISTANCECOSINE_H
#define CGRAPH_UDISTANCECOSINE_H

#include "../UDistance.h"

CGRAPH_NAMESPACE_BEGIN

template<typename TSrc, typename TRes = TSrc>
class UDistanceCosine : public UDistance<TSrc, TRes> {
public:
    CStatus calc(const TSrc* v1, const TSrc* v2, CSize dim1, CSize dim2, TRes& result, CVoidPtr ext) override {
        CGRAPH_FUNCTION_BEGIN

        result = 0;     // 先清空
        TSrc val1 = 0;    // 用于记录vec1的长度
        TSrc val2 = 0;
        for (CSize i = 0; i < dim1; i++) {
            result += (v1[i] * v2[i]);
            val1   += (v1[i] * v1[i]);
            val2   += (v2[i] * v2[i]);
        }

        result = result / (std::sqrt(val1) * std::sqrt(val2));
        CGRAPH_FUNCTION_END
    }
};

CGRAPH_NAMESPACE_END

#endif //CGRAPH_UDISTANCECOSINE_H
