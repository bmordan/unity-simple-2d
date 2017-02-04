#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// player
struct  player_t1147742565  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody2D player::playerRigidbody2D
	Rigidbody2D_t502193897 * ___playerRigidbody2D_2;
	// System.Single player::jumpforce
	float ___jumpforce_3;
	// System.Single player::speed
	float ___speed_4;
	// System.Boolean player::isJumping
	bool ___isJumping_5;

public:
	inline static int32_t get_offset_of_playerRigidbody2D_2() { return static_cast<int32_t>(offsetof(player_t1147742565, ___playerRigidbody2D_2)); }
	inline Rigidbody2D_t502193897 * get_playerRigidbody2D_2() const { return ___playerRigidbody2D_2; }
	inline Rigidbody2D_t502193897 ** get_address_of_playerRigidbody2D_2() { return &___playerRigidbody2D_2; }
	inline void set_playerRigidbody2D_2(Rigidbody2D_t502193897 * value)
	{
		___playerRigidbody2D_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerRigidbody2D_2, value);
	}

	inline static int32_t get_offset_of_jumpforce_3() { return static_cast<int32_t>(offsetof(player_t1147742565, ___jumpforce_3)); }
	inline float get_jumpforce_3() const { return ___jumpforce_3; }
	inline float* get_address_of_jumpforce_3() { return &___jumpforce_3; }
	inline void set_jumpforce_3(float value)
	{
		___jumpforce_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(player_t1147742565, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_isJumping_5() { return static_cast<int32_t>(offsetof(player_t1147742565, ___isJumping_5)); }
	inline bool get_isJumping_5() const { return ___isJumping_5; }
	inline bool* get_address_of_isJumping_5() { return &___isJumping_5; }
	inline void set_isJumping_5(bool value)
	{
		___isJumping_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
