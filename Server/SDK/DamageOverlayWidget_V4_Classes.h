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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass DamageOverlayWidget_V4.DamageOverlayWidget-V4_C
	 * Size -> 0x0008 (FullSize[0x02E8] - InheritedSize[0x02E0])
	 */
	class UDamageOverlayWidgetV4_C : public UOrionDamageOverlay
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Construct();
		void OnDamaged();
		void ExecuteUbergraph_DamageOverlayWidgetV4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
