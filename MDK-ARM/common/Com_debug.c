#include "Com_debug.h"
// printf的debug重定义 输出报错代码的行号和文件名

// 编写重定向方法
int  fputc(int ch, FILE *f)
{
    // printf底层调用fputc 针对每一个字节调用一次fputc
    HAL_UART_Transmit(&huart1, (uint8_t *)&ch, 1, 0xFFFF);
    return ch;
}
