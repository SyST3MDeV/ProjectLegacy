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
	 * Function SkinListItem_Minimal.SkinListItem_Minimal_C.BP_OnSelected
	 */
	struct USkinListItem_Minimal_C_BP_OnSelected_Params
	{	};

	/**
	 * Function SkinListItem_Minimal.SkinListItem_Minimal_C.BP_OnDeselected
	 */
	struct USkinListItem_Minimal_C_BP_OnDeselected_Params
	{	};

	/**
	 * Function SkinListItem_Minimal.SkinListItem_Minimal_C.OnSkinDefinitionSet
	 */
	struct USkinListItem_Minimal_C_OnSkinDefinitionSet_Params
	{
	public:
		class UOrionSkinItemDefinition*                            Skin;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkinListItem_Minimal.SkinListItem_Minimal_C.BP_OnSkinPurchased
	 */
	struct USkinListItem_Minimal_C_BP_OnSkinPurchased_Params
	{	};

	/**
	 * Function SkinListItem_Minimal.SkinListItem_Minimal_C.ExecuteUbergraph_SkinListItem_Minimal
	 */
	struct USkinListItem_Minimal_C_ExecuteUbergraph_SkinListItem_Minimal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9W7S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
