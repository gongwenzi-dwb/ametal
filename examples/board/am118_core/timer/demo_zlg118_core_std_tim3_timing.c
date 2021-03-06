/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief TIM3 定时器 TIMING 例程，通过标准接口实现
 *
 * - 实验现象：
 *   1. LED0 以 5Hz 的频率翻转。(计数周期是10Hz，led翻转周期为10/2=5Hz)
 *
 * \par 源代码
 * \snippet demo_zlg118_std_tim3_timing.c src_zlg118_std_tim3_timing
 *
 * \internal
 * \par Modification history
 * - 1.00 19-09-23  zp, first implementation
 * \endinternal
 */

/**
 * \addtogroup demo_if_zlg118_std_tim3_timing
 * \copydoc demo_zlg118_std_tim3_timing.c
 */

/** [src_zlg118_std_tim3_timing] */

#include "ametal.h"
#include "am_vdebug.h"
#include "demo_std_entries.h"
#include "am_zlg118_inst_init.h"
#include "demo_am118_core_entries.h"

/**
 * \brief 例程入口
 */
void demo_zlg118_core_std_tim3_timing_entry (void)
{
    AM_DBG_INFO("demo am118_core std tim3 timing!\r\n");

    demo_std_timer_timing_entry(am_zlg118_tim3_timing_inst_init(), 0);
}
/** [src_zlg118_std_tim3_timing] */

/* end of file */
