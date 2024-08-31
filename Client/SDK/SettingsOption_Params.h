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
	 * Function SettingsOption.SettingsOption_C.SetToggleButtonState
	 */
	struct USettingsOption_C_SetToggleButtonState_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SettingsOption.SettingsOption_C.SelectIndex
	 */
	struct USettingsOption_C_SelectIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SettingsOption.SettingsOption_C.Construct
	 */
	struct USettingsOption_C_Construct_Params
	{	};

	/**
	 * Function SettingsOption.SettingsOption_C.PreConstruct
	 */
	struct USettingsOption_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SettingsOption.SettingsOption_C.ForwardSelectedButtonChanged
	 */
	struct USettingsOption_C_ForwardSelectedButtonChanged_Params
	{
	public:
		class UOrionBaseButton*                                    SelectedButton;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ButtonIndex;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SettingsOption.SettingsOption_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_11_OrionSelectedStateChanged__DelegateSignature
	 */
	struct USettingsOption_C_BndEvt__CheckBox_K2Node_ComponentBoundEvent_11_OrionSelectedStateChanged__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Selected;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SettingsOption.SettingsOption_C.ExecuteUbergraph_SettingsOption
	 */
	struct USettingsOption_C_ExecuteUbergraph_SettingsOption_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5Y9A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SettingsOption.SettingsOption_C.OnSelectionChanged__DelegateSignature
	 */
	struct USettingsOption_C_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Selection;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
