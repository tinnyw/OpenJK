
#ifndef __B_SHOOTDODGE_H__
#define __B_SHOOTDODGE_H__

#include "g_local.h"

// shoot dodge dependencies
qboolean PM_InShootDodge(playerState_t* ps);
qboolean PM_InShootDodgeInAir(playerState_t* ps);
qboolean PM_InShootDodgeOnGround(playerState_t* ps);
qboolean PM_IsShootdodgeWeapon(int weapon);

// bg_angles tells bg_pmove that the appropriate buttons are pressed for diving from running on walls
extern qboolean canShootDodgeFromWallrun;

// SHOOT DODGE GENERAL
#define SHOOT_DODGE_TIME_DILATION .1f//.07f
#define SHOOT_DODGE_FIRE_RATE_REDUCTION .4f
#define SHOOT_DODGE_PROJECTILE_SPEED_MULTIPLIER 1.7f


// SHOOT DODGE ANIMATIONS
#define SHOOT_DODGE_ANIMATION_BLEND_TIME 200
// rate at which to turn into one shoot dodge animation to another instead of being strictly 90 off and robotic
#define SHOOT_DODGE_CLIENT_TURN_RATE (90.0f / 500.0f)


// WP_BRYAR_PISTOL
#define SHOOT_DODGE_BRYAR_CHARGE_REDUCTION 0.3f;


// WP_BLASTER
#define SHOOT_DODGE_BLASTER_DAMAGE_MULTIPLIER 1.7f
#define SHOOT_DODGE_BLASTER_PROJECTILE_CLIENT_OFFSET -200.0f
#define SHOOT_DODGE_SPREAD_MULTIPLIER .4f


// WP_TENLOSS
#define SHOOT_DODGE_TENLOSS_CHARGE_REDUCTION SHOOT_DODGE_TIME_DILATION;


// WP_DEMP
#define SHOOT_DODGE_DEMP_CHARGE_REDUCTION SHOOT_DODGE_TIME_DILATION * .35f;




#endif// #ifndef __B_SHOOTDODGE_H__