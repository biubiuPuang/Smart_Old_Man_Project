#ifndef __INT_QS100_H__
#define __INT_QS100_H__

#include "usart.h"
#include "Com_debug.h"
#include "stdlib.h"
#define QS100_DATA_MAX_LEN 512
#define QS100_BUFF_SIZE 1024
#define QS100_MAX_RECV_COUNTS 5

#define QS100_SEQUENCE_ID 1

// 连接的云服务器地址
#define SERVER_IP "112.125.89.8"
#define SERVER_PORT 33034

typedef enum
{
    IOT_OK = 0,
    IOT_ERROR,
}IOT_Status;

/**
 * @brief 初始化qs100
 *
 * @return 
 */
void Int_qs100_init(void);

/**
 * @brief 查询芯片的附着状态 判断是否能够连接外网
 *
 * @return 
 */
IOT_Status Int_qs100_get_ip(void);

/**
 * @brief 打开 socket
 *
 * @return IOT_Status
 */
IOT_Status Int_qs100_open_socket(uint8_t *soket_num);

/**
 * @brief 连接外网TCP云服务器
 * https://netlab.luatos.com/
 * @return IOT_Status
 */
IOT_Status Int_qs100_connect_server(uint8_t socket_num);

/**
 * @brief 
 *
 * @param socket_num
 * @param data
 * @param len
 * @return IOT_Status
 */
IOT_Status Int_qs100_send(uint8_t socket_num,uint8_t *data, uint8_t len);

/**
 * @brief 使用外网发送消息到云服务器
 *
 * @param msg
 * @param len
 * @return 
 */
IOT_Status Int_qs100_send_msg(uint8_t *msg, uint16_t len);

#endif /* __INT_QS100_ */

