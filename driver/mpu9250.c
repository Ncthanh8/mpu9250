/**
 * @file mpu9250.c
 * @author NgxTh
 * @brief 
 * @version 0.1
 * @date 2026-06-20
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/i2c.h>
#include <linux/fcntl.h>
#include <linux/uaccess.h>
#include <linux/device.h>
#include <linux/slab.h>
 
#include "mpu9250_reg.h"

#define IMU_NAME        "mpu9250"
#define CLASS_NAME      "mpu9250"
#define DRV_VERSION     "V1.0.0"


#define MAX_VAL (s16)(((2 << 15) - 1 ))
#define MIX_VAL (s16)((-MAX_VAL) - 1)

#define CLR_BIT(val, pos) ((val) &= ~(1U << (pos)))
#define SET_BIT(val, pos) ((val) |= (1U << (pos)))

static struct i2c_client *i2c_client_dev;


static int i2c_write(u8 reg, u8 data){

} 

static int i2c_read(u8 reg, u8 *data){

}

static int i2c_set_bit(u8 reg, u8 pos, u8 bVal){

}

static int i2c_get_bit(u8 reg, u8 pos, u8 *bVal){

}


/**************************************************************************************/

static int mpu9250_set_accel_scale(int scale){

}

static int mpu9250_set_odr(int odr){

}

static int mpu9250_set_pwr_mode(int pwr_mode){

}

static int mpu9250_set_axis_disable(int axis, bool disable){
    
}