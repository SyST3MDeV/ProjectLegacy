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
	 * Function ControlRow.ControlRow_C.UpdateVisibleWidget
	 */
	struct UControlRow_C_UpdateVisibleWidget_Params
	{	};

	/**
	 * Function ControlRow.ControlRow_C.UpdateBindingBrush
	 */
	struct UControlRow_C_UpdateBindingBrush_Params
	{
	public:
		bool                                                       IsGamepadEnabled;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ControlRow.ControlRow_C.Construct
	 */
	struct UControlRow_C_Construct_Params
	{	};

	/**
	 * Function ControlRow.ControlRow_C.PreConstruct
	 */
	struct UControlRow_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ControlRow.ControlRow_C.ExecuteUbergraph_ControlRow
	 */
	struct UControlRow_C_ExecuteUbergraph_ControlRow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
