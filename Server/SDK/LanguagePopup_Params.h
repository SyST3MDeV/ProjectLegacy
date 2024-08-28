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
	 * Function LanguagePopup.LanguagePopup_C.Construct
	 */
	struct ULanguagePopup_C_Construct_Params
	{	};

	/**
	 * Function LanguagePopup.LanguagePopup_C.CustomEvent_1
	 */
	struct ULanguagePopup_C_CustomEvent_1_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanguagePopup.LanguagePopup_C.ExecuteUbergraph_LanguagePopup
	 */
	struct ULanguagePopup_C_ExecuteUbergraph_LanguagePopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LanguagePopup.LanguagePopup_C.OnLanguageChanged__DelegateSignature
	 */
	struct ULanguagePopup_C_OnLanguageChanged__DelegateSignature_Params
	{
	public:
		class FString                                              LanguageCode;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
