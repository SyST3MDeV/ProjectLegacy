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
	 * Function NetworkingSettings.NetworkingSettings_C.Apply
	 */
	struct UNetworkingSettings_C_Apply_Params
	{	};

	/**
	 * Function NetworkingSettings.NetworkingSettings_C.OnLanguageChanged
	 */
	struct UNetworkingSettings_C_OnLanguageChanged_Params
	{
	public:
		class FString                                              LanguageCode;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function NetworkingSettings.NetworkingSettings_C.OnGetMenuContent_1
	 */
	struct UNetworkingSettings_C_OnGetMenuContent_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NetworkingSettings.NetworkingSettings_C.Refresh
	 */
	struct UNetworkingSettings_C_Refresh_Params
	{	};

	/**
	 * Function NetworkingSettings.NetworkingSettings_C.OnActivated
	 */
	struct UNetworkingSettings_C_OnActivated_Params
	{	};

	/**
	 * Function NetworkingSettings.NetworkingSettings_C.BndEvt__LanguageButton_K2Node_ComponentBoundEvent_268_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UNetworkingSettings_C_BndEvt__LanguageButton_K2Node_ComponentBoundEvent_268_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NetworkingSettings.NetworkingSettings_C.Construct
	 */
	struct UNetworkingSettings_C_Construct_Params
	{	};

	/**
	 * Function NetworkingSettings.NetworkingSettings_C.ExecuteUbergraph_NetworkingSettings
	 */
	struct UNetworkingSettings_C_ExecuteUbergraph_NetworkingSettings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3QIF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
