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
	 * Function DeckTooltip.DeckTooltip_C.SetDeck
	 */
	struct UDeckTooltip_C_SetDeck_Params
	{
	public:
		class UOrionMcpDeckItem*                                   DeckItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DeckTooltip.DeckTooltip_C.HandleDeckUpdated
	 */
	struct UDeckTooltip_C_HandleDeckUpdated_Params
	{	};

	/**
	 * Function DeckTooltip.DeckTooltip_C.Hide
	 */
	struct UDeckTooltip_C_Hide_Params
	{	};

	/**
	 * Function DeckTooltip.DeckTooltip_C.SetAdditionalContent
	 */
	struct UDeckTooltip_C_SetAdditionalContent_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DeckTooltip.DeckTooltip_C.Show
	 */
	struct UDeckTooltip_C_Show_Params
	{	};

	/**
	 * Function DeckTooltip.DeckTooltip_C.ExecuteUbergraph_DeckTooltip
	 */
	struct UDeckTooltip_C_ExecuteUbergraph_DeckTooltip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F2OU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
