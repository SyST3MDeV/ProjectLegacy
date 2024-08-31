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
	 * Function ConfirmCancelWidget.ConfirmCancelWidget_C.ShowConfirmWidget
	 */
	struct UConfirmCancelWidget_C_ShowConfirmWidget_Params
	{	};

	/**
	 * Function ConfirmCancelWidget.ConfirmCancelWidget_C.HideConfirmWidget
	 */
	struct UConfirmCancelWidget_C_HideConfirmWidget_Params
	{
	public:
		bool                                                       bImmediate;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConfirmCancelWidget.ConfirmCancelWidget_C.ExecuteUbergraph_ConfirmCancelWidget
	 */
	struct UConfirmCancelWidget_C_ExecuteUbergraph_ConfirmCancelWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
