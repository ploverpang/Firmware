/*
 * @Author: PangBo 
 * @Date: 2018-05-11 14:40:51 
 * @Last Modified by: PangBo
 * @Last Modified time: 2018-05-11 15:35:30
 */

#include <px4_log.h>
#include <px4_config.h>
#include <px4_tasks.h>
#include <px4_posix.h>

__EXPORT  int my_test_app_main(int argc, char *argv[]);

int my_test_app_main(int argc, char* argv[])
{
    PX4_INFO("Hello SKY!");
    return 0;
}