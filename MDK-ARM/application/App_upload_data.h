#ifndef __APP_UPLOAD_DATA_
#define __APP_UPLOAD_DATA_

#include "Int_AT6558R.h"
#include "Int_qs100.h"
#include "Int_llcc68.h"
#include "Int_step.h"
#include "cJSON.h"

/**
 * @brief 初始化上传数据相关代码
 *
 * @return 
 */
void App_Upload_Data_init(void);

 
/**
 * @brief 上传数据 json类型
 *
 * @param 保存数据的结构 GPS_Data gps_data 其余信息使用变量 steps uuid(主控芯片编号 绝对独一无二)
 * @return 
 */
void App_upload_data(uint8_t status);

#endif //__APP_UPLOAD_DATA_

