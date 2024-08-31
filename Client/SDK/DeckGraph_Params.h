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
	 * Function DeckGraph.DeckGraph_C.Set Parent Sizes
	 */
	struct UDeckGraph_C_SetParentSizes_Params
	{
	public:
		TArray<class UVerticalBoxSlot*>                            Slots;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		float                                                      Size;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GZQT[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             TextBox;                                                 // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DeckGraph.DeckGraph_C.Set Child Sizes
	 */
	struct UDeckGraph_C_SetChildSizes_Params
	{
	public:
		TArray<class UImage*>                                      Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<float>                                              Sizes;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function DeckGraph.DeckGraph_C.Construct
	 */
	struct UDeckGraph_C_Construct_Params
	{	};

	/**
	 * Function DeckGraph.DeckGraph_C.Setup Bar
	 */
	struct UDeckGraph_C_SetupBar_Params
	{
	public:
		//EDeckTooltipColumns                                        Category;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EB89[0x4];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Overall;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Top;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Middle;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Bottom;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DeckGraph.DeckGraph_C.ExecuteUbergraph_DeckGraph
	 */
	struct UDeckGraph_C_ExecuteUbergraph_DeckGraph_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_952N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
