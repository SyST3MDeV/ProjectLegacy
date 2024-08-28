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
	 * Function HeroDeckListItem.HeroDeckListItem_C.Construct
	 */
	struct UHeroDeckListItem_C_Construct_Params
	{	};

	/**
	 * Function HeroDeckListItem.HeroDeckListItem_C.OnDeckSet
	 */
	struct UHeroDeckListItem_C_OnDeckSet_Params
	{
	public:
		class UOrionMcpDeckItem*                                   Deck;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HeroDeckListItem.HeroDeckListItem_C.ExecuteUbergraph_HeroDeckListItem
	 */
	struct UHeroDeckListItem_C_ExecuteUbergraph_HeroDeckListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XYE5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
