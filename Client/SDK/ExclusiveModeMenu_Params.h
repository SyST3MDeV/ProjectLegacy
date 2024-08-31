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
	 * Function ExclusiveModeMenu.ExclusiveModeMenu_C.Set Sub Menu Visibility
	 */
	struct UExclusiveModeMenu_C_SetSubMenuVisibility_Params
	{
	public:
		bool                                                       Visibile;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExclusiveModeMenu.ExclusiveModeMenu_C.Set Enable Back Button
	 */
	struct UExclusiveModeMenu_C_SetEnableBackButton_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExclusiveModeMenu.ExclusiveModeMenu_C.SetContext
	 */
	struct UExclusiveModeMenu_C_SetContext_Params
	{
	public:
		class FText                                                ContextName;                                             // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function ExclusiveModeMenu.ExclusiveModeMenu_C.SetTitle
	 */
	struct UExclusiveModeMenu_C_SetTitle_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function ExclusiveModeMenu.ExclusiveModeMenu_C.PreConstruct
	 */
	struct UExclusiveModeMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExclusiveModeMenu.ExclusiveModeMenu_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_529_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UExclusiveModeMenu_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_529_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExclusiveModeMenu.ExclusiveModeMenu_C.ExecuteUbergraph_ExclusiveModeMenu
	 */
	struct UExclusiveModeMenu_C_ExecuteUbergraph_ExclusiveModeMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExclusiveModeMenu.ExclusiveModeMenu_C.OnBackClicked__DelegateSignature
	 */
	struct UExclusiveModeMenu_C_OnBackClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
