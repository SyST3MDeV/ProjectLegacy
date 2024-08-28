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
	 * Function BadgeTooltip.BadgeTooltip_C.OnUpdateLock
	 */
	struct UBadgeTooltip_C_OnUpdateLock_Params
	{
	public:
		bool                                                       bIsOwned;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BadgeTooltip.BadgeTooltip_C.ExecuteUbergraph_BadgeTooltip
	 */
	struct UBadgeTooltip_C_ExecuteUbergraph_BadgeTooltip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
