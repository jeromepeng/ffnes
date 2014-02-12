#ifndef _NES_APU_H_
#define _NES_APU_H_

// 包含头文件
#include "stdefine.h"

// 类型定义
typedef struct {
    BYTE reserved;
} APU;

// 函数声明
void apu_init (APU *apu);
void apu_reset(APU *apu);

#endif

