#ifndef _NES_CPU_H_
#define _NES_CPU_H_

// 包含头文件
#include "stdefine.h"
#include "bus.h"

// 类型定义
typedef struct {
    WORD pc;
    BYTE sp;
    BYTE ax;
    BYTE xi;
    BYTE yi;
    BYTE ps;
    long cycles_emu;
    long cycles_real;

// private:
    BUS  cbus;
} CPU;

// 函数声明
void cpu_init (CPU *cpu);
void cpu_reset(CPU *cpu);
void cpu_run  (CPU *cpu, int cycle);

#endif

