#pragma once

/**
 * Name: Paragon
 * Version: v34
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function DirectionalDamageIndicator.DirectionalDamageIndicator_C.Tick
	 */
	struct UDirectionalDamageIndicator_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DirectionalDamageIndicator.DirectionalDamageIndicator_C.Construct
	 */
	struct UDirectionalDamageIndicator_C_Construct_Params
	{	};

	/**
	 * Function DirectionalDamageIndicator.DirectionalDamageIndicator_C.ExecuteUbergraph_DirectionalDamageIndicator
	 */
	struct UDirectionalDamageIndicator_C_ExecuteUbergraph_DirectionalDamageIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2V7I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
