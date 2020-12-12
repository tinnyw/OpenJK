
#ifndef __B_SHOOTDODGE_H__
#define __B_SHOOTDODGE_H__

#include "g_local.h"

// shoot dodge dependencies
extern qboolean PM_InShootDodge(playerState_t* ps);
extern qboolean PM_InShootDodgeInAir(playerState_t* ps);
extern qboolean PM_InShootDodgeOnGround(playerState_t* ps);
extern qboolean PM_IsShootdodgeWeapon(int weapon);


// SHOOT DODGE GENERAL
#define SHOOT_DODGE_TIME_DILATION .07f
#define SHOOT_DODGE_FIRE_RATE_REDUCTION .4f
#define SHOOT_DODGE_PROJECTILE_SPEED_MULTIPLIER 1.7f


// WP_BRYAR_PISTOL
#define SHOOT_DODGE_BRYAR_CHARGE_REDUCTION SHOOT_DODGE_TIME_DILATION * .35f;


// WP_BLASTER
#define SHOOT_DODGE_BLASTER_DAMAGE_MULTIPLIER 1.7f
#define SHOOT_DODGE_BLASTER_BOLT_FX_SCALE 1.7f
#define SHOOT_DODGE_SPREAD_MULTIPLIER .4f

// WP_TENLOSS
#define SHOOT_DODGE_TENLOSS_CHARGE_REDUCTION SHOOT_DODGE_TIME_DILATION;



// WP_DEMP
#define SHOOT_DODGE_DEMP_CHARGE_REDUCTION SHOOT_DODGE_TIME_DILATION * .35f;




#endif// #ifndef __B_SHOOTDODGE_H__