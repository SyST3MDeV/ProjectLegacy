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
	 * Function ComponentInventory.ComponentInventory_C.Construct
	 */
	struct UComponentInventory_C_Construct_Params
	{	};

	/**
	 * Function ComponentInventory.ComponentInventory_C.BndEvt__Button_Show_K2Node_ComponentBoundEvent_21_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UComponentInventory_C_BndEvt__Button_Show_K2Node_ComponentBoundEvent_21_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ComponentInventory.ComponentInventory_C.BndEvt__Button_Show_K2Node_ComponentBoundEvent_171_OrionSelectedStateChanged__DelegateSignature
	 */
	struct UComponentInventory_C_BndEvt__Button_Show_K2Node_ComponentBoundEvent_171_OrionSelectedStateChanged__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Selected;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ComponentInventory.ComponentInventory_C.ExecuteUbergraph_ComponentInventory
	 */
	struct UComponentInventory_C_ExecuteUbergraph_ComponentInventory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U33T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
