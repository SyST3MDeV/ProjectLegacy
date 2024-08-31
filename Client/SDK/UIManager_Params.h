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
	 * Function UIManager.UIManager_C.Set Box Content
	 */
	struct UUIManager_C_SetBoxContent_Params
	{
	public:
		class USizeBox*                                            Box;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UOrionUIStateWidget*                                 Widget;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UIManager.UIManager_C.OnTimedOut_1304D0084FAF86AA0C7457A14A356F8D
	 */
	struct UUIManager_C_OnTimedOut_1304D0084FAF86AA0C7457A14A356F8D_Params
	{	};

	/**
	 * Function UIManager.UIManager_C.OnKilled_1304D0084FAF86AA0C7457A14A356F8D
	 */
	struct UUIManager_C_OnKilled_1304D0084FAF86AA0C7457A14A356F8D_Params
	{	};

	/**
	 * Function UIManager.UIManager_C.OnDeclined_1304D0084FAF86AA0C7457A14A356F8D
	 */
	struct UUIManager_C_OnDeclined_1304D0084FAF86AA0C7457A14A356F8D_Params
	{	};

	/**
	 * Function UIManager.UIManager_C.OnConfirmed_1304D0084FAF86AA0C7457A14A356F8D
	 */
	struct UUIManager_C_OnConfirmed_1304D0084FAF86AA0C7457A14A356F8D_Params
	{	};

	/**
	 * Function UIManager.UIManager_C.Construct
	 */
	struct UUIManager_C_Construct_Params
	{	};

	/**
	 * Function UIManager.UIManager_C.Destruct
	 */
	struct UUIManager_C_Destruct_Params
	{	};

	/**
	 * Function UIManager.UIManager_C.OnShowError
	 */
	struct UUIManager_C_OnShowError_Params
	{
	public:
		struct FOrionDialogDescription                             Description;                                             // 0x0000(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UIManager.UIManager_C.OnSetMatchInfoText
	 */
	struct UUIManager_C_OnSetMatchInfoText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UIManager.UIManager_C.OnSetMatchInfoVisibility
	 */
	struct UUIManager_C_OnSetMatchInfoVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UIManager.UIManager_C.OnStateTransitionComplete
	 */
	struct UUIManager_C_OnStateTransitionComplete_Params
	{	};

	/**
	 * Function UIManager.UIManager_C.ExecuteUbergraph_UIManager
	 */
	struct UUIManager_C_ExecuteUbergraph_UIManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6QR6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
