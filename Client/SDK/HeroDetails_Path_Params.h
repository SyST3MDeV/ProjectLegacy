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
	 * Function HeroDetails_Path.HeroDetails_Path_C.OnHeroSet
	 */
	struct UHeroDetails_Path_C_OnHeroSet_Params
	{
	public:
		class UOrionMcpHeroItem*                                   Hero;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HeroDetails_Path.HeroDetails_Path_C.ExecuteUbergraph_HeroDetails_Path
	 */
	struct UHeroDetails_Path_C_ExecuteUbergraph_HeroDetails_Path_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
