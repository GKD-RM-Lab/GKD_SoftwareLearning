#ifndef __ROBOT__
#define __ROBOT__
#include "types.hpp"

namespace Robot
{

    struct ins_data
    {
        fp32 y;
        fp32 p;
        fp32 r;
        fp32 y_v;
        fp32 p_v;
        fp32 r_v;
    };
    // robot set header = 0xEA;
    struct Robot_set
    {
        uint8_t header;
        /** chassis_control **/
        fp32 vx_set = 0.f;
        fp32 vy_set = 0.f;
        fp32 wz_set = 0.f;

        /** gimbal_control **/
        fp32 yaw_set = 0.f;
        fp32 pitch_set = 0.f;

        /** shoot_control **/
        bool friction_open = false;
        bool shoot_open = false;

        /** IMU **/
        fp32 ins_yaw = 0.f;
        fp32 ins_pitch = 0.f;
        fp32 ins_roll = 0.f;
        fp32 ins_yaw_v = 0.f;
        fp32 ins_pitch_v = 0.f;
        fp32 ins_roll_v = 0.f;

        /** other **/
        fp32 yaw_relative = 0.f;
        fp32 pitch_relative = 0.f;
		fp32 aimx;
		fp32 aimy;
		fp32 aimz;

		bool is_aiming = false;
        Types::ROBOT_MODE mode = Types::ROBOT_MODE::ROBOT_NO_FORCE;
    } __attribute__((packed));

    // send gimbal package header = 0x5A;
    struct ReceiveGimbalPacket
    {
        /*      自瞄部分     */
        uint8_t header;
        bool tracking : 1;
        uint8_t id : 3;
        uint8_t armors_num : 3;
        uint8_t reserved : 1;
        float x;
        float y;
        float z;
        float yaw;
        float vx;
        float vy;
        float vz;
        float v_yaw;
        float r1;
        float r2;
        float dz;
        /*  决策部分   */

    } __attribute__((packed));

    struct SendGimbalPacket
    {
        uint8_t header = 0x5A;
        uint8_t detect_color : 1;  // 0-red 1-blue
        bool reset_tracker : 1;
        uint8_t reserved : 6;
        float roll;
        float pitch;
        float yaw;
        float aim_x;
        float aim_y;
        float aim_z;
        uint16_t checksum = 0;
    } __attribute__((packed));

    // send twist package heaedr = 0x6A;
    struct Vison_control
    {
        /*       导航部分       */
        uint8_t header;
        // 线速度 m/s
        float linear_vx;
        float linear_vy;
        // 旋转角速度 rad/s
        float angular;
        // 欧拉角
        float yaw_set;
        float pitch_set;

        Types::ROBOT_MODE mode = Types::ROBOT_MODE::ROBOT_NO_FORCE;
    } __attribute__((packed));

    struct SendVisionControl
    {
        uint8_t header = 0xA6;
        float roll;
        float pitch;
        float yaw;
    } __attribute__((packed));


}  // namespace Robot

#endif
